//2.28

#include <iostream>
using namespace std;

int Num100 = 0;
int Num10 = 0;
int Num1 = 0; // ���� �ʱ�ȭ

void setNum(int); // �Լ� ����

void main()
{
	int number = 0; // ���� �ʱ�ȭ

	cout << "Please enter a four-digit integer.\n";
	cin >> number; // �Է� �޴� �� �ڸ� ����

	setNum(number); // �Լ� ����

	cout << "\n\n"; // ������ ���� �ٹٲ�

	cout << Num1 << "  ";
	cout << Num10 / 10 << "  ";
	cout << Num100 / 100 << "  ";
	cout << number / 1000 << "\n"; // ���

	system("pause");
}

void setNum(int Num) // number�� ���� �� ���� õ�� �ڸ�, ���� �ڸ�, ���� �ڸ������� ������ �Լ�
{
	Num100 = Num % 1000; // õ�� �ڸ� ����
	Num10 = Num100 % 100; // ���� �ڸ� ����
	Num1 = Num10 % 10; // ���� �ڸ� ����
}