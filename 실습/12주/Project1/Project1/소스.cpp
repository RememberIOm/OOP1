#include <iostream>
using namespace std;

void swap(int& num)
{
	num = 1;

	cout << num << " " << &num << endl;
}

int main()
{
	int a{ 1234 };

	cout << a << " " << &a << endl;

	swap(a);

	cout << a;
}