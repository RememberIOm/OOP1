#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int set_num()
{
	int a{};
	int b{};
	int c{};

	srand(time(NULL));
	a = rand() % 9 + 1;
	
	do
	{
		srand(time(NULL));
		b = rand() % 9 + 1;
	} while (a == b);
	
	do
	{
		srand(time(NULL));
		c = rand() % 9 + 1;
	} while (a == c or b == c);

	int num{};

	num = a * 100 + b * 10 + c;

	return num;
}

int set_strike(int a, int b, int c, int user_a, int user_b, int user_c)
{
	int count{};

	if (a == user_a)
	{
		count++;
	}
	if (b == user_b)
	{
		count++;
	}
	if (c == user_c)
	{
		count++;
	}

	return count;
}

int set_ball(int a, int b, int c, int user_a, int user_b, int user_c)
{
	int count{};

	if (a == user_b)
	{
		count++;
	}
	else if (a == user_c)
	{
		count++;
	}

	if (b == user_a)
	{
		count++;
	}
	else if (b == user_c)
	{
		count++;
	}

	if (c == user_a)
	{
		count++;
	}
	else if (c == user_b)
	{
		count++;
	}

	return count;
}

int main()
{
	int num = set_num();

	int a = num / 100;
	int b = num % 100 / 10;
	int c = num % 100 % 10;

	int strike{};

	do
	{
		int user;
		cout << "1 ~ 9 ������ ���� �� �ߺ����� 3���� �Է����ּ���\n";
		cin >> user;

		while (user > 999 or user < 100)
		{
			cout << "�ٽ� �Է��ϼ���\n";
			cin >> user;
		}

		int user_a = user / 100;
		int user_b = user % 100 / 10;
		int user_c = user % 100 % 10;

		

		int ball{ set_ball(a, b, c, user_a, user_b, user_c) };
		strike = set_strike(a, b, c, user_a, user_b, user_c);

		cout << ball << " B " << strike << " S\n";
	} while (strike != 3);

	cout << "�����մϴ�. 3��Ʈ����ũ �����Դϴ�";

	return 0;
}