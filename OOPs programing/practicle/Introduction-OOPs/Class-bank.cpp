#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;   

public:
    
    BankAccount() {
        balance = 0;
    }

    
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;  

    acc.deposit(1000);
    acc.withdraw(400);
    acc.showBalance();

    return 0;
}