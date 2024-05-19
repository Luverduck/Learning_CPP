// Section 08. ����ü
// 08.08 ����ü

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ����ü�� ����
	union DataType
	{
		char c;
		int i;
		double d;
	};

	// ����ü�� ����
	DataType dataType;

	// ����ü�� ��� ����
	dataType.c = 'A';
	dataType.i = 5;
	dataType.d = 1.5;

	cout << dataType.c << " " << dataType.i << " " << dataType.c << endl;

	// ����ü�� �ʱ�ȭ
	DataType dataType = { 'A' };
	// (C++ 11) �ϰ��� �ʱ�ȭ (uniform initialization)
	DataType dataType{ 'B' };
	// (C++ 20) ������ �ʱ�ȭ (designated initialization)
	DataType dataType{ .d = 1.5 };

	// ����ü ����� ���ÿ� ����ü ���� ����
	union DataType
	{
		char c;
		int i;
		double d;
	} data_double;

	data_double.d = 1.5;
	cout << data_double.d << endl;

	return 0;
};