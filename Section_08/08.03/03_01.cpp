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
		int age;
		float height;
		char name[6]; // �޸� �е� Ȯ���� ���� 6[byte]�� ����
	};

	// ����ü ���� ���� (�޸𸮿� �Ҵ� O)
	Person aladin;

	// ����ü�� �Ҵ�� ��ü �޸� ũ��
	cout << "sizeof(aladin) = " << sizeof(aladin) << " " << &aladin << endl;

	// ����ü ����� �޸� ũ��
	cout << "sizeof(age)    = " << sizeof(aladin.age) << "  " << &(aladin.age) << endl;
	cout << "sizeof(height) = " << sizeof(aladin.height) << "  " << &(aladin.height) << endl;
	cout << "sizeof(name)   = " << sizeof(aladin.name) << "  " << &(aladin.name) << endl;

	return 0;
};