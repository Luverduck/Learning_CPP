// Section 09. �Լ�
// 09.08 �Ű������� �⺻��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ� ����
void func(int x = 10);

int main()
{
	// �μ��� �������� �ʰ� �Լ� ȣ��
	func();

	// �μ��� �����Ͽ� �Լ� ȣ��
	func(100);

	return 0;
}

// �Լ� ����
void func(int x)
{
	cout << x << endl;
};