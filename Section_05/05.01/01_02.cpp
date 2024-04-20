// Section 05. 변수와 메모리
// 05.01 변수의 범위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int var = 10;

int main()
{
	// 서로 다른 블록에 동일한 식별자가 존재할 경우 가장 가까운 블록 스코프의 식별자를 사용한다.
	// 만약 식별자를 사용하는 블록 스코프에서 식별자를 찾지 못한 경우
	// 해당 블록 스코프의 바로 바깥 블록 스코프가 그 다음으로 가장 가까운 블록 스코프가 된다.
	int var = 5;
	{
		int var = 3;
		cout << var << endl;	// 결과 : 3
	}
	cout << var << endl;		// 결과 : 5

	return 0;
};