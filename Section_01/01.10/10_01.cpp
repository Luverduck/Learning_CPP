// Section 01. C++�� �������� ����
// 01.10 ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// ��� ������ ����
#include "MyHeader.h"

using namespace std;

int main()
{
	// ��� ���Ͽ� ���ǵ� ���� ���
	int var = var_header;
	cout << var << endl;
	
	// ��� ���Ͽ� ���ǵ� �Լ� ���� �� ��� ���
	int ret = add(2, 5);
	cout << ret << endl;

	return 0;
}