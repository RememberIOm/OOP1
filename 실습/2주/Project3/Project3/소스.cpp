//객체실습 2주 03월 13일
/*
응용
void형 함수에 int 형 변수 a, b를 선언 후 각각 1, 2로 초기화
a + b를 출력
*/

#include <iostream>
using namespace std;

void p();

int main() {
	p();

	system("pause");
	return 0;
}

void p() {
	int a = 1;
	int b = 2;

	cout << a + b << endl;
}
