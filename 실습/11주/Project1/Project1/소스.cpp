#include <iostream>
using namespace std;

/*
using std::cout;
using std::endl;

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x{ 1 };

int main()
{
	int x{ 5 };

	cout << "local x in main's outer scope is " << x << endl;

	{
		int x{ 7 };

		cout << "local x in main's inner scope is " << x << endl;
	}

	cout << "local x in main's outer scope is " << x << endl;

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	cout << "\nlocal x in main is " << x << endl;
	return 0;
}

void useLocal(void)
{
	int x{ 25 };

	cout << "\nlocal x is " << x << " on entering useLocal" << endl;
	x++;
	cout << "local x is " << x << " on exiting useLocal" << endl;
}

void useStaticLocal(void)
{
	static int x{ 50 };

	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
	x++;
	cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
}

void useGlobal(void)
{
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "global x is " << x << " on exiting useGlobal" << endl;
}
*/

/*
void swap(int* a, int* b)
{
	int temp{ *a };
	a = b;
	*b = temp;
}

int main()
{
	int a{ 1 };
	int b{ 2 };

	cout << a << " " << b << endl;

	swap(a, b);

	cout << a << " " << b << endl;
}
*/

/*
int fn_fac(int);

int main()
{
	int a;
	cin >> a;

	cout << fn_fac(a);

	return 0;
}

int fn_fac(int a)
{
	if (a == 0)
	{
		return 1;
	}
	return a * fn_fac(a - 1);
}
*/

/*
int fn_arr(int);

int main()
{
	int a;
	cin >> a;

	for (int i{ 1 }; i <= a; i++)
	{
		cout << fn_arr(i) << " ";
	}
}

int fn_arr(int a)
{
	if (a == 1 or a == 2)
	{
		return 1;
	}

	return fn_arr(a - 2) + fn_arr(a - 1);
}
*/

int fn_pow(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}

	return a * fn_pow(a, b - 1);
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << fn_pow(a, b);

	return 0;
}