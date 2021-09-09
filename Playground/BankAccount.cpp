#include "BankAccount.h"

BankAccount::BankAccount(string owner) : owner(owner){
	balance = 0;
}

BankAccount::BankAccount(string owner, int balance) {
	this->owner = owner;
	if (balance <= 0) {
		cout << "Invalid value: " << balance << " for the balance amt. Setting to 0.\n";
		this->balance = 0;
	}
	else {
		this->balance = balance;
	}
}

void BankAccount::Deposit(int amount) {
	if (amount <= 0) {
		cout << "You have entered an invalid amount to deposit\n";
	}
	else {
		balance += amount;
	}
}
void BankAccount::WithDrawal(int amount){
	if (amount <= 0) {
		cout << "You have entered an invalid amount to withdrawal\n";
	}
	else if (amount > balance) {
		cout << "You have insufficient funds to withdrawal this amount.\n";
	}
	else {
		balance -= amount;
	}
}

string BankAccount::GetOwner() const {
	return owner;
}

int BankAccount::GetBalance() const{
	return balance;
}