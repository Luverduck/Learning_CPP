// Section 08. ����ü
// 08.07 �͸� ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �͸� ����ü�� ����
	struct 
	{
		int age;
		float height;
		char name[8];
	} person;

	// �͸� ����ü ����� ����
	person.age = 10;
	person.height = 180.5;
	strcpy(person.name, "Aladin");

	cout << person.age << endl;
	cout << person.height << endl;
	cout << person.name << endl;

	return 0;
};