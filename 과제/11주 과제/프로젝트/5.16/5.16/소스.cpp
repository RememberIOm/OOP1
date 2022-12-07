#include <iostream>
using namespace std;

void graph(int);

int main()
{
	int arr[5];
	for (int i{}; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i{}; i < 5; i++)
	{
		graph(arr[i]);
	}

	return 0;
}

void graph(int X)
{
	for (int i{}; i < 2; i++)
	{
		for (int j{}; j < X; j++)
		{
			cout << X;
		}

		cout << "\n";
	}
}