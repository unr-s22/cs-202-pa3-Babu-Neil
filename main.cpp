
#include "Money.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Account.h"

int main(){
    Money start(300,23);
    Account a(start);
    std::cout << a << std::endl;
    
    a.makeDeposit(Money(200,00));
    a.makeDeposit(Money(300,24));
    a.makeDeposit(Money(501,22));

    std::cout << a << std::endl;

    a.makeWithdrawls(Money(300,10));
    a.makeWithdrawls(Money(201,34));

    std::cout << a << std::endl;


    Money m(100,0);
    Money m1(100,0);

    if (m > m1){
        std::cout << "True" <<std::endl;
    }
    else{
        std::cout << "False" <<std::endl;
    }
    if (m < m1){
        std::cout << "True" <<std::endl;
    }
    else{
        std::cout << "False" <<std::endl;
    }
    if (m >= m1){
        std::cout << "True" <<std::endl;
    }
    else{
        std::cout << "False" <<std::endl;
    }
    if (m <= m1){
        std::cout << "True" <<std::endl;
    }
    else{
        std::cout << "False" <<std::endl;
    }
    if (m == m1){
        std::cout << "True" <<std::endl;
    }
    else{
        std::cout << "False" <<std::endl;
    }
    if (m != m1){
        std::cout << "True" <<std::endl;
    }
    else{
        std::cout << "False" <<std::endl;
    }

    std::cout << m+m1 << std::endl;

    std::cout << m -m1 <<std::endl;

    std::cout << m << std::endl;

    return 0;
}