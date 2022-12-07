#include <iostream>
#include <iomanip>
using namespace std;

/*
void main()
{
	cout << sizeof(char) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(long double) << endl;

	system("pause");
}
*/


/*
void setNum(int Num)
{
	cout << Num * Num * 3.1415 << "\n";
}

void main()
{
	int R = 0;
	cin >> R;

	cout << "The result is ";
	cout << setprecision(2) << fixed;
	setNum(R);
	cout << endl;

	system("pause");
}
*/

/*
int main()
{
	const double pi = 3.1415;

	cout << pi << "\n";

	system("pause");
}
*/

void main()
{
	int a, b;

	cout << "정수 2개 입력: " << "\n";
	cin >> a >> b;

	if (a == b)
	{
		cout << a << "=" << b << "\n";
	}
	else
	{
		cout << a << "!=" << b << "\n";

		if (a > b)
		{
			cout << a << ">"<< b << "\n";
		}
		else
		{
			cout << a << "<" << b << "\n";
		}
	}
	
	system("pause");
}