#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class CheckingAccount : public Account
{
public:
   
    CheckingAccount(double, double);

    void bl_credit(double);
    bool bl_debit(double);
private:
    double Fee; // fee charged per transaction

    
    void chgFee();
};

#endif