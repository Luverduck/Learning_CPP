// Section 03. ������
// 03.11 ��Ÿ ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ���� ������
	int i = 3 > 4 ? 100 : -100;
	cout << i << endl;

	// ��ǥ ������
	int x = 10, y = 7;

	// sizeof ������
	size_t size = sizeof(i);
	cout << size << endl;

	return 0;
}