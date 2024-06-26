// Section 09. 함수
// 09.03 인수의 전달 (기본 자료형, 리터럴 상수)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
void func(int x)
{
	// 매개변수의 주소와 값 출력
	cout << &x << " " << x << endl;
}

int main()
{
	// 변수 초기화
	int a = 10;
	
	// 변수의 주소와 값 출력
	cout << &a << " " << a << endl;

	// 값에 의한 전달
	func(a);

	return 0;
}