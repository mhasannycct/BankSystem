#include "SavingsAccount.h"
#include <iostream>
using namespace std;

//  initializes the balance and interest rate
SavingsAccount::SavingsAccount(double intBal, double rate)
: Account(intBal) 
{
    if (rate >= 0.0)
        interestRate = rate;
    else
	    cout << "Interest rate must be >= 0.0" << endl;
}


double SavingsAccount::calculateInterest()
{
    return getBalance() * interestRate;
}