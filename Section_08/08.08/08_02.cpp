// Section 08. ����ü
// 08.08 ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

union DataType
{
	char c;
	int i;
	double d;
};

int main()
{
	DataType data_char;
	data_char.c = 'A';

	DataType data_int;
	data_int.i = 81;

	// ����ü�� ���� ����
	// ����ü ������ �ٸ� ����ü ������ ���� �����ϸ� ���� ����(shallow copy)�Ѵ�.
	data_char = data_int;

	cout << data_char.c << endl;
	cout << data_char.i << endl;
	cout << data_char.d << endl;

	return 0;
};