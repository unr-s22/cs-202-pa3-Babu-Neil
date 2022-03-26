
#include "Money.h"

Money::Money(int d, int c){
    dollars = d;
    cents = c;
}

bool operator>(Money const &money, Money const &money1){
    if(money.dollars > money1.dollars){
        return true;
    } 
    else if((money.dollars == money1.dollars) && (money.cents > money1.cents)){
        return true;
    }
    else{
        return false;
    }
}
bool operator<(Money const &money, Money const &money1){
    if(money.dollars < money1.dollars){
        return true;
    } 
    else if((money.dollars == money1.dollars) && (money.cents < money1.cents)){
        return true;
    }
    else{
        return false;
    }
}
bool operator>=(Money const &money, Money const &money1){
    if(money.dollars > money1.dollars){
        return true;
    } 
    else if((money.dollars == money1.dollars) && (money.cents >= money1.cents)){
        return true;
    }
    else{
        return false;
    }
}
bool operator<=(Money const &money, Money const &money1){
    if(money.dollars < money1.dollars){
        return true;
    } 
    else if((money.dollars == money1.dollars) && (money.cents <= money1.cents)){
        return true;
    }
    else{
        return false;
    }
}
bool operator==(Money const &money, Money const &money1){
    if((money.dollars == money1.dollars) && (money.cents == money1.cents) ){
        return true;
    }
    else{
        return false;
    }
}
bool operator!=(Money const &money, Money const &money1){
    if((money.dollars != money1.dollars) || (money.cents != money1.cents) ){
        return true;
    }
    else{
        return false;
    }
}
Money operator+(Money const &money, Money const &money1){
    Money moneyans;
    moneyans.dollars = money.dollars + money1.dollars + (money.cents + money1.cents)/100;
    moneyans.cents = (money.cents + money1.cents)%100;

    return moneyans;
}

Money operator-(Money const &money, Money const &money1){
    Money moneyans;
    int total1, total2;
    bool neg = false;
    total1 = money.dollars*100 + money.cents;
    total2 = money1.dollars*100 + money1.cents;
    total1 = total1 - total2;
    moneyans.dollars = abs(total1/100);
    moneyans.cents = abs(total1%100);
    if (total1 < -100){
        moneyans.dollars =  moneyans.dollars * -1;
    }
    else if(total1 <0){
        moneyans.cents = moneyans.cents* -1;
    }

    return moneyans;
}

std::ostream &operator << (std::ostream& out, const Money& money){
    out << "$" << money.dollars << "."<< std::setw(2) <<std::setfill('0') << money.cents;
    return out;
}
