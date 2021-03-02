#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <map>

#include "IDatabaseConnection.hpp"
#include "Employee.hpp"
#include "EmployeeManager.hpp"


class MockDatabaseConnection : public IDatabaseConnection
{
public:
    MockDatabaseConnection(std::string serverAddress);

    //MOCK_METHODn n=0,10
    MOCK_METHOD0(connect, void());
    MOCK_METHOD0(disconnect, void());

    MOCK_CONST_METHOD1(getSalary, float(int));
    MOCK_METHOD2(updateSalary, void(int, float) );

    MOCK_CONST_METHOD1(getSalariesRange, std::vector<Employee>(float));
    MOCK_CONST_METHOD2(getSalariesRange, std::vector<Employee>(float, float));

    void someMemberMethod(std::string param)
    {
        std::cout << "Member method called with param = " << param << "\n";
        throw std::runtime_error("Dummy error!");
    }
};

MockDatabaseConnection::MockDatabaseConnection(std::string serverAddress) : IDatabaseConnection(serverAddress)
{

}

TEST(TestEmployeeManager, TestConnectionError)
{
    MockDatabaseConnection dbConnection("DummyAddresss");
    EXPECT_CALL(dbConnection, connect()).WillOnce(testing::Throw(std::runtime_error("Dummy Error")));
    
    ASSERT_THROW(EmployeeManager employeeManager(&dbConnection), std::runtime_error);
}

ACTION(myThrow)
{
    std::cout << "Throwing an error!\n";
    throw std::runtime_error("Dummy error");
}

TEST(TestEmployeeManager, TestConnectionErrorAction)
{
    MockDatabaseConnection dbConnection("DummyAddresss");
    EXPECT_CALL(dbConnection, connect()).WillOnce(myThrow());
    
    ASSERT_THROW(EmployeeManager employeeManager(&dbConnection), std::runtime_error);
}

void someFreeFunction()
{
    std::cout << "Free function\n";
    throw std::runtime_error("Dummy exception");
}
TEST(TestEmployeeManager, TestConnectionErrorInvoke)
{
    MockDatabaseConnection dbConnection("DummyAddresss");
    //EXPECT_CALL(dbConnection, connect()).WillOnce(testing::Invoke(someFreeFunction));
    /*EXPECT_CALL(dbConnection, connect()).WillOnce(testing::Invoke([](){
        std::cout << "Lambda called\n";
        throw std::runtime_error("Dummy error");
    }));*/

    auto boundMethod = std::bind(&MockDatabaseConnection::someMemberMethod, &dbConnection, "Some param");
    EXPECT_CALL(dbConnection, connect()).WillOnce(testing::InvokeWithoutArgs(boundMethod));
    
    
    ASSERT_THROW(EmployeeManager employeeManager(&dbConnection), std::runtime_error);
}


int main(int argc, char **argv)
{
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
