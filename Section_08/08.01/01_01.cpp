// Section 08. ����ü
// 08.01 ����ü

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
	// ����ü ���� ����
	Person person;
	// ����ü ������ ��� ����
	strcpy(person.name, "Jasmine");
	person.age = 17;
	person.height = 163.7;

	// ����ü ���� �ʱ�ȭ
	Person aladin = { "Aladin", 20, 180.5 };
	// (C++ 11) �ϰ��� �ʱ�ȭ (uniform initialization)
	Person genie { "Genie", 20, 195.8 };
	// (C++ 20) ������ �ʱ�ȭ (designated initialization)
	Person japar{ .name = "Japar", .age = 41, .height = 185.4 };

	// ����ü ����� ���ÿ� ����ü ���� ����
	struct Animal
	{
		char name[8];
		int age;
		float height;
	} abu;

	return 0;
};