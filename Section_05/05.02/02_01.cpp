// Section 05. �����Ϳ� ����
// 05.02 �����Ϳ� const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �����Ͱ� ����Ű�� �ڷ��� �տ� `const` Ű���带 ����� ��� 
	// �������� ������ ������ ���� �����Ͱ� ����Ű�� �޸𸮿� ����� ���� �ٲ� �� ����.

	int x = 5;

	const int* ptr = &x;

	// *ptr = 10; // �Ұ���

	return 0;
}