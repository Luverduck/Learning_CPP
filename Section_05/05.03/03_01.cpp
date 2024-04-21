// Section 05. 포인터와 참조
// 05.03 포인터의 산술 연산

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 포인터의 증감 연산 (Pointer Increment/Decrement)
	// 포인터 증감 연산 시 포인터가 가리키는 자료형 크기만큼 값이 증가/감소한다.
	// 현재 주소를 기준으로 이전/다음 번째 데이터의 주소를 계산한다.

	int a = 10;
	int* ptr = &a;

	// 주소의 값이 4씩 이동하는 것을 확인할 수 있다.
	cout << ptr		<< endl;	// 000000C887F3FB14
	cout << ptr++	<< endl;	// 000000C887F3FB18
	cout << ptr++	<< endl;	// 000000C887F3FB1C

	return 0;
}