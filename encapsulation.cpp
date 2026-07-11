#include <iostream>
#include <string>

// Encapsulation: data is hidden (private) and accessed only through public methods.
class BankAccount {
private:
    std::string owner;
    double balance;

public:
    BankAccount(const std::string& ownerName, double initialBalance)
        : owner(ownerName), balance(initialBalance) {
        if (balance < 0) {
            balance = 0;
        }
    }

    std::string getOwner() const {
        return owner;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            std::cout << "Deposit amount must be positive.\n";
        }
    }

    bool withdraw(double amount) {
        if (amount <= 0) {
            std::cout << "Withdrawal amount must be positive.\n";
            return false;
        }
        if (amount > balance) {
            std::cout << "Insufficient funds.\n";
            return false;
        }
        balance -= amount;
        return true;
    }

    void display() const {
        std::cout << "Owner: " << owner << ", Balance: $" << balance << '\n';
    }
};

int main() {
    BankAccount account("Alice", 1000.0);

    account.display();

    account.deposit(250.0);
    account.withdraw(400.0);

    // Direct access to private members is not allowed:
    // account.balance = 99999;  // compile error

    account.display();

    return 0;
}
