// Section 08. 구조체
// 08.03 구조체의 메모리 할당

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 구조체 정의 (메모리에 할당 X)
	struct Person
	{
		char name[6];
		int age;
		float height;
	};

	// 구조체 변수 선언 (메모리에 할당 O)
	Person aladin;

	// 구조체에 할당된 전체 메모리 크기
	cout << "sizeof(aladin) = " << sizeof(aladin) << " " << &aladin << endl;

	// 구조체 멤버의 메모리 크기
	cout << "sizeof(name)   = " << sizeof(aladin.name) << "  " << &(aladin.name) << endl;;
	cout << "sizeof(age)    = " << sizeof(aladin.age) << "  " << &(aladin.age) << endl;
	cout << "sizeof(height) = " << sizeof(aladin.height) << "  " << &(aladin.height) << endl;

	return 0;
};