// Section 04. �帧 ����
// 04.07 �ݺ��� for-each (C++ 11)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �迭 ����
	int arr[5] = { 1, 2, 3, 4, 5 };

	// for-each��
	for (int iter : arr)
		cout << iter << " ";

	return 0;
}