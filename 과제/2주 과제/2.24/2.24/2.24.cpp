//2.24

#include <iostream>
using namespace std;

void setOddEven(int); // 함수 선언

void main()
{
	int Number1 = 0;
	int Number2 = 0; // 변수 초기화

	cout << "Input two integers:\n";
	cin >> Number1 >> Number2; // 변수 입력

	cout << "\n";
	
	cout << "First number is ";
	setOddEven(Number1);
	cout << "\n";
	
	cout << "Second number is ";
	setOddEven(Number2);
	cout << "\n"; // 각각 변수 판단

	cout << "Sum of two numbers is ";
	setOddEven(Number1 + Number2);
	cout << "\n"; // 더한 수 판단

	cout << "\n";

	system("pause");
}

void setOddEven(int Num) // 짝수, 홀수 판단 함수
{
	if (1 == Num % 2) // 나머지가 1이면 홀수
	{
		cout << "Odd";
	}

	else // 0이면 짝수
	{
		cout << "Even";
	}
}