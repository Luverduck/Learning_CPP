// Section 08. ����ü
// 08.02 ����ü�� ������

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
	Person aladin = { 20, 180.5, "Aladin" };

	// ����ü �������� ����
	Person* p_person;

	// ����ü �����Ϳ� �� �Ҵ�
	p_person = &aladin;

	// ����ü �������� �ʱ�ȭ
	Person* p_aladin = &aladin;

	// ����ü �����͸� ���� ����� ����
	cout << p_aladin->age << endl;
	cout << p_aladin->height << endl;
	cout << p_aladin->name << endl;

	return 0;
};