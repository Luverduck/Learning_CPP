// Section 08. ����ü
// 08.05 ����ü�� �迭 ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// ���༺ �ִ� �迭 ����� ���Ե� ����ü ����
	struct Person
	{
		int age;
		float height;
		char name[];
	};

	// ����ü�� ũ��
	cout << sizeof(Person) << endl; // ���༺ �ִ� �迭 ����� ũ�Ⱑ 0���� ���ȴ�.

	// �迭 ����� ����
	int n = 8;

	// ����ü�� �޸� ���� �Ҵ�
	Person* p_person = (Person*)malloc(sizeof(Person*) + sizeof(char) * n);

	// ���� �Ҵ� ����ü�� �޸� ũ��
	if (p_person != NULL)
		cout << _msize(p_person) << endl;

	// ����ü�� �޸� ����
	free(p_person);

	return 0;
};