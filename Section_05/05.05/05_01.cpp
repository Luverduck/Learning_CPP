// Section 05. �����Ϳ� ����
// 05.05 �Լ� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ��� ����
int add(int x, int y);

int main()
{
	// �Լ� �������� ����
	int (*ptr_func)(int a, int b);

	// �Լ� �����Ϳ� �� �Ҵ�
	int (*ptr_func1)(int a, int b);
	ptr_func1 = add;

	// �Լ� �������� �ʱ�ȭ
	int (*ptr_func2)(int a, int b) = add;

	// �Լ� �������� ������
	// 1) �Ͻ��� ������
	cout << ptr_func2(3, 5) << endl;
	// 2) ����� ������
	cout << (*ptr_func2)(4, 6) << endl;

	return 0;
}

// �Լ��� ����
int add(int x, int y)
{
	return x + y;
}