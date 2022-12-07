#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharges(double);

int main()
{
	cout << fixed;

	double car1, car2, car3;
	cin >> car1 >> car2 >> car3;

	cout << "Car" << setw(11) << "Hours" << setw(14) << "Charge\n"
		<< "1" << setw(13) << setprecision(1) << car1 << setw(13) << setprecision(2) << calculateCharges(car1) << "\n"
		<< "2" << setw(13) << setprecision(1) << car2 << setw(13) << setprecision(2) << calculateCharges(car2) << "\n"
		<< "3" << setw(13) << setprecision(1) << car3 << setw(13) << setprecision(2) << calculateCharges(car3) << "\n"
		<< "TOTAL" << setw(9) << setprecision(1) << car1 + car2 + car3
		<< setw(13) << setprecision(2) << calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3);

	return 0;
}

double calculateCharges(double hour)
{
	double result;
	if (hour <= 3)
	{
		result = 20.00;
	}
	else
	{
		result = 20.00 + (hour - 3) * 5;
	}

	if (result > 50)
	{
		result = 50;
	}

	return result;
}
