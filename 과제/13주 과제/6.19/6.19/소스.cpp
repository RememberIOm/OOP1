#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

double hypotenuse(double, double);

int main()
{
	vector< vector<double> > vtrTriangle(3);
	for (int i{}; i < 3; ++i)
	{
		vtrTriangle.at(i).resize(2);
	}
	vtrTriangle.at(0) = { 3.0, 4.0 };
	vtrTriangle.at(1) = { 5.0, 12.0 };
	vtrTriangle.at(2) = { 8.0, 15.0 };

	cout << setprecision(1) << fixed;

	cout << "Triangle" << setw(10) << "Side 1" << setw(10) << "Side 2" << setw(10) << "Result";
	for (int i{}; i < vtrTriangle.size(); ++i)
	{
		cout << "\n" << i + 1 << setw(17) << vtrTriangle.at(i).at(0) << setw(10) << vtrTriangle.at(i).at(1) << setw(10) << hypotenuse(vtrTriangle.at(i).at(0), vtrTriangle.at(i).at(1));
	}

	return 0;
}

double hypotenuse(double a, double b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}
