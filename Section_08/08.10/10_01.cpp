// Section 08. ����ü
// 08.10 �͸� ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �͸� ����ü�� ����
	union 
	{
		char c;
		int i;
		double d;
	} dataType;

	// �͸� ����ü ����� ����
	dataType.i = 5;

	cout << dataType.i << endl;

	return 0;
};