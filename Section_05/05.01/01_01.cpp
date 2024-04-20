// Section 05. 변수와 메모리
// 05.01 메모리 레이아웃
/*
	C/C++ 프로그램의 메모리 구조
	
	Code 영역 (Code segment)
	실행 가능한 프로그램 코드를 저장하는 영역

	Data 영역 (Data segment)
	초기화된 정적 변수를 저장하는 영역
	- 명시적으로 초기화된 전역 변수 / 정적 지역 변수

	BSS 영역 (Block Started by Symbol segment)
	초기화되지 않은 정적 변수를 저장하는 영역
	- 0으로 초기화 되었거나 명시적으로 초기화하지 않은 전역 변수 / 정적 지역 변수

	Heap 영역 (Heap segment)
	동적으로 할당된 변수를 저장하는 영역
	- 런타임 중 할당/해제되는 모든 값 또는 변수

	Stack 영역 (Stack segment)
	함수 안에서 사용되는 변수를 저장하는 영역
	- 함수에 전달되는 매개 변수의 값
	- 함수 내에서 사용하는 지역 변수
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{


	return 0;
};