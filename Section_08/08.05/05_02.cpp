// Section 08. ����ü
// 08.05 ����ü�� �迭 ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// ���� �Ҵ� �޸� �ּҸ� ������ ������ ����� ������ ����ü ����
	struct Person
	{
		int age;
		float height;
		char* p_name;
	};

	// ����ü�� ũ��
	cout << sizeof(Person) << endl;

	// ����ü�� �޸� ���� �Ҵ�
	Person* p_person = new Person;

	// �迭 ����� ����
	int n = 8;

	// ������ ����� �޸� ���� �Ҵ� �޸��� �ּ� ����
	p_person->p_name = new char[n];

	// ���� �Ҵ��� ����ü�� �޸� ũ��
	cout << _msize(p_person) << endl;

	// ���� �迭�� �޸� ����
	delete[] p_person->p_name;

	// ����ü�� �޸� ����
	delete p_person;

	return 0;
};