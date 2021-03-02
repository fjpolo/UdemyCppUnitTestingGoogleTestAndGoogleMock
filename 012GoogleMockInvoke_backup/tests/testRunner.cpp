#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <map>
#include "../Libraries/IDatabaseConnection.hpp"
#include "../Libraries/Employee.hpp"
#include "../Libraries/EmployeeManager.hpp"

/**
 * \class MockDatabaseConnection
 */
//class MockDatabaseConnection{
class MockDatabaseConnection : public IDatabaseConnection{
    public:
    MockDatabaseConnection(std::string serverAdress);
    /*Mocks*/
    MOCK_METHOD(void, connect, ());
    MOCK_METHOD(void, disconnect, ());
    MOCK_METHOD(float, getSalary, (int), (const));
    MOCK_METHOD(void, updateSalary, (int, float));
    MOCK_METHOD(std::vector<Employee>, getSalariesRange, (float), (const));
    MOCK_METHOD(std::vector<Employee>, getSalariesRange, (float, float), (const));
    void someMemberMethod(std::string param){
        std::cout << "Member method called with param = " << param << "\n";
        throw std::runtime_error("Dummy error!");
    }

    protected:
    
    private:

};
MockDatabaseConnection::MockDatabaseConnection(std::string serverAdress)
:IDatabaseConnection(serverAdress){

}

/**
 * TestEmployeeManager - TestConnectionError
 */
TEST(TestEmployeeManager, TestConnectionError){
    /*Assign*/
    MockDatabaseConnection dbConnection("DummyAddresss");
    /*Mock Act*/
    EXPECT_CALL(dbConnection, connect()).WillOnce(testing::Throw(std::runtime_error("Dummy Error")));
    // EXPECT_CALL(dbConnection, disconnect());
    /*Assert*/
    ASSERT_THROW(EmployeeManager employeeManager(&dbConnection), std::runtime_error);
}

/**
 * TestEmployeeManager - TestConnectionErrorAction
 */
ACTION(myThrow){
    std::cout << "Throwing an error!\n";
    throw std::runtime_error("Dummy error");
}
TEST(TestEmployeeManager, TestConnectionErrorAction){   
    /*Assign*/
    MockDatabaseConnection dbConnection("DummyAddresss");
    /*Mock Act*/
    EXPECT_CALL(dbConnection, connect()).WillOnce(myThrow());
    /*Assert*/
    ASSERT_THROW(EmployeeManager employeeManager(&dbConnection), std::runtime_error);
}

/**
 * TestEmployeeManager - TestConnectionErrorInvoke
 */
void someFreeFunction(){
    std::cout << "Free function\n";
    throw std::runtime_error("Dummy exception");
}
TEST(TestEmployeeManager, TestConnectionErrorInvoke){
    /*Assign*/
    MockDatabaseConnection dbConnection("DummyAddresss");
    /*Mock Act*/
    // EXPECT_CALL(dbConnection, connect()).WillOnce(testing::Invoke(someFreeFunction));
    /*EXPECT_CALL(dbConnection, connect()).WillOnce(testing::Invoke([](){
        std::cout << "Lambda called\n";
        throw std::runtime_error("Dummy error");
    }));*/
    auto boundMethod = std::bind(&MockDatabaseConnection::someMemberMethod, &dbConnection, "Some param");
    EXPECT_CALL(dbConnection, connect()).WillOnce(testing::InvokeWithoutArgs(boundMethod));

    /*Assert*/
    ASSERT_THROW(EmployeeManager employeeManager(&dbConnection), std::runtime_error);

}

/**
 * TestEmployeeManager - TestgetSalariesRange
 */
TEST(TestEmployeeManager, TestgetSalariesRange){
    /*Assign*/
    const int low = 5000, high = 8000;
    MockDatabaseConnection dbConnection("DummyAddresss");
    std::vector<Employee> returnedVector{
                                        Employee{1, 5600, "John"},
                                        Employee{2, 7000, "Jane"},
                                        Employee{3, 6600, "Anne"},
                                        };
    /*Mock Act*/
    EXPECT_CALL(dbConnection, connect());
    EXPECT_CALL(dbConnection, disconnect());
    EXPECT_CALL(dbConnection, getSalariesRange(low, high)).WillOnce(testing::Return(returnedVector));

    EmployeeManager employeeManager(&dbConnection);
    std::map<std::string, float> returnedMap = employeeManager.getSalariesBetween(low, high);

    /*Assert*/
    for(auto it=returnedMap.begin(); it!=returnedMap.end(); ++it){
        std::cout << it->first << " " << it->second << '\n';
        ASSERT_THAT(it->second, testing::AllOf(testing::Gt(low), testing::Lt(high)));
        ASSERT_THAT(it->second, testing::AnyOf(testing::Gt(low), testing::Lt(high-3000)));

    }

}

/**
 * main runner
 */
int main(int argc, char **argv)
{
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
