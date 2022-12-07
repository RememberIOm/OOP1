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

	string stPattern = "* "; // *과 공백을 문자열로 저장
	
	for (int i = 0; i < 4; i++) // 한번 반복에 두 줄이 출력되기 때문에 4번 반복
	{
		for (int i = 0; i < 8; i++) // 첫번째 줄은 stPattern을 8번 반복
		{
			cout << stPattern;
		}

		cout << "\n";

		for (int i = 0; i < 8; i++) // 두번째 줄은 stPattern을 순서를 바꿔 8번 반복
		{
			cout << stPattern[1] << stPattern[0];
		}

		cout << "\n";
	}
	
	system("pause");
} //main