//2.19

#include <iostream>
using namespace std;

int findSmallest();
int findLargest(); // 함수 선언

int Number1 = 0;
int Number2 = 0;
int Number3 = 0; // 변수 3개 지정

void main()
{
	cout << "Input three different integers:\n";
	cin >> Number1 >> Number2 >> Number3; // 키보드로 입력 받음

	int sum = Number1 + Number2 + Number3; // 변수 3개 덧셈 (Sum과 Average에서 사용)

	cout << "\n";
	cout << "Sum is " << sum << "\n";
	cout << "Average is " << sum / 3 << "\n";
	cout << "Product is " << Number1 * Number2 * Number3 << "\n";
	cout << "Smallest is " << findSmallest() << "\n";
	cout << "Largest is " << findLargest() << "\n";
	cout << "\n"; //출력

	system("pause");
} //main

int findSmallest() { // 가장 작은 수를 찾는 함수
	int Min = Number1; // 가장 작은 수를 Number1이라고 가정

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

int findLargest() // 가장 큰 수를 찾는 함수
{ // 가장 큰 수를 Number1이라고 가정
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
