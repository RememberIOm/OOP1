#include <iostream>
#include "Motor.h"
using namespace std;

int main()
{
	Motorvehicle car1{ "Make1", "Fuel Type1", 2019, "Color1", 1000 };
	Motorvehicle car2{ "Make2", "Fuel Type2", 2009, "Color2", 2000 };
	
	cout << "demonstrate first Motor Vehicle's capabilities.\n\n";
	car1.displayCarDetails();

	cout << "\n\ndemonstrate second Motor Vehicle's capabilities.\n\n";
	car2.displayCarDetails();

	return 0;
}