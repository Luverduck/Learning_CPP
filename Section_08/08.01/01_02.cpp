// Section 08. 구조체
// 08.01 구조체

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
	// 구조체의 대입 연산
	Person aladin = { "Aladin", 20, 180.5 };
	Person genie = { "Genie", 100, 195.8 };

	// 구조체 변수에 다른 구조체 변수를 대입 연산하면 깊은 복사(deep copy)한다.
	aladin = genie;

	cout << aladin.name << endl;
	cout << aladin.age << endl;
	cout << aladin.height << endl;

	return 0;
};