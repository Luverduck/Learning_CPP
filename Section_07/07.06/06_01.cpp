// Section 07. �迭�� ���ڿ�
// 07.06 ���� �Ҵ� ������ �迭

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ������ �迭�� ����
	int row, col;
	cin >> row >> col;

	// ���� �Ҵ� ������ �迭�� ����
	int** pp_arr2d = new int*[row];

	for (int i = 0; i < row; i++)
		pp_arr2d[i] = new int[col];

	// ���� �Ҵ� ������ �迭�� �� ����
	int val = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			pp_arr2d[i][j] = val++;
		}
	}

	// ������ �迭�� ����� �� ���
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << pp_arr2d[i][j] << " ";
		}
	}

	// ���� �Ҵ� ������ �迭�� ����
	for (int i = 0; i < row; i++)
		delete[] pp_arr2d[i];

	delete[] pp_arr2d;

	return 0;
};