#include <iostream>
using namespace std;

int main()
{
	unsigned long long seed1 = 0; // 시드 1은 0
	unsigned long long seed2 = 1; // 시드 2는 1
	unsigned long long temp1 = seed1 + seed2; // temp1에 시드 1과 시드 2를 더함
	unsigned long long temp2 = seed2; // temp2에 두 번째 수를 넣음
	unsigned long long temp3; // temp3 선언

	cout << seed1; // 첫 번째 수 출력
	cout << " " << seed2; // 두 번째 수 출력

	while (true)
	{
		cout << " "; // 공백
		cout << temp1; // 첫 번째 수와 두 번째 수 더한 것을 출력

		temp3 = temp1; // 바로 이전의 수가 될 temp1을 temp3에 저장
		temp1 = temp1 + temp2; // temp1은 출력되기 위해 이전의 수와 그의 이전의 수를 더함
		temp2 = temp3; // temp3에 저장했던 이전의 수 temp1을 temp2에 저장
	}

	return 0;
}
// 무한루프가 되면 피보나치 수열은 계속 증가한다.
// 수열의 값이 unsigned long long 타입의 용량 한계인 8바이트(0 ~ 18,446,744,073,709,551,615)를 넘어서면 오버플로우가 발생한다.