// Section 05. �����Ϳ� ����
// 05.04 ���� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ���� �������� ����
	int** pptr;

	// ���� �������� ����
	int a = 10;
	int* ptr = &a;

	int** pptr1;
	pptr1 = &ptr;

	// ���� �������� �ʱ�ȭ
	int** pptr2 = &ptr;

	// ���� �������� ������
	cout << *pptr2 << " " << ptr << endl;
	cout << **pptr2 << " " << *ptr << endl;

	return 0;
}