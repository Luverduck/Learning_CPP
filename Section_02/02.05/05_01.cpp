// Section 02. ������ �⺻���� �ڷ���
// 02.05 �ε��Ҽ�����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <limits>	// max(), min(), lowest()

using namespace std;

int main()
{
	// float�� ǥ�� ����
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<float>::lowest() << endl;

	// double�� ǥ�� ����
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<double>::lowest() << endl;

	// long double�� ǥ�� ����
	cout << numeric_limits<long double>::max() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	return 0;
}