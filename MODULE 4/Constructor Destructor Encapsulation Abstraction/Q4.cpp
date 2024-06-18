//Q4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;
class BankAccount 
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance) 
	{
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposited is: " << amount << endl;
        } 
		else 
		{
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrew is: " << amount << endl;
        } 
		else if (amount > balance) 
		{
            cout << "Insufficient funds!" << endl;
        } 
		else 
		{
            cout << "Invalid withdraw amount!" << endl;
        }
    }

    void displayAccountDetails() const 
	{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance is: " << balance << endl;
    }
};

int main() 
{
    BankAccount myAccount(12345, 1000.0);
    myAccount.displayAccountDetails();
    myAccount.deposit(500.0);
    myAccount.displayAccountDetails();
    myAccount.withdraw(300.0);
    myAccount.displayAccountDetails();
    myAccount.withdraw(1500.0);
    myAccount.displayAccountDetails();

    return 0;
}

