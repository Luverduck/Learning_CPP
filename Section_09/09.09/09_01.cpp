// Section 09. �Լ�
// 09.09 �Լ� �����ε�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ� �����ε�
void func(int i);
void func(double d);
void func(int i, double d);

int main()
{
	func(1);
	// func(int i) ȣ��

	func(1.0);
	// func(double d) ȣ��

	func(1, 1.0);
	// func(int i, double d) ȣ��

	return 0;
}

void func(int i)
{
	cout << "call func(int i)" << endl;
};

void func(double d)
{
	cout << "call func(double d)" << endl;
};

void func(int i, double d)
{
	cout << "call func(int i, double d)" << endl;
};