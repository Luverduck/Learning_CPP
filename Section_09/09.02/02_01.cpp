// Section 09. �Լ�
// 09.02 �μ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
void swap(int x, int y)
{
	// �Ű������� �ּ� ���
	cout << &x << " " << &y << endl;

	// ���๮
	int temp = x;
	x = y;
	y = temp;
};


int main()
{
	// ���� �ʱ�ȭ
	int a = 10, b = 20;

	// ������ �ּ� ���
	cout << &a << " " << &b << endl;

	// ���� ���� ����
	swap(a, b);

	return 0;
}