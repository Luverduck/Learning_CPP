// Section 01. C++�� �������� ����
// 01.05 �Լ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ��� ����
int add(int param_x, int param_y)
{
	return param_x + param_y;
}

int main()
{
	// ���� �ʱ�ȭ
	int arg_x = 10;
	int arg_y = 5;

	// ���� x�� y�� �μ��� �Ͽ� �Լ� ȣ��
	int ret = add(arg_x, arg_y);

	// �Լ� ������ ��� ���
	cout << "add(arg_x, arg_y)�� ��� : " << ret << endl;

	return 0;
}