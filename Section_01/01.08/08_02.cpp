// Section 01. C++�� �������� ����
// 01.08 ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �ܺ� ���� �������� ���� ���� ������ �ĺ��ڸ� �� �� ����. (invisible)
	
	{
		// ���� ���� ������ ���� ����
		int var_internal = 10;
	}

	// �ܺ� ���� ���������� ���� ���� ������ ������ �� �� ����.
	cout << var_internal << endl;

	return 0;
}