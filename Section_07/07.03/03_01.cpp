// Section 07. �迭�� ���ڿ�
// 07.03 ������ �迭

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ������ �迭�� ����
	int arr_2d[2][5];

	// ������ �迭�� ��ҿ� �� ����
	int val = 0;
	for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++)
	{
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); j++)
		{
			arr_2d[i][j] = val++;
		}
	}
	for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++)
	{
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); j++)
		{
			cout << arr_2d[i][j] << " ";
		}
		cout << endl;
	}

	// ������ �迭�� ����
	cout << sizeof(arr_2d) / sizeof(int) << endl;
	// ������ �迭�� �� ����
	cout << sizeof(arr_2d) / sizeof(arr_2d[0]) << endl;
	// ������ �迭�� �� ����
	cout << sizeof(arr_2d[0]) / sizeof(int) << endl;


	// ������ �迭�� �ʱ�ȭ
	int arr_2d_1[2][5] = { { 0, 1, 2, 3, 4 }, { 5, 6, 7, 8, 9 } };
	for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++)
	{
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); j++)
		{
			cout << arr_2d_1[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
};