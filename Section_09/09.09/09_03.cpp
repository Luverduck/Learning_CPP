// Section 09. �Լ�
// 09.09 �Լ� �����ε�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� ���� ����
int func(int x);
// ������ ���� ����
int func(int& x);

int main()
{
	// ���� �ʱ�ȭ
	int arg = 10;

	// �μ��� ���� ������� ���� ��ȣ��
	func(arg);

	return 0;
}

int func(int x)
{
	cout << "func(int x)" << endl;
	return x;
};

int func(int& x)
{
	cout << "func(int& x)" << endl;
	return x;
};