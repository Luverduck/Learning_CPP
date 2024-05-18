// Section 08. 구조체
// 08.02 구조체와 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

struct Person
{
	char name[8];
	int age;
	float height;
};

int main()
{
	Person aladin = { "Aladin", 20, 180.5 };

	// 구조체 포인터의 선언
	Person* p_person;

	// 구조체 포인터에 값 할당
	p_person = &aladin;

	// 구조체 포인터의 초기화
	Person* p_aladin = &aladin;

	// 구조체 포인터를 통한 멤버의 접근
	cout << p_aladin->name << endl;
	cout << p_aladin->age << endl;
	cout << p_aladin->height << endl;

	return 0;
};