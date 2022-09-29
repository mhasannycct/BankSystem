#include <iostream>
#include <iomanip>
#include "Account.h" 
#include "SavingsAccount.h" 
#include "CheckingAccount.h" 
using namespace std;

int main()
{ 
    Account account1(2900.0); 
    SavingsAccount account2(200.0, .06); 
    CheckingAccount account3(100.0, 3.0); 

    

    
    
    cout << "\nAccount balance is: $" << account1.getBalance() << endl;
    cout << "\nSavings account balance is: $" << account2.getBalance() << endl;
    cout << "\nChecking account balance is: $" << account3.getBalance() << endl;

    
    cout << "\nDebiting $53.00 from  account." << endl;
    account1.bl_debit(3.0); 
    cout << "\nDebiting $9.00 from savings account." << endl;
    account2.bl_debit(90.0); 
    cout << "\nDebiting $21.00 from checking account." << endl;
    account3.bl_debit(10.0); 

  

    
    cout << "\nAccount balance is: $" << account1.getBalance() << endl;
    cout << "\nSavings account balance is: $" << account2.getBalance() << endl;
    cout << "\nChecking account balance is: $" << account3.getBalance() << endl;

	
    
    cout << "\nCrediting $200.00 to Account." << endl;
    account1.bl_credit(200.0); 
    cout << "\nCrediting $125.00 to savings account." << endl;
    account2.bl_credit(125.0); 
    cout << "\nCrediting $20.00 to checking account." << endl;
    account3.bl_credit(70.0);

    

    cout << "\nAccount balance is: $" << account1.getBalance() << endl;
    cout << "\nSavings account balance is: $" << account2.getBalance() << endl;
    cout << "\nChecking account balance is: $" << account3.getBalance() << endl;

    
    double intEarned = account2.calculateInterest();
    cout << "\nAdding $" << intEarned << " interest to savings account."
        << endl;
    account2.bl_credit(intEarned);

    cout << "\nNew savings account balance is: $" << account2.getBalance() << endl;
}