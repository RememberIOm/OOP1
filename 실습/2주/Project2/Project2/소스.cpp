//객체실습 2주 03월 13일

/*
Void 함수
using namespace
*/

#include <iostream>
using namespace std;

int line() {

	return 1;
} //void 였던 것

int main() {
	cout << "a" << endl;
	cout << line() << endl; //굳이 return 값 출력하려면 cout 쓰면 됨
	cout << "b" << endl;
	cout << line() << endl;
	cout << "c" << endl;
	cout << line() << endl;

	return 0;
} //main

/*void 함수는 return을 하지 않는다.
*/