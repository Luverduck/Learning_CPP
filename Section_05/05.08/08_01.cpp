// Section 05. �����Ϳ� ����
// 05.08 ������ const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// const Ű����� ����� ����
	// 1. const Ű����� ����� ������ ������ �� �ִ�.
	const int var = 10;
	const int& ref = var;

	// 2. ���ͷ� ����� ������ �� �ִ�.
	// - ���ͷ� ����� ���� ������ ����Ǹ� ���ͷ� ����� ������ ������ ����� ��������.
	const int& ref_literal = 3 + 5;

	return 0;
}