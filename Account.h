#ifndef CODE_ACCOUNT_H
#define CODE_ACCOUNT_H

#include <iostream>
#include <iomanip>
#include "Money.h"
#include <vector>

class Account: public Money {
    protected:
        bool mutable flag = 0;
        int mutable num_depos = 1;
        int mutable num_with =0;
    public:
        Account(Money money);

        void makeDeposit(Money money);
        void makeWithdrawls(Money money);

        mutable std::vector<Money> deposit;
        std::vector<Money> withdraw;

        friend std::ostream &operator <<(std::ostream& out1, const Account  &account);

        ~Account();

};

#endif //CODE_ACCOUNT_H