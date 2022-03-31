#include "Account.h"

Account::Account(Money money){
    balance_dollars = money.dollars;
    balance_cents = money.cents;
}

void Account::makeDeposit(Money money){
    balance.push_back(money);
    flag = 1;
}

void Account::makeWithdrawls(Money money){
    Money a(0,0);
    balance.push_back(a-money);
    flag = 1;
}

std::ostream &operator << (std::ostream& out1, const Account&  account){

    Money zero(0,0);
    Money current_bal(account.balance_dollars, account.balance_cents);
    std::vector<Money> balance = account.balance;
    int num_dep = 0; int num_withd = 0; int num_paran_dep = 0; int num_paran_with = 0;

    if(account.flag == 1 ){
        for (account.num; account.num < balance.size(); account.num++){
            Money m = balance[account.num];
            if(m>=zero){
                current_bal = current_bal + m;
            }
            else{
                m.dollars = abs(m.dollars);
                m.cents = abs(m.cents);
                current_bal = current_bal - m;
            }
        }
        account.balance_dollars = current_bal.dollars;
        account.balance_cents = current_bal.cents;
    }

    for(Money m : balance){
        if(m>=zero){num_dep++;}
        else{num_withd++;}
    } 

    out1 << "Account Details \n" 
    << "-------------------------- \n" 
    << "Current balance: "<< current_bal
    << "\n-------------------------- \n" 
    << "Number of Depostis: " << num_dep << std::endl;

    for(Money dep : balance){
        if (dep>=zero){
            num_paran_dep ++;
            out1 << "(" << num_paran_dep << ")" << dep;
            if (num_paran_dep < num_dep){
                out1 << std::endl;  
            }
          
        }
    }
    out1 << "\n-------------------------- \n" 
    << "Number of Withdrawls: " << num_withd
    <<  "\n-------------------------- \n";

    for(Money withd : balance){
        if (withd  < zero){
            num_paran_with ++;
            withd.dollars = abs(withd.dollars);
            withd.cents = abs(withd.cents);
            out1 << "(" << num_paran_with << ")" << (withd) << std::endl;
        }
    }

    return out1;
}

Account::~Account(){}

