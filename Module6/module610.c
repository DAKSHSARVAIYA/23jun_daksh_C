#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    Account(string name, int accNumber, string type, double initialBalance) {
        customerName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    virtual void displayBalance() {
        cout << "Account Holder: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. Current Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. Current Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

class Curr_Acc : public Account {
private:
    double minBalance;
    double penalty;

public:
    Curr_Acc(string name, int accNumber, double initialBalance, double minBal, double pen)
        : Account(name, accNumber, "Current", initialBalance) {
        minBalance = minBal;
        penalty = pen;
    }

    void checkMinimumBalance() {
        if (balance < minBalance) {
            cout << "Balance below minimum. Penalty imposed." << endl;
            balance -= penalty;
            cout << "Updated Balance: " << balance << endl;
        } else {
            cout << "Balance is sufficient." << endl;
        }
    }

    void displayBalance() override {
        cout << "Current Account Details:" << endl;
        Account::displayBalance();
    }
};

class Sav_Acc : public Account {
private:
    double interestRate;

public:
    Sav_Acc(string name, int accNumber, double initialBalance, double rate)
        : Account(name, accNumber, "Savings", initialBalance) {
        interestRate = rate;
    }

    void depositInterest(int timePeriod) {
        double interest = (balance * interestRate * timePeriod) / 100;
        balance += interest;
        cout << "Interest added. Current Balance: " << balance << endl;
    }

    void displayBalance() override {
        cout << "Savings Account Details:" << endl;
        Account::displayBalance();
    }
};

int main() {
    Curr_Acc currentAcc("John Doe", 123456, 5000, 1000, 50);
    currentAcc.displayBalance();
    currentAcc.checkMinimumBalance();
    currentAcc.deposit(2000);
    currentAcc.withdraw(6000);
    currentAcc.checkMinimumBalance();

    Sav_Acc savingAcc("Jane Smith", 654321, 10000, 5.0);
    savingAcc.displayBalance();
    savingAcc.depositInterest(1); // Assuming 1 year

    return 0;
}
