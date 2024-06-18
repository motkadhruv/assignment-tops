//Q2. Define a class to represent a bank account. Include the following members:


#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    string accountHolderName;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(string name, int number, string type, double initialBalance) 
	{
        accountHolderName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }


    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposited: " << amount << endl;
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
            cout << "Withdrew: " << amount << endl;
        } 
		else if (amount > balance) 
		{
            cout << "Insufficient balance!" << endl;
        } 
		else 
		{
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    
    void display() const 
	{
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() 
{

    BankAccount account("dhruv motka", 123456, "Savings", 1000.0);

    account.display();
    cout << endl;

    account.deposit(500.0);
    account.withdraw(200.0);
    cout << endl;
    account.display();

    return 0;
}

