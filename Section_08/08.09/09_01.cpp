// Section 08. ����ü
// 08.09 ����ü�� ������

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
	DataType dataType;

	// ����ü �������� ����
	DataType* p_dataType;

	// ����ü �����Ϳ� �� �Ҵ�
	p_dataType = &dataType;

	// ����ü �������� �ʱ�ȭ
	DataType* p_data_double = &dataType;

	// ����ü �����͸� ���� ����� ����
	p_data_double->d = 1.5;

	cout << p_data_double->c << endl;
	cout << p_data_double->i << endl;
	cout << p_data_double->d << endl;

	return 0;
};