#include <iostream>
using namespace std;

void get_star() // �� ���
{
	cout << "* ";
}

void get_space() // ¦�� �࿡ ó�� ���� ���
{
	cout << ' ';
}

void get_line() // �� �ٲ�
{
	cout << endl;
}

int main()
{
	for (int i = 0; i < 8; i++) // 8���̹Ƿ� 8�� �ݺ�
	{
		if (i % 2 == 0) // Ȧ�� ���� �� ����
		{
			for (int j = 0; j < 8; j++) // �� ���
			{
				get_star();
			}
			get_line(); // �� �ٲ�
		}
		
		else
		{
			get_space(); // ¦�� ���� ó�� ����
			for (int j = 0; j < 8; j++) // �� ���
			{
				get_star();
			}
			get_line(); // �� �ٲ�
		}
	}

	return 0;
}