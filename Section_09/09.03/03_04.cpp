// Section 09. �Լ�
// 09.03 �μ��� ���� (�⺻ �ڷ���, ���ͷ� ���)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
void func(const int& r_x)
{
	// ������ �Ű������� �ּҿ� �� ���
	cout << &r_x << " " << r_x << endl;
}

int main()
{
	// ���ͷ� ����� �Ű������� ����
	func(10);

	return 0;
}