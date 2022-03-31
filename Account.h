#ifndef CODE_ACCOUNT_H
#define CODE_ACCOUNT_H

#include <iostream>
#include <iomanip>
#include "Money.h"
#include <vector>

class Account: public Money {
    protected:
        bool mutable flag = 0;
        int mutable balance_dollars =0;
        int mutable balance_cents = 0;
        int mutable num = 0;
    public:
        Account(Money money);

        void makeDeposit(Money money);
        void makeWithdrawls(Money money);

        std::vector<Money> balance;

        friend std::ostream &operator <<(std::ostream& out1, const Account  &account);

        ~Account();

};

#endif //CODE_ACCOUNT_H