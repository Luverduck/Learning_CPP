// Section 07. �迭�� ���ڿ�
// 07.08 C-style ���ڿ��� ��ȣ�� ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// Read-Only Data ������ ����� ���ڿ� ���ͷ�
	const char* p_str = "Hello, World!";
	printf("%p\n", p_str);

	// Stack ������ ����� ���ڿ� ���ͷ�
	char str[] = "Hello, World!";
	printf("%p\n", str);

	return 0;
};