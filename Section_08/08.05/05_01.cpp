// Section 08. ����ü
// 08.05 ����ü�� �迭 ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// ���� �迭 ����� �����ϴ� ����ü�� ����
	struct Person
	{
		int age;
		float height;
		char name[8];
	};

	// ����ü�� ũ��
	cout << sizeof(Person) << endl;

	// ����ü�� �޸� ���� �Ҵ�
	Person* p_person = new Person;

	// ���� �Ҵ��� ����ü�� �޸� ũ��
	cout << _msize(p_person) << endl;

	// ����ü�� �޸� ����
	delete p_person;

	return 0;
};