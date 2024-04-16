// Section 02. ������ �⺻���� �ڷ���
// 02.02 ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>	// pow()
#include <limits>	// max(), min(), lowest()

using namespace std;

int main()
{
	// short�� ���� �� �ִ� �ִ밪
	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << numeric_limits<short>::max() << endl;

	// short�� ���� �� �ִ� �ּҰ�
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	// short�� �����÷ο�
	short s = 32768;		// short�� ���� �� �ִ� �ִ밪
	cout << s + 1 << endl;	// ��� : -32767

	return 0;
}