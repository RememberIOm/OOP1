//2.24

#include <iostream>
using namespace std;

void setOddEven(int); // �Լ� ����

void main()
{
	int Number1 = 0;
	int Number2 = 0; // ���� �ʱ�ȭ

	cout << "Input two integers:\n";
	cin >> Number1 >> Number2; // ���� �Է�

	cout << "\n";
	
	cout << "First number is ";
	setOddEven(Number1);
	cout << "\n";
	
	cout << "Second number is ";
	setOddEven(Number2);
	cout << "\n"; // ���� ���� �Ǵ�

	cout << "Sum of two numbers is ";
	setOddEven(Number1 + Number2);
	cout << "\n"; // ���� �� �Ǵ�

	cout << "\n";

	system("pause");
}

void setOddEven(int Num) // ¦��, Ȧ�� �Ǵ� �Լ�
{
	if (1 == Num % 2) // �������� 1�̸� Ȧ��
	{
		cout << "Odd";
	}

	else // 0�̸� ¦��
	{
		cout << "Even";
	}
}