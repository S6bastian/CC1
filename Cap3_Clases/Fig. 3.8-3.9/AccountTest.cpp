//Fig. 3.9: AccountTest.cpp
//Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

using namespace std;

int main(){

    Account account1{"Jane Green",50};
    Account account2{"John Blue",-7};

    cout<<"INITIAL BALANCE"<<endl; //display initial balance of each object
    cout<<"account1: "<<account1.getName()<<" balance is $"
        <<account1.getBalance()<<endl;
    cout<<"account2: "<<account2.getName()<<" balance is $"
        <<account2.getBalance()<<endl;
    cout<<"\nDEPOSIT"<<endl;
    cout<<"Enter deposit amount for account1: "; //prompt
    int depositAmount;
    cin>>depositAmount; //obtain user input
    cout<<"adding "<<depositAmount<<" to account1 balance"<<endl;
    account1.deposit(depositAmount); //add to account1 balance

    cout<<"\nCURRENT BALANCES"<<endl; //display balances
    cout<<"account1: "<<account1.getName()<<" balance is $"
        <<account1.getBalance()<<endl;
    cout<<"account2: "<<account2.getName()<<" balance is $"
        <<account2.getBalance()<<endl;
    cout<<"\nDEPOSIT"<<endl;
    cout<<"Enter deposit amount for account2: "; //prompt
    cin>>depositAmount; //obtain user input
    cout<<"adding "<<depositAmount<<" to account2 balance"<<endl;
    account2.deposit(depositAmount); //add to account2 balance

    cout<<"\nCURRENT BALANCES"<<endl;//display balances
    cout<<"account1: "<<account1.getName()<<" balance is $"
        <<account1.getBalance()<<endl;
    cout<<"account2: "<<account2.getName()<<" balance is $"
        <<account2.getBalance()<<endl;
}   