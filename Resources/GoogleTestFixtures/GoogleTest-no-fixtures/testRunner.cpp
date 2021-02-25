#include <iostream>
#include <gtest/gtest.h>
#include <stdexcept>
#include "LibraryCode.hpp"

TEST(AccountTest, TestEmptyAccount)
{
  Account account;

  double balance = account.getBalance();

  ASSERT_EQ(0, balance);
}

TEST(AccountTest, TestDeposit)
{
  Account account;

  account.deposit(10.5);
  
  ASSERT_EQ(10.5, account.getBalance());
}


TEST(AccountTest, TestWithdrawOK)
{
  Account account;
  account.deposit(10.5);
  
  account.withdraw(3);

  ASSERT_EQ(7.5, account.getBalance());
}


TEST(AccountTest, TestWithdrawInsufficientFunds)
{
  Account account;
  account.deposit(10.5);
  
  ASSERT_THROW(account.withdraw(300), std::runtime_error);
}


TEST(AccountTest, TestTransferOK)
{
  Account account;
  account.deposit(10.5);

  Account to;

  account.transfer(to, 2);
  
  ASSERT_EQ(8.5, account.getBalance());
  ASSERT_EQ(2, to.getBalance());
}



TEST(AccountTest, TestTransferInsufficientFunds)
{
  Account account;
  account.deposit(10.5);

  Account to;

  ASSERT_THROW(account.transfer(to, 200), std::runtime_error);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
