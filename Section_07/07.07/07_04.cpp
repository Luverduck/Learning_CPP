// Section 07. �迭�� ���ڿ�
// 07.07 C-style ���ڿ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// <cstring>
// C-style ���ڿ�(\0���� ���ڿ�)�� �ٷ�� �Լ��� �����ϴ� ��� ����
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Hello";
	char str2[] = "hello";
	char str3[] = "Hello, World";
	char str4[] = "Hello";

	// strcmp �Լ�
	// str1�� str2�� ���ڿ��� �տ������� ���Ѵ�.
	cout << strcmp(str1, str2) << endl;
	cout << strcmp(str1, str3) << endl;
	cout << strcmp(str1, str4) << endl;

	// strncmp �Լ�
	// str1�� str2�� ���ڿ��� �տ������� count����ŭ ���Ѵ�.
	cout << strncmp(str1, str3, 5) << endl;
	cout << strncmp(str1, str3, 6) << endl;

	return 0;
};