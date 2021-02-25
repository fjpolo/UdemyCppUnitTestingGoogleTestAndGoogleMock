#include <iostream>
#include <gtest/gtest.h>
#include <stdexcept>
#include "../LibraryCode/LibraryCode.hpp"

/**
 * \class AccountTestFixture
 */
class AccountTestFixture:public testing::Test{
    public:
    AccountTestFixture();
    ~AccountTestFixture();
    void SetUp() override;
    void TearDown() override;
    static void SetUpTestCase();
    static void TearDownTestCase();
    protected:
        Account account;
        // Account *account;
    private:
};
AccountTestFixture::AccountTestFixture(){
    std::cout << "Constructor called\n";
}
AccountTestFixture::~AccountTestFixture(){
        std::cout << "Destructor called\n";
}
void AccountTestFixture::SetUp(){
    std::cout << "SetUp() called\n";
    // account.deposit(10.5);
    // account = new Account();
    // account->deposit(10.5);
    account.deposit(10.5);
}
void AccountTestFixture::TearDown(){
    std::cout << "TearDown() called\n";
    // delete account;
}
void AccountTestFixture::SetUpTestCase(){
    std::cout << "SetUpTestCase() called\n";
}
void AccountTestFixture::TearDownTestCase(){
    std::cout << "TearDownTestCase() called\n";
    // delete account;
}
/**
 * Account - TestEmptyAccount
 */
TEST(Account, TestEmptyAccount)
{
  std::cout << "Test body\n";
  Account account;

  double balance = account.getBalance();
  ASSERT_EQ(0, balance);
}

/**
 * AccountTestFixture - TestDeposit
 */
TEST_F(AccountTestFixture, TestDeposit)
{  
  std::cout << "Test body\n";
  ASSERT_EQ(10.5, account.getBalance());
}

/**
 * AccountTestFixture - TestWithdrawOK
 */
TEST_F(AccountTestFixture, TestWithdrawOK)
{ 
  std::cout << "Test body\n";
  account.withdraw(3);
  ASSERT_EQ(7.5, account.getBalance());
}

/**
 * AccountTestFixture - TestWithdrawInsufficientFunds
 */
TEST_F(AccountTestFixture, TestWithdrawInsufficientFunds)
{
  std::cout << "Test body\n";
  ASSERT_THROW(account.withdraw(300), std::runtime_error);
}

/**
 * AccountTestFixture - TestTransferOK
 */
TEST_F(AccountTestFixture, TestTransferOK)
{
  std::cout << "Test body\n";
  Account to;
  account.transfer(to, 2);
  ASSERT_EQ(8.5, account.getBalance());
  ASSERT_EQ(2, to.getBalance());
}

/**
 * AccountTestFixture - TestTransferInsufficientFunds
 */
TEST_F(AccountTestFixture, TestTransferInsufficientFunds)
{
  std::cout << "Test body\n";
  Account to;
  ASSERT_THROW(account.transfer(to, 200), std::runtime_error);
}

/**
 * main runner
 */
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
