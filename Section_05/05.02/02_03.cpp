// Section 05. �����Ϳ� ����
// 05.02 �����Ϳ� const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �����Ͱ� ����Ű�� �ڷ��� �հ� �����͸� �տ� const Ű���带 ����� ���
	// �������� ������ ������ ���� �����Ͱ� ����Ű�� �޸𸮿� ����� ���� �ٲ� �� ������
	// �������� ���� ������ ���� �����Ϳ� ����� �޸� �ּ��� ���� �ٲ� �� ����.

	int x = 5, y = 10;

	const int* const ptr = &x;

	// *ptr = 10; // �Ұ���
	// ptr = &y;  // �Ұ���

	return 0;
}