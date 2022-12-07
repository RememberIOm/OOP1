#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

unsigned long long get_factorial(int num) // 팩토리얼을 구하는 함수
{
	unsigned long long result = 1; // 팩토리얼은 큰 수이므로 long long 자료형을 사용하였고, 양수이므로 unsigned하였다.

	for (int i = 0; i < num; i++) // 책에 주어진 수식
	{
		result = result * (i + 1); // result로 계속 값을 갱신한다.
	}

	return result; // result를 반환한다.
}

long double get_e(int num, int x) // e^x를 구하는 함수
{
	long double result = 0; // e는 소수점의 정확도가 중요하므로 가장 큰 부동소수점 자료형인 long double을 사용하였다.

	for (int i = 0; i < num; i++) // 책에 주어진 수식
	{
		if (get_factorial(i) != 0) // 0 나누기 오류를 예외처리 하였다.
		{
			long double pw = pow(x, i); // pow 함수가 반환하는 값은 "9.76563e+06" 이러한 형식이므로, 지수를 없애기 위해 long long 자료형에 저장하였다.
			result = result + pw * 1.0 / get_factorial(i); // result로 값을 갱신하고, long double에 저장하기 위해 1.0을 곱해주었다.
		}
	}

	return result; // result 값을 반환한다.
}

int main()
{
	cout << fixed << setprecision(16); // 소수점 아래 16자리까지 표현한다.

	cout << "4.35의 a번 문제\n\n" << "팩토리얼을 구할 정수: ";
	int N; // 사용자가 입력하는 수를 받는 변수를 정의
	cin >> N;
	cout << get_factorial(N); // 팩토리얼을 구하는 함수를 사용한다.

	cout << "\n\n\n4.35의 b번 문제\n\n" << "수식에서 더할 항의 수: ";
	cin >> N;
	cout << get_e(N, 1); // e^x를 구하는 함수를 사용한다. 여기서 구하는 e는 지수가 없으므로 1로 설정한다.

	cout << "\n\n\n4.35의 c번 문제\n\n" << "e^x 에서의 x의 값: ";
	int x; // 사용자가 입력한 지수를 받는 변수를 정의
	cin >> x;
	cout << "\n항의 수가 크면 x의 제곱이 자료형의 한계를 넘어 오류가 날 수 있음.\n\n수식에서 더할 항의 수: ";
	cin >> N;
	cout << get_e(N, x); // e^x를 구하는 함수를 사용한다.

	return 0;
}