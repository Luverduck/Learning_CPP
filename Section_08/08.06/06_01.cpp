// Section 08. ����ü
// 08.06 ����ü�� ����ü ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �ٸ� ����ü�� ����� �� ����ü�� ����
	struct Phone
	{
		int area;
		char number[14];
	};

	// ����ü�� ����� ������ ����ü�� ����
	struct Person
	{
		int age;
		char name[8];
		Phone phone;
	};

	// ����ü�� ����� ������ ����ü�� ����
	Person person;

	// ����ü�� ũ��
	cout << sizeof(person) << endl;

	// ��� ����ü�� ũ��
	cout << sizeof(person.phone) << endl;

	// ��� ����ü�� ��� ����
	person.phone.area = 82;
	strcpy(person.phone.number, "010-1234-5678");

	return 0;
};