// Section 09. �Լ�
// 09.12 �Լ� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ��� ����
int func(int x, int y)
{
	return x + y;
}

int main()
{
	// �Լ� ������ �ʱ�ȭ
	int (*p_func)(int, int) = func;

	// �Լ� �����ͷ� �Լ� ȣ��
	cout << p_func(3, 4) << endl;

	return 0;
}