// Section 08. ����ü
// 08.10 �͸� ����ü

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
		union
		{
			char phone[15];
			char email[15];
		};
	};

	// ����ü�� ����
	Person person;

	// ����ü�� ��� �͸� ����ü ����
	strcpy(person.phone, "abcd@gmail.com");

	cout << person.phone << endl;
	cout << person.email << endl;

	return 0;
};