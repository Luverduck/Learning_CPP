// Section 05. �����Ϳ� ����
// 05.02 �����Ϳ� const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �����͸� �տ� `const` Ű���带 ����� ��� 
	// �������� ���� ������ ���� �����Ϳ� ����� �޸� �ּ��� ���� �ٲ� �� ����.

	int x = 5, y = 10;

	int* const ptr = &x;

	// ptr = &y; // �Ұ���

	return 0;
}