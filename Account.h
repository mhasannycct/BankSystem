#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    Account(double); 
    void bl_credit(double); 
    bool bl_debit(double); 
    void setBalance(double); 
    double getBalance(); 
private:
    double balance; 
};

#endif