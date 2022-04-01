
#include "Money.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Account.h"

int main(){
    Money start(300,23);
    Account a(start);
    std::cout << a << std::endl;

    Money d1(200,00); Money d2(300,24); Money d3(501,22);
    a.makeDeposit(d1);
    a.makeDeposit(d2);
    a.makeDeposit(d3);

    std::cout << a << std::endl;

    Money w1(300,10); Money w2(201,34);
    a.makeWithdrawls(w1);
    a.makeWithdrawls(w2);

    std::cout << a << std::endl;


    Money m(101,0);
    Money m1(100,01);

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