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
	char source[] = "Hello, World!";
	char destination[50];

	// strcpy �Լ�
	// destination�� source�� '\0'�� ������ ��� ���ڿ��� �����Ѵ�.
	strcpy(destination, source);
	cout << destination << endl;

	char destination1[50];

	// strncpy �Լ�
	// destination�� source�� source�� ���ڿ��� �տ������� count����ŭ �����Ѵ�.
	strncpy(destination1, source, 6);
	cout << destination1 << endl;
	// strncpy �Լ��� ���ڿ��� ������ �� ���ڿ� ���� �� ���� \0�� �ڵ����� �߰������� �ʴ´�.

	return 0;
};