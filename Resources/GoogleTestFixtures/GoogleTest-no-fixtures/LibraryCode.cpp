#include "LibraryCode.hpp"
#include <stdexcept>

Account::Account() : mBalance{0}
{
}

void Account::deposit(double sum)
{
    mBalance += sum;
}

void Account::withdraw(double sum)
{
    if(mBalance < sum)
    {
        throw std::runtime_error("Insufficient funds");
    }
    mBalance -= sum;
}

double Account::getBalance() const { return mBalance; }

void Account::transfer(Account &to, double sum)
{
    withdraw(sum); //will throw an error if not enough
    to.deposit(sum);
}