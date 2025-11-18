// Question 3 — Bank Account System
// Create a class Bank with data members: accountNumber and balance.
// Write functions to deposit, withdraw, and show current balance.
// Create an object and perform deposit, withdrawal, and display operations.    
#include <iostream>
using namespace std;
class Bank{
    public:
    int accountNumber;
    float balance;

    void deposit(float amount){
        balance += amount;
        cout<<"Amount Deposited: "<<amount<<endl;
    }
    void withdraw(float amount){
        if (amount <= balance){
            balance -= amount;
            cout<<"Amout Withdrawls: "<<amount<<endl;
        }else{
            cout<<"Insufficent Balance! "<<endl;
        }
    }
    void showBalance(){
        cout<<"Current balance: "<<balance<<endl;
    }
};
int main(){
    Bank b1;
    b1.accountNumber = 123442;
    b1.balance = 5000;
    b1.deposit(2000);
    b1.withdraw(3000);
    b1.showBalance();
    return 0;
}