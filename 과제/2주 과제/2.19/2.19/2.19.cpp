//2.19

#include <iostream>
using namespace std;

int findSmallest();
int findLargest(); // �Լ� ����

int Number1 = 0;
int Number2 = 0;
int Number3 = 0; // ���� 3�� ����

void main()
{
	cout << "Input three different integers:\n";
	cin >> Number1 >> Number2 >> Number3; // Ű����� �Է� ����

	int sum = Number1 + Number2 + Number3; // ���� 3�� ���� (Sum�� Average���� ���)

	cout << "\n";
	cout << "Sum is " << sum << "\n";
	cout << "Average is " << sum / 3 << "\n";
	cout << "Product is " << Number1 * Number2 * Number3 << "\n";
	cout << "Smallest is " << findSmallest() << "\n";
	cout << "Largest is " << findLargest() << "\n";
	cout << "\n"; //���

	system("pause");
} //main

int findSmallest() { // ���� ���� ���� ã�� �Լ�
	int Min = Number1; // ���� ���� ���� Number1�̶�� ����

	if (Min > Number2)
	{
		Min = Number2;
	}
	
	if (Min > Number3)
	{
		Min = Number3;
	}

	return Min;
} //findSmallest

int findLargest() // ���� ū ���� ã�� �Լ�
{ // ���� ū ���� Number1�̶�� ����
	int Max = Number1;

	if (Max < Number2)
	{
		Max = Number2;
	}

	if (Max < Number3)
	{
		Max = Number3;
	}

	return Max;
} //findLargest
