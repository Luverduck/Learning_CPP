// Section 08. ����ü
// 08.01 ����ü

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
	// ����ü�� ���� ����
	Person aladin = { 20, 180.5, "Aladin" };
	Person genie = { 100, 195.8, "Genie" };

	// ����ü ������ �ٸ� ����ü ������ ���� �����ϸ� ���� ����(deep copy)�Ѵ�.
	aladin = genie;

	cout << aladin.age << endl;
	cout << aladin.height << endl;
	cout << aladin.name << endl;

	return 0;
};