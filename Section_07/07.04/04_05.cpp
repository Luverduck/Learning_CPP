// Section 07. �迭�� ���ڿ�
// 07.04 ������ �迭�� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ������ �迭 ����
	int arr2d[2][3] =
	{
		{ 0, 1, 2 },
		{ 3, 4, 5 }
	};

	// ������ �迭�� ������ �ʱ�ȭ
	int(*p_arr2d)[3] = arr2d;

	// ������ �迭�� �ε��� ����
	cout << arr2d[0][0] << " " << *(*(p_arr2d + 0) + 0) << endl;
	cout << arr2d[0][1] << " " << *(*(p_arr2d + 0) + 1) << endl;
	cout << arr2d[0][2] << " " << *(*(p_arr2d + 0) + 2) << endl;
	cout << arr2d[1][0] << " " << *(*(p_arr2d + 1) + 0) << endl;
	cout << arr2d[1][1] << " " << *(*(p_arr2d + 1) + 1) << endl;
	cout << arr2d[1][2] << " " << *(*(p_arr2d + 1) + 2) << endl;

	return 0;
};