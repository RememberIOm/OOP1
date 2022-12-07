#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int digit{ 5 };
	if (a < 10)
		digit = 1;
	else if (a < 100)
		digit = 2;
	else if (a < 1000)
		digit = 3;
	else if (a < 10000)
		digit = 4;

	int quotient;
	for (int i{ digit - 1 }; i >= 0; --i)
	{
		int tenPow{ static_cast<int>(pow(10, i)) };
		quotient = a / tenPow;
		a = a % tenPow;

		cout << quotient << "  ";
	}

	return 0;
}