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
    protected:
    private:

};


/**
 * main runner
 */
int main(int argc, char **argv)
{
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
