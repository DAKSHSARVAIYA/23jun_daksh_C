#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string customerName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance) {
        customerName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    virtual void displayBalance() {
        cout << "Account Holder: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class SavingAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingAccount(string name, int accNumber, double initialBalance, double rate)
        : BankAccount(name, accNumber, initialBalance) {
        interestRate = rate;
    }

    void calculateInterest(int timePeriod) {
        double interest = (balance * interestRate * timePeriod) / 100;
        balance += interest;
        cout << "Interest added. Current Balance: " << balance << endl;
    }

    void displayBalance() override {
        cout << "Saving Account Details:" << endl;
        BankAccount::displayBalance();
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double serviceCharge;

public:
    CurrentAccount(string name, int accNumber, double initialBalance, double minBalance, double charge)
        : BankAccount(name, accNumber, initialBalance) {
        minimumBalance = minBalance;
        serviceCharge = charge;
    }

    void withdraw(double amount) {
        if (balance - amount < minimumBalance) {
            cout << "Insufficient balance! Service charge will be imposed." << endl;
            balance -= serviceCharge;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Current Balance: " << balance << endl;
        }
    }

    void displayBalance() override {
        cout << "Current Account Details:" << endl;
        BankAccount::displayBalance();
    }
};

int main() {
    SavingAccount savingAcc("John Doe", 123456, 5000, 5.0);
    savingAcc.displayBalance();
    savingAcc.calculateInterest(1); // Assuming 1 year

    CurrentAccount currentAcc("Jane Smith", 654321, 10000, 2000, 50);
    currentAcc.displayBalance();
    currentAcc.withdraw(3000);

    return 0;
}

