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

    protected:
    
    private:

};
MockDatabaseConnection::MockDatabaseConnection(std::string serverAdress)
:IDatabaseConnection(serverAdress){

}

/**
 * TestEmployeeManager - TestConnection
 */
TEST(TestEmployeeManager, TestConnection){
    MockDatabaseConnection dbConnection("dummyConnection");
    EXPECT_CALL(dbConnection, connect());
    EXPECT_CALL(dbConnection, disconnect());
    EmployeeManager employeeManager(&dbConnection);
}

/**
 * TestEmployeeManager - TestUpdateSalary
 */
TEST(TestEmployeeManager, TestUpdateSalary)
{
    MockDatabaseConnection dbConnection("dummyConnection");
    EXPECT_CALL(dbConnection, connect());
    EXPECT_CALL(dbConnection, disconnect());
    EXPECT_CALL(dbConnection, updateSalary(testing::_, testing::_)).Times(1);   

    EmployeeManager employeeManager(&dbConnection);

    employeeManager.setSalary(50, 6000);
}

/**
 * TestEmployeeManager - TestGetSalary
 */
TEST(TestEmployeeManager, TestGetSalary)
{
    const int employeeId = 50;
    const float salary = 6100.0;
    MockDatabaseConnection dbConnection("dummyConnection");
    EXPECT_CALL(dbConnection, connect());
    EXPECT_CALL(dbConnection, disconnect());
    EXPECT_CALL(dbConnection, getSalary(testing::_)).Times(1).WillOnce(testing::Return(salary));

    EmployeeManager employeeManager(&dbConnection);

    float returnedSalary = employeeManager.getSalary(employeeId);

    ASSERT_EQ(salary, returnedSalary);
}

/**
 * main runner
 */
int main(int argc, char **argv)
{
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
