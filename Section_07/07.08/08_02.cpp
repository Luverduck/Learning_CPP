// Section 07. �迭�� ���ڿ�
// 07.08 C-style ���ڿ��� ��ȣ�� ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// Read-Only Data ������ ����� ���ڿ� ���ͷ�
	const char* p_str1 = "Hello, World!";
	printf("%p\n", p_str1);

	// ��ȣ�� ����� ���ڿ� ���ͷ��� ������ Read-Only Data ������ ������ ���ڿ� ���ͷ��� ����Ų��.
	const char* p_str2 = "Hello, World!";
	printf("%p\n", p_str2);

	return 0;
};