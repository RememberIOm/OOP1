#include <iostream>
#include "date.h"
using namespace std;

int main()
{
	Date date1(5, 20, 2019);
	Date date2(123, 12, 2018); // ��ü ����

	cout << "Date class Test\n\n";

	date1.displayDate(); // ��ü1 ���
	cout << "\n";
	date2.displayDate(); // ��ü2 ���
	cout << "\n";

	return 0;
}