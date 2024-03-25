#include <iostream>
#include <string>

class BankAccount {
private:
    std::string ownerName;
    std::string accountNumber;
    double balance; 

public:
    // Constructor
    BankAccount(const std::string &name, const std::string &accNumber, double initialBalance)
        : ownerName(name), accountNumber(accNumber), balance(initialBalance) {}

    // Member functions
    void deposit(double amount) {
        balance += amount;
        std::cout << "tien gui cua toi $" << amount << " thanh cong \n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            std::cout << "Insufficient funds. Withdrawal failed.\n";
        }
    }

    void display() const {
        std::cout << "Thông tin tài khoan :\n";
        std::cout << "ten tai khoan : " << ownerName << "\n";
        std::cout << "so tai khoan: " << accountNumber << "\n";
        std::cout << "so du $" << balance << "\n";
        
    } 


};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("Tran Hai Luong", "1234567823", 100000.0);

    // Perform operations
    myAccount.display();
    myAccount.deposit(700.0);
    myAccount.withdraw(900.0);
    myAccount.withdraw(8000.0); // This should fail due to insufficient funds
    myAccount.display();

    return 0;
}

