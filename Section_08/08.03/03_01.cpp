// Section 08. ����ü
// 08.03 ����ü�� �޸� �Ҵ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ����ü ���� (�޸𸮿� �Ҵ� X)
	struct Person
	{
		char name[6];
		int age;
		float height;
	};

	// ����ü ���� ���� (�޸𸮿� �Ҵ� O)
	Person aladin;

	// ����ü�� �Ҵ�� ��ü �޸� ũ��
	cout << "sizeof(aladin) = " << sizeof(aladin) << " " << &aladin << endl;

	// ����ü ����� �޸� ũ��
	cout << "sizeof(name)   = " << sizeof(aladin.name) << "  " << &(aladin.name) << endl;;
	cout << "sizeof(age)    = " << sizeof(aladin.age) << "  " << &(aladin.age) << endl;
	cout << "sizeof(height) = " << sizeof(aladin.height) << "  " << &(aladin.height) << endl;

	return 0;
};