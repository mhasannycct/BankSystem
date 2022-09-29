#include <iostream>
#include "CheckingAccount.h"
using namespace std;


CheckingAccount::CheckingAccount(double intBal, double fee)
    : Account(intBal)
{
    if (fee >= 0.0)
        Fee = fee;
    else
        cout << "Transaction fee must be >= 0.0" << endl;
} 

void CheckingAccount::bl_credit(double amount)
{
    Account::bl_credit(amount); 
    chgFee();
}


bool CheckingAccount::bl_debit(double amount)
{
    bool suc =Account::bl_debit(amount); 

    if (suc) 
    {
        chgFee();
        return true;
    }
	
    else 
        return false;
} 


void CheckingAccount::chgFee()// I am subtracting  the transaction fee
{
    Account::setBalance(getBalance() - Fee);
    cout << " Transaction fee is : " << "$" << Fee  << endl;
}