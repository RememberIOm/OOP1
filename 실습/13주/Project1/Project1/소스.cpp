#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "�� ���� �Է��Ͻÿ�: ";
	int A{}, B{}, C{};
	cin >> A >> B >> C;

	string strNum{ to_string(A * B * C) };
	int arrCount[10]{};	
	const unsigned int kNumSize{ strNum.length() };

	for (int i{}; i < kNumSize; ++i)
	{
		for (int j{}; j <= 9; ++j)
		{
			if (strNum[i] == j + '0')
			{
				++arrCount[j];
			}
		}
	}

	for (int i{}; i < 10; ++i)
	{
		cout << i << "��(��) " << arrCount[i] << "�� ���Ǿ����ϴ�.\n";
	}

	return 0;
}