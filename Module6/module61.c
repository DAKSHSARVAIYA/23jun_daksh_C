class BankAccount;
    def __init__(self, depositor_name, account_number, account_type, balance);
        self.depositor_name = depositor_name
        self.account_number = account_number
        self.account_type = account_type
        self.balance = balance

    def deposit(self, amount);
        if amount > 0:
            self.balance += amount
            print(f"Amount {amount} deposited successfully.")
        else:
            print("Invalid amount for deposit.")

    def withdraw(self, amount);
        if amount > 0 and amount <= self.balance;
            self.balance -= amount
            print(f"Amount {amount} withdrawn successfully.")
        else;
            print("Insufficient balance or invalid amount for withdrawal.")

    def display(self);
        print(f"Name: {self.depositor_name}")
        print(f"Balance: {self.balance}")


# Example usage:
account1 = BankAccount("John Doe", "123456789", "Savings", 1000)
account1.deposit(500)
account1.display()
account1.withdraw(200)
account1.display()

