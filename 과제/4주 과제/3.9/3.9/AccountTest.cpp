#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account account1{ "Jane Green", 50 };
	Account account2{ "John Blue", -7 };


	cout << "account1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance(); // ÀÜ¾× Ç¥½Ã

	cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount); // account1 ÀÔ±Ý

	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance(); // ÀÜ¾× Ç¥½Ã

	cout << "\n\nEnter deposit amount for account2: ";
	cin >> depositAmount;
	cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount); // account2 ÀÔ±Ý

	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance(); // ÀÜ¾× Ç¥½Ã

	cout << "\n\nEnter withdraw amount for account1: ";
	int withdrawAmount;
	cin >> withdrawAmount;
	cout << "withdrawing " << withdrawAmount << " to account1 balance";
	account1.withdraw(withdrawAmount); // account1 Ãâ±Ý

	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance(); // ÀÜ¾× Ç¥½Ã

	cout << "\n\nEnter withdraw amount for account2: ";
	cin >> withdrawAmount;
	cout << "withdrawing " << withdrawAmount << " to account2 balance";
	account2.withdraw(withdrawAmount); // account2 Ãâ±Ý

	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		<< account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
		<< account2.getBalance() << endl; // ÀÜ¾× Ç¥½Ã
}