// Section 08. ����ü
// 08.01 ����ü

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
	// ����ü�� ���� ����
	Person aladin = { "Aladin", 20, 180.5 };
	Person genie = { "Genie", 100, 195.8 };

	// ����ü ������ �ٸ� ����ü ������ ���� �����ϸ� ���� ����(deep copy)�Ѵ�.
	aladin = genie;

	cout << aladin.name << endl;
	cout << aladin.age << endl;
	cout << aladin.height << endl;

	return 0;
};