//2.28

#include <iostream>
using namespace std;

int Num100 = 0;
int Num10 = 0;
int Num1 = 0; // 변수 초기화

void setNum(int); // 함수 선언

void main()
{
	int number = 0; // 변수 초기화

	cout << "Please enter a four-digit integer.\n";
	cin >> number; // 입력 받는 네 자리 정수

	setNum(number); // 함수 실행

	cout << "\n\n"; // 가독성 위해 줄바꿈

	cout << Num1 << "  ";
	cout << Num10 / 10 << "  ";
	cout << Num100 / 100 << "  ";
	cout << number / 1000 << "\n"; // 출력

	system("pause");
}

void setNum(int Num) // number을 받은 후 각각 천의 자리, 백의 자리, 십의 자리까지를 버리는 함수
{
	Num100 = Num % 1000; // 천의 자리 버림
	Num10 = Num100 % 100; // 백의 자리 버림
	Num1 = Num10 % 10; // 십의 자리 버림
}