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
	int* p_arr2d = new int [row * col];

	// ���� �Ҵ� ������ �迭�� �� ����
	int val = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			p_arr2d[(col * i) + j] = val++;
		}
	}

	// ������ �迭�� ����� �� ���
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << p_arr2d[(col * i) + j] << " ";
		}
	}

	// ���� �Ҵ� ������ �迭�� ����
	delete[] p_arr2d;

	return 0;
};