// Section 09. �Լ�
// 09.01 �Լ��� �μ�, �Ű�����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
// x_param�� y_param�� �Լ��� �Ű�����(parameter)�� �Ѵ�.
int func(int x_param, int y_param)
{
	return x_param + y_param;
}

int main()
{
	// ���� �ʱ�ȭ
	int x_arg = 10, y_arg = 20;

	// �Լ��� ȣ��
	// x_arg�� y_arg�� �Լ��� �μ�(argument)�� �Ѵ�.
	int ret = func(x_arg, y_arg);

	// �Լ� ������ ����� ���
	cout << ret << endl;

	return 0;
}