// 2.26

#include <iostream>
#include <string>
using namespace std;

void main()
{
	cout << "First pattern\n\n";

	cout << "* * * * * * * * " << "\n";
	cout << " * * * * * * * *" << "\n";
	cout << "* * * * * * * * " << "\n";
	cout << " * * * * * * * *" << "\n";
	cout << "* * * * * * * * " << "\n";
	cout << " * * * * * * * *" << "\n";
	cout << "* * * * * * * * " << "\n";
	cout << " * * * * * * * *" << "\n";

	cout << "\n\nSecond pattern\n\n";

	string stPattern = "* "; // *�� ������ ���ڿ��� ����
	
	for (int i = 0; i < 4; i++) // �ѹ� �ݺ��� �� ���� ��µǱ� ������ 4�� �ݺ�
	{
		for (int i = 0; i < 8; i++) // ù��° ���� stPattern�� 8�� �ݺ�
		{
			cout << stPattern;
		}

		cout << "\n";

		for (int i = 0; i < 8; i++) // �ι�° ���� stPattern�� ������ �ٲ� 8�� �ݺ�
		{
			cout << stPattern[1] << stPattern[0];
		}

		cout << "\n";
	}
	
	system("pause");
} //main