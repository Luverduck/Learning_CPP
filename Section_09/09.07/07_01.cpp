// Section 09. �Լ�
// 09.07 �Լ��� ��ȯ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
int func(int v_x)
{
	// ���� ���� �ʱ�ȭ
	int x = v_x * 2;

	// ���� ������ �������� ��ȯ
	return x;
}

int main()
{
	// �Լ� ȣ�� �� �������� ��ȯ
	int ret = func(10);

	// ��ȯ�� ���
	cout << ret << endl;

	return 0;
}