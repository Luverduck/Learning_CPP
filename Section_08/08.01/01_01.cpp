// Section 08. ����ü
// 08.01 ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

struct Person
{
	int age;
	float height;
	char name[8];
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
	Person aladin = { 20, 180.5, "Aladin" };
	// (C++ 11) �ϰ��� �ʱ�ȭ (uniform initialization)
	Person genie { 20, 195.8, "Genie" };
	// (C++ 20) ������ �ʱ�ȭ (designated initialization)
	Person japar{ .age = 41, .height = 185.4, .name = "Japar" };

	// ����ü ����� ���ÿ� ����ü ���� ����
	struct Animal
	{
		int age;
		float height;
		char name[8];
	} abu;

	return 0;
};