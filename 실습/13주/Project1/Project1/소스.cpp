#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "세 수를 입력하시오: ";
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
		cout << i << "은(는) " << arrCount[i] << "번 사용되었습니다.\n";
	}

	return 0;
}