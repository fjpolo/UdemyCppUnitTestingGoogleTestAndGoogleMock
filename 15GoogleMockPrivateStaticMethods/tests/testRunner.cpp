#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <map>
#include "../Libraries/IDatabaseConnection.hpp"
#include "../Libraries/Employee.hpp"
#include "../Libraries/EmployeeManager.hpp"

/**
 * \class HelperClass
 */
class HelperClass{
    private:
        virtual void increaseConnectionCount();
        friend IDatabaseConnection;
};

/**
 * \class MockDatabaseConnection
 */
//class MockDatabaseConnection{
class MockDatabaseConnection : public IDatabaseConnection{
    public:
    MockDatabaseConnection(std::string serverAdress, HelperClass *hc);
    /*Mocks*/
    MOCK_METHOD(void, connect, ());
    MOCK_METHOD(void, disconnect, ());
    MOCK_METHOD(float, getSalary, (int), (const));
    MOCK_METHOD(void, updateSalary, (int, float));
    MOCK_METHOD(std::vector<Employee>, getSalariesRange, (float), (const));
    MOCK_METHOD(std::vector<Employee>, getSalariesRange, (float, float), (const));
    MOCK_METHOD(void, onConnect, (override));
    void someMemberMethod(std::string param){
        std::cout << "Member method called with param = " << param << "\n";
        throw std::runtime_error("Dummy error!");
    }

    protected:
    
    private:

};
MockDatabaseConnection::MockDatabaseConnection(std::string serverAdress, HelperClass *hc)
:IDatabaseConnection(serverAdress, hc){

}
class MockHelper:public HelperClass{
    public:
        MOCK_METHOD(void, increaseConnectionCount, (), (override));
}


/**
 * TestEmployeeManager - TestCallback
 */
void realCallback(){
    std::cout << "Real callback called\n";
}
TEST(TestEmployeeManager, increaseConnectionCount){
    /*Assign*/
    MockHelper hc;
    EXPECT_CALL(hc, onConnect());
    MockDatabaseConnection dbConnection("DummyAddresss", &hc;
    EXPECT_CALL(dbConnection, onConnect());
    dbConnection.connect();
}


/**
 * main runner
 */
int main(int argc, char **argv)
{
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
