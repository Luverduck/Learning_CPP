// Section 09. �Լ�
// 09.02 �μ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
void swap(int& r_x, int& r_y)
{
	// �Ű������� �ּ� ���
	cout << &r_x << " " << &r_y << endl;

	// ���๮
	int temp = r_x;
	r_x = r_y;
	r_y = temp;
};


int main()
{
	// ���� �ʱ�ȭ
	int a = 10, b = 20;

	// ������ �ּ� ���
	cout << &a << " " << &b << endl;

	// ������ ���� ����
	swap(a, b);

	return 0;
}