#include <iostream>
using namespace std;

/*
int main()
{
	int i = 50;

	cout << i << endl;
	cout << ++i << endl;
	cout << i-- << endl;
	cout << --i << endl;
	cout << i++ << endl;
	cout << --i << endl;
	cout << i++ << endl;
	cout << ++i << endl;

	return 0;
}
*/

/*
int main()
{
	cout << "�� ���� ����ұ��?\n";

	int Num = 0;
	cin >> Num;

	for (int i = 0; i < Num / 2 + 1; i++)
	{
		for (int j = 0; j < Num / 2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			if (2 * i + 1 <= Num)
			{
				cout << "*";
			}
		}

		cout << "\n";
	}

	for (int i = 0; i < Num / 2; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < ( Num - 1 ) - ( 2 * i + 1 ); j++)
		{
			cout << "*";
		}

		if (i < Num / 2 - 1)
		{
			cout << "\n";
		}
	}

	return 0;
}
*/

/*
int main()
{
	cout << "������ ��� �� �л� ���� �Է��Ͻÿ�: ";

	int Student = 0;
	cin >> Student;

	double Sum = 0;
	int temp = 0;

	for (int i = 0; i < Student; i++)
	{
		cout << "������ �Է��Ͻÿ�: ";
		cin >> temp;

		Sum = Sum + temp;
		temp = 0;
	}

	cout << "�������� ��ü ������ " << Sum;
	cout << "\n�� ������ ����� " << Sum / Student << "�Դϴ�.\n";

	return 0;
}
*/

int main()
{
	char a;
	int p = 0;
	int f = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "���: ";
		cin >> a;
		
		if (a == 'p')
		{
			p++;
		}
		else if (a == 'f')
		{
			f++;
		}
		else
		{
			cout << "����";
		}

		
	}

	cout << "Passed " << p;
	cout << "\nFailed " << f << endl;

	return 0;
}