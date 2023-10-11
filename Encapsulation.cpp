#include <iostream>

class BankAccount {
public:
    BankAccount(std::string owner, double balance) : owner_(owner), balance_(balance) {}

    void Deposit(double amount) {
        if (amount > 0) {
            balance_ += amount;
        }
    }

    void Withdraw(double amount) {
        if (amount > 0 && balance_ >= amount) {
            balance_ -= amount;
        }
    }

    double GetBalance() {
        return balance_;
    }

private:
    std::string owner_;
    double balance_;
};

int main() {
    BankAccount account("John Doe", 1000);
    account.Deposit(500);
    account.Withdraw(300);

    std::cout << "Account balance: " << account.GetBalance() << std::endl;

    return 0;
}
