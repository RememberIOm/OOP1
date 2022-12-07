#include <iostream>
using namespace std;

int main()
{
	int counter = 0; // 카운터
	int number = 0; // 입력 받는 수
	int largest = 0; // 가장 큰 수

	while (counter < 10)
	{
		cin >> number; // 수 입력
		
		if (counter == 0) // 첫 수를 가장 큰 수로 지정
		{
			largest = number;
		}

		if (number > largest) // 입력 받은 수가 가장 큰 수보다 크면 가장 큰 수로 지정
		{
			largest = number;
		}

		counter++; // 카운터 증가
	}

	cout << largest; // 가장 큰 수 출력

	return 0;
}