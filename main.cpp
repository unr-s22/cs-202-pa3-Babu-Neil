
#include "Money.h"
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    Money m(99,0);
    Money m1(100,49);

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