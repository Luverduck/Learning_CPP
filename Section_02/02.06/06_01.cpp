// Section 02. ������ �⺻���� �ڷ���
// 02.06 ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip> // boolalpha, noboolalpha

using namespace std;

int main()
{
	// ���� ���� ����
	bool b1 = true;
	bool b2(false);

	// ������ ��� ���¸� true/false�� ����
	cout << boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;

	// ������ ��� ���¸� 1/0���� ����
	cout << noboolalpha;
	cout << b1 << endl;
	cout << b2 << endl;

	return 0;
}