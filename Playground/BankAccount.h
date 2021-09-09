#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
	public:
		BankAccount(string owner);
		BankAccount(string owner, int balance);
		void Deposit(int amount);
		void WithDrawal(int amount);
		string GetOwner() const;
		int GetBalance() const;
	private:
		string owner;
		int balance;
};

#endif 