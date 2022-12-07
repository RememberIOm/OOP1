#include <iostream>
#include "date.h"
using namespace std;

int main()
{
	Date date1(5, 20, 2019);
	Date date2(123, 12, 2018); // 按眉 积己

	cout << "Date class Test\n\n";

	date1.displayDate(); // 按眉1 免仿
	cout << "\n";
	date2.displayDate(); // 按眉2 免仿
	cout << "\n";

	return 0;
}