// Section 01. C++�� �������� ����
// 01.06 �Լ��� ����� ���� �и�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ��� ���� (function prototype)
int add(int arg_x, int arg_y);

// ���� �Լ�
int main()
{
	// �Լ� ����
	int ret = add(1, 2);

	// �Լ� ������ ��� ���
	cout << ret << endl;

	return 0;
}

// �Լ��� ���� (function definition)
int add(int arg_x, int arg_y)
{
	int temp;
	temp = arg_x + arg_y;
	return temp;
};