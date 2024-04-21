// Section 05. 포인터와 참조
// 06.03 변수의 연결 상태

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int var = 10;

int main()
{
	int var = 5;
	{
		// 서로 다른 블록에 동일한 식별자가 존재할 경우 가장 가까운 블록 스코프의 식별자를 사용한다.
		// int var = 3;
		cout << var << endl;	// 5
	}
	cout << var << endl;		// 5

	return 0;
};