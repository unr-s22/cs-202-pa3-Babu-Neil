#ifndef CODE_MONEY_H
#define CODE_MONEY_H

#include <iostream>
#include <iomanip>

class Money{
    public:
        int dollars;
        int cents;
        Money(int d,int c);

        Money(){
            dollars = 0;
            cents = 0;
        }

        friend bool operator<(Money const &money, Money const &money1);
        friend bool operator>(Money const &money, Money const &money1);
        friend bool operator<=(Money const &money, Money const &money1);
        friend bool operator>=(Money const &money, Money const &money1);
        friend bool operator==(Money const &money, Money const &money1);
        friend bool operator!=(Money const &money, Money const &money1);
        friend Money operator+(Money const &money, Money const &money1);
        friend Money operator-(Money const &money, Money const &money1);
        friend std::ostream &operator <<(std::ostream& out, Money const &money);

        ~Money();
};



#endif //CODE_MONEY_H