// Section 05. ������ �޸�
// 05.01 ������ ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int var_global = 10; // ���� ����

// ����� ���� �Լ�
void func()
{
	int var_local = 3; // ���� ����
};

// ���� �Լ�
int main()
{
	int var_local = 5; // ���� ����
};