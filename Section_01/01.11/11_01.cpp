// Section 01. C++�� �������� ����
// 01.11 ���� �����̽�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� �����̽��� ����
namespace MyNamespace
{
	// ���� ����
	int var = 10;

	// �Լ� ����
	int add(int x, int y)
	{
		return x + y;
	}
}

int main()
{
	// ���� �����̽� �ȿ� �ִ� ������ ����
	cout << MyNamespace::var << endl;

	// ���� �����̽� �ȿ� �ִ� �Լ��� ����
	cout << MyNamespace::add(3, 5) << endl;

	return 0;
}