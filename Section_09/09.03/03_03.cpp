// Section 09. �Լ�
// 09.03 �μ��� ���� (�⺻ �ڷ���, ���ͷ� ���)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
void func(int& r_x)
{
	// ������ �Ű������� �ּҿ� �� ���
	cout << &r_x << " " << r_x << endl;
}

int main()
{
	// ���� �ʱ�ȭ
	int a = 10;

	// ������ �ּҿ� �� ���
	cout << &a << " " << a << endl;

	// �ּҿ� ���� ����
	func(a);

	return 0;
}