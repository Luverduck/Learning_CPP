// Section 08. ����ü
// 08.04 ���� �Ҵ� ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ����ü ����
	struct Person
	{
		int age;
		float height;
		char name[8];
	};

	// ���� �Ҵ� ����ü�� ����
	Person* p_person = new Person;

	// ���� �Ҵ� ����ü�� ��� ����
	p_person->age = 20;
	p_person->height = 180.5;
	strcpy(p_person->name, "Aladin");

	cout << (p_person->name) << endl;
	cout << (p_person->age) << endl;
	cout << (p_person->height) << endl;

	// ���� �Ҵ� ����ü�� �޸� ����
	delete p_person;

	// ���� �Ҵ� ����ü�� �ʱ�ȭ
	Person* p_aladin = new Person{ 20, 180.5, "Aladin" };

	// ���� �Ҵ� ����ü�� ����
	delete p_aladin;

	return 0;
};