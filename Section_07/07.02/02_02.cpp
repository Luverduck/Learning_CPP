// Section 07. �迭�� ���ڿ�
// 07.02 �迭�� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �迭 �ʱ�ȭ
	int arr[4] = { 100, 200, 300, 400 };

	// �迭�� ������ �ʱ�ȭ
	int* ptr = &arr[0];

	// �迭�� ���� ������ �� �� ����.
	//cout << arr++ << endl;

	// �迭�� �����ʹ� ���� ������ �� �� �ִ�.
	cout << ptr++ << endl;

	return 0;
};