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
	int (*p_arr2d)[3] = arr2d;

	// �迭�� ���� ������ �� �� ����.
	//cout << arr2d++ << endl;

	// �迭�� �����ʹ� ���� ������ �� �� �ִ�.
	cout << p_arr2d++ << endl;
	cout << p_arr2d << endl;

	cout << arr2d[0] << endl;
	cout << arr2d[1] << endl;

	return 0;
};