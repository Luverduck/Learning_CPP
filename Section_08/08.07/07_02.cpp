// Section 08. ����ü
// 08.07 �͸� ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �͸� ����ü�� ����� ������ ����ü�� ����
	struct Person
	{
		int age;
		float height;
		char name[8];
		struct 
		{ 
			int area;
			char number[15];
		};
	};

	// ����ü�� ����
	Person person;

	// ����ü�� ��� ����
	person.age = 10;
	person.height = 180.5;
	strcpy(person.name, "Aladin");

	// ����ü�� ��� �͸� ����ü ����
	person.area = 82;
	strcpy(person.number, "010-1234-5678");

	cout << person.area << endl;
	cout << person.number << endl;

	return 0;
};