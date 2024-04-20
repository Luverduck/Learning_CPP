// Section 05. 변수와 메모리
// 05.03 변수의 연결 상태

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 전역 변수 (외부 연결)
int var_global_el;

// 전역 함수 (외부 연결)
void externalLinkageTest();

int main()
{
	// 전역 변수의 초기화
	var_global_el = 1024;

	// 전역 함수 호출
	externalLinkageTest();

	return 0;
};