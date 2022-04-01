#include "Account.h"

Account::Account(Money money){
    deposit.push_back(money);
}

void Account::makeDeposit(Money money){
    deposit.push_back(money);
    flag = 1;
}

void Account::makeWithdrawls(Money money){
    withdraw.push_back(money);
    flag = 1;
}

std::ostream &operator << (std::ostream& out1, const Account&  account){

    Money current = account.deposit[0];

    if(account.flag == 1 ){
        for (account.num_depos; account.num_depos < account.deposit.size(); account.num_depos++){
            Money dep = account.deposit[account.num_depos];
            current = current + dep;
        }
        for (account.num_with; account.num_with < account.withdraw.size(); account.num_with++){
            Money wit = account.withdraw[account.num_with];
            current = current - wit;
        }
        account.deposit.at(0) = current;
    }

    out1 << "Account Details \n" 
    << "-------------------------- \n" 
    << "Current balance: "<< current
    << "\n-------------------------- \n" 
    << "Number of Depostis: " << account.num_depos - 1 << std::endl;

    for (int i = 1; i < account.deposit.size(); i++){
        Money dep = account.deposit[i];
        out1 << "(" << i << ")" << dep;
        if (i < account.deposit.size()-1){
            out1 << std::endl;  
        }
    }
    
    out1 << "\n-------------------------- \n" 
    << "Number of Withdrawls: " << account.num_with
    <<  "\n-------------------------- \n";

    for (int i = 0; i < account.withdraw.size(); i++){
        Money with = account.withdraw[i];
        out1 << "(" << i+1 << ")" << with;
        if (i < account.deposit.size()-1){
            out1 << std::endl;  
        }   
    }

    return out1;
}

Account::~Account(){}

