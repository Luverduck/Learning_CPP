// Section 04. �帧 ����
// 04.06 �ݺ��� for

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int pow(int, int);

int main()
{
	cout << pow(3, 4) << endl;

	return 0;
}

int pow(int base, int exponent)
{
	// �� ������ ���� result�� 1�� �ʱ�ȭ
	int result = 1;

	// result�� base�� exponent����ŭ ���Ѵ�.
	for (int i = 0; i < exponent; i++)
		result *= base;

	// ����� ��ȯ�Ѵ�.
	return result;
}