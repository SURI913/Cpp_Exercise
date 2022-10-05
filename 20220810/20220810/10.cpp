#include <iostream>
using namespace std;

class BankAccount {
public:
	string number;
	int balance;

	void init(string, int);
	void deposit(int amount);
	void withdraw(int amont);
};

void BankAccount::init(string n, int b) {
	number = n;
	balance = b;
}

void BankAccount::deposit(int amount) {
	balance += amount;
}

void BankAccount::withdraw(int amount) {
	balance -= amount;
}

int main() {
	BankAccount bank;

	cout << "ÇöÀç ÀÜ¾×: 1000000" << endl;
	bank.init("000-000-000000", 1000000);
	bank.deposit(1000000);
	cout << "after deposit(1000000) ÇöÀç ÀÜ¾×: " << bank.balance << endl;
	bank.withdraw(1000000);
	cout << "after withdraw(1000000) ÇöÀç ÀÜ¾×: " << bank.balance << endl;
	return 0;
}