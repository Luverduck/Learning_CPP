// Section 01. C++�� �������� ����
// 01.08 ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ���� ���� �������� �ܺ� ���� ������ �ĺ��ڸ� �� �� �ִ�. (visible)

	// �ܺ� ���� ������ ���� ����
	int var_external = 10;

	{
		// ���� ���� ���������� �ܺ� ���� ������ ������ �� �� �ִ�. (visible)
		cout << var_external << endl;
	}

	return 0;
}