#include <iostream>
using namespace std;

int main()
{
	int counter = 0; // ī����
	int number = 0; // �Է� �޴� ��
	int largest = 0; // ���� ū ��

	while (counter < 10)
	{
		cin >> number; // �� �Է�
		
		if (counter == 0) // ù ���� ���� ū ���� ����
		{
			largest = number;
		}

		if (number > largest) // �Է� ���� ���� ���� ū ������ ũ�� ���� ū ���� ����
		{
			largest = number;
		}

		counter++; // ī���� ����
	}

	cout << largest; // ���� ū �� ���

	return 0;
}