#include <iostream>
#include "Account.h"
using namespace std;



// Creating Account constructor to initializes the data member balance
Account::Account(double intBal)
{
    
    if (intBal >= 0.0)
        balance = intBal;
    else
        cout<<"The initial balance is invalid,it cannot be negative" <<endl;
}


void Account::bl_credit(double amount)// I am adding amount to the account balance
{
    balance = balance + amount;
}


bool Account::bl_debit(double amount)
{
    if (amount > balance)
    {
        cout << "Debit amount exceeded account balance." << endl;
        return false;
    } 
    else 
    {
        balance = balance - amount;
        return true;
    } 
} 


void Account::setBalance(double newBalance)
{
    balance = newBalance;
} 


double Account::getBalance()
{
    return balance;
} 