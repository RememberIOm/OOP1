#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int min{ INT_MAX };
	int X;

	for (int i{}; i < N; i++)
	{
		cin >> X;
		if (X < min)
		{
			min = X;
		}
	}

	cout << min;

	return 0;
}