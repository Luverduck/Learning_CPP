// Section 01. C++�� �������� ����
// 01.09 ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �����ڿ� �ǿ�����
	int x = 100;
	int y = 20;
	x = x + y;
	// =	: ������ (operator)
	// x, y	: �� ������ (operand)

	// ���� ������ (unary operator) : �� �����ڰ� �� ���� ������
	int a = -x;

	// ���� ������ (binary operator) : �� �����ڰ� �� ���� ������
	int b = x + y;

	// ���� ������ (ternary operator) : �� �����ڰ� �� ���� ������
	bool c = x > y ? x : y;

	return 0;
}