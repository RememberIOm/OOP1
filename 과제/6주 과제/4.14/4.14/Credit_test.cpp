#include <iostream>
#include <iomanip>
#include "Credit.h"
using namespace std;

int main()
{
	Credit account1;

	cout << fixed << setprecision(2);

	while (true)
	{
		double number = 0;

		cout << "Enter account number (or -1 to quit): ";
		cin >> number;
		account1.fn_set_account_number(number);

		if (account1.fn_get_account_number() == -1)
		{
			break;
		}

		cout << "Enter beginning balance: ";
		cin >> number;
		account1.fn_set_balance_old(number);

		cout << "Enter total charges: ";
		cin >> number;
		account1.fn_set_charge(number);

		cout << "Enter total credits: ";
		cin >> number;
		account1.fn_set_credit(number);

		cout << "Enter credit limit: ";
		cin >> number;
		account1.fn_set_limit(number);

		account1.fn_set_balance_new();

		cout << "New balance is " << account1.fn_get_balance_new();
		cout << "\n";
		
		if (account1.fn_return_limit() == true)
		{
			cout << "\n";

			continue;
		}
		else
		{
			cout << "Account:      " << account1.fn_get_account_number();
			cout << "\n";

			cout << "Credit limit: " << account1.fn_get_limit();
			cout << "\n";

			cout << "Balance:      " << setw(5) << account1.fn_get_balance_new();
			cout << "\n";

			cout << "Credit Limit Exceeded.";
			cout << "\n\n";
		}
	}

	return 0;
}