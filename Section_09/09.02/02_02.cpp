// Section 09. �Լ�
// 09.02 �μ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
void swap(int* p_x, int* p_y)
{
	// �Ű������� �ּ� ���
	cout << &p_x << " " << &p_y << endl;

	// ���๮
	int temp = *p_x;
	*p_x = *p_y;
	*p_y = temp;
}


int main()
{
	// ���� �ʱ�ȭ
	int a = 10, b = 20;

	// ������ �ּ� ���
	cout << &a << " " << &b << endl;

	// �ּҿ� ���� ����
	swap(&a, &b);

	return 0;
}