// Section 07. �迭�� ���ڿ�
// 07.04 ������ �迭�� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ������ �迭 ����
	int arr2d[2][5];

	// ������ �迭
	cout << arr2d << endl;
	cout << arr2d[0] << endl;
	cout << arr2d[1] << endl;

	cout << &arr2d[0] << endl;
	cout << &arr2d[1] << endl;

	cout << endl;

	cout << "arr2d[0][j]" << endl;
	for (int j = 0; j < sizeof(arr2d[0]) / sizeof(int); j++)
	{
		cout << &arr2d[0][j] << endl;
	}

	cout << endl;

	cout << "arr2d[1][j]" << endl;
	for (int j = 0; j < sizeof(arr2d[1]) / sizeof(int); j++)
	{
		cout << &arr2d[1][j] << endl;
	}

	return 0;
};