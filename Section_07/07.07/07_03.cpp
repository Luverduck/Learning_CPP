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
	char source[] = "World!";
	char destination[50] = "Hello, ";

	// strcat �Լ�
	// destination�� ���ڿ� ���� �ִ� '\0'�� ������ �� source�� ��� ���ڿ��� �����δ�.
	strcat(destination, source);
	cout << destination << endl;

	char destination1[50] = "Hello, ";

	// strncpy �Լ�
	// destination�� ���ڿ� ���� �ִ� '\0'�� ������ �� source�� ���ڿ��� count����ŭ �����δ�.
	strncat(destination1, source, 2);
	cout << destination1 << endl;

	return 0;
};