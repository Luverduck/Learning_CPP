// Section 06. ������ �޸�
// 06.04 ������ ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ����� ���� �Լ�
void func()
{
	// ���� ����
	int var_local = 0;

	// static���� ����� ���� ����
	static int var_local_static = 0;

	// �� ���� ������ �� ���
	cout << var_local << " " << var_local_static << endl;

	// ���� ������ �� ����
	var_local++;
	var_local_static++;
};

// ���� �Լ�
int main()
{
	// static Ű����� ����� ���� ������ ���� ��� ������ ������.
	func(); // ��� : 0
	func(); // ��� : 1

	return 0;
};