// Section 05. 포인터와 참조
// 05.02 포인터와 const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 포인터가 가리키는 자료형 앞과 포인터명 앞에 const 키워드를 사용할 경우
	// 포인터의 역참조 연산을 통해 포인터가 가리키는 메모리에 저장된 값을 바꿀 수 없으며
	// 포인터의 대입 연산을 통해 포인터에 저장된 메모리 주소의 값을 바꿀 수 없다.

	int x = 5, y = 10;

	const int* const ptr = &x;

	// *ptr = 10; // 불가능
	// ptr = &y;  // 불가능

	return 0;
}