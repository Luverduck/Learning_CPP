// Section 08. ����ü
// 08.02 ����ü�� ������

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
	Person aladin = { "Aladin", 20, 180.5 };

	// ����ü �������� ����
	Person* p_person;

	// ����ü �����Ϳ� �� �Ҵ�
	p_person = &aladin;

	// ����ü �������� �ʱ�ȭ
	Person* p_aladin = &aladin;

	// ����ü �����͸� ���� ����� ����
	cout << p_aladin->name << endl;
	cout << p_aladin->age << endl;
	cout << p_aladin->height << endl;

	return 0;
};