// Section 07. �迭�� ���ڿ�
// 07.01 �迭

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �ʱ�ȭ ����Ʈ ����� ���� �迭�� ���̺��� ���� ���
	int arr[5] = { 1, 2, 3, };

	// �迭�� ����
	int arr_length = sizeof(arr) / sizeof(int);

	//  �ʱ�ȭ ����Ʈ ����� ���� �迭�� ���̺��� ���� ��� ������ ��Ҵ� 0���� �ʱ�ȭ�ȴ�.
	for (int i = 0; i < arr_length; i++)
		cout << arr[i] << " ";

	return 0;
};