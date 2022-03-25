#ifndef CODE_MONEY_H
#define CODE_MONEY_H

#include <iostream>


class Money{
    private:
        int dollars;
        int cents;
    public:
        Money(int,int);
        Money();

        friend bool operator<(Money const &money, Money const &money1);
        friend bool operator>(Money const &money, Money const &money1);
        friend bool operator<=(Money const &money, Money const &money1);
        friend bool operator>=(Money const &money, Money const &money1);
        friend bool operator==(Money const &money, Money const &money1);
        friend bool operator!=(Money const &money, Money const &money1);
        friend Money operator+(Money const &money, Money const &money1);
        friend Money operator-(Money const &money, Money const &money1);
        friend std::ostream &operator <<(std::ostream& out, Money const &money);
};



#endif //CODE_MONEY_H