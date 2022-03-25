
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
    moneyans.dollars =  money.dollars + money1.dollars;
    moneyans.cents = money.cents + money1.cents;

    return moneyans;
}

Money operator-(Money const &money, Money const &money1){
    Money moneyans;
    moneyans.dollars =  money.dollars - money1.dollars;
    moneyans.cents = money.cents - money1.cents;

    return moneyans;
}

std::ostream &operator << (std::ostream& out, const Money& money){
    out << "$" << money.dollars << "."<< money.cents;
    return out;
}
