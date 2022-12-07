#include <iostream>
using namespace std;

void get_star() // 별 찍기
{
	cout << "* ";
}

void get_space() // 짝수 행에 처음 공백 찍기
{
	cout << ' ';
}

void get_line() // 줄 바꿈
{
	cout << endl;
}

int main()
{
	for (int i = 0; i < 8; i++) // 8줄이므로 8번 반복
	{
		if (i % 2 == 0) // 홀수 행일 때 실행
		{
			for (int j = 0; j < 8; j++) // 별 찍기
			{
				get_star();
			}
			get_line(); // 줄 바꿈
		}
		
		else
		{
			get_space(); // 짝수 행의 처음 공백
			for (int j = 0; j < 8; j++) // 별 찍기
			{
				get_star();
			}
			get_line(); // 줄 바꿈
		}
	}

	return 0;
}