#include<iostream>
using namespace std;

class bank {
	int balance, accountNumber, amount;
	string name, typeOfAccount;
	
	public:
		void get() {
			cout << "Enter your name, account number, type of account & balance.\n";
			cin >> name >> accountNumber >> typeOfAccount >> balance;
		}
		
		void withdraw() {
			cout << "Enter the amount you want to withdraw.\n";
			cin >> amount;
			if (amount > balance) {
				cout << "Your balance is insufficient.";
			} else {
				balance -= amount;
				cout << "Your remaining balance is " << balance;
			}
		}
		
		void deposit() {
			cout << "Enter the amount you want to deposit.\n";
			cin >> amount;
			balance += amount;
			cout << "Your remaining balance is " << balance;
		}
};

int main() {
	int choice;
	bank customer;
	customer.get();
	cout << "Choice:\n1. Deposit\n2.Withdraw\n";
	cin >> choice;
	switch (choice) {
		case 1:
			customer.deposit();
			break;
			
		case 2:
			customer.withdraw();
			break;
	}
	return 0;
}
