// Section 09. �Լ�
// 09.09 �Լ� �����ε�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

float func(float x);
double func(double x);

int main()
{
	// ���� �ʱ�ȭ
	int arg = 10;

	// �μ��� �� ��ȯ���� ���� ��ȣ��
	func(arg);

	return 0;
}

float func(float x)
{
	cout << "func(float x)" << endl;
	return x;
};

double func(double x)
{
	cout << "func(double x)" << endl;
	return x;
};