#include <iostream>
#include <iomanip>
#include "Leave.h"
using namespace std;

int main()
{
	Leave employee;

	cout << fixed << setprecision(2);

	while (true)
	{
		double number = 0;

		cout << "Enter number of hours worked (-1 to end): ";
		cin >> number;

		employee.fn_set_work(number);

		if (employee.fn_get_work() == -1)
		{
			break;
		}

		employee.fn_set_leave();

		cout << "Accrued leave:	" << employee.fn_get_leave() << " hours";
		cout << "\n\n";
	}

	return 0;
}