// Section 03. ������
// 03.10 ���� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int i = 100;

void intInit(int& i)
{
	i = 100;
}

int main()
{
	// ���ϱ� ���� �� ����
	i += 10;
	cout << i << endl;
	intInit(i);

	// ���� ���� �� ����
	i -= 10;
	cout << i << endl;
	intInit(i);

	// ���ϱ� ���� �� ����
	i *= 10;
	cout << i << endl;
	intInit(i);

	// �� ���� �� ����
	i /= 10;
	cout << i << endl;
	intInit(i);

	// ������ ���� �� ����
	i %= 10;
	cout << i << endl;

	return 0;
}