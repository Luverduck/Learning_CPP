// Section 07. �迭�� ���ڿ�
// 07.05 ���� �Ҵ� �迭

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �迭�� ����
	int length;
	cin >> length;

	// ���� �Ҵ� �迭�� ����
	int* p_arr = new int[length];

	// ���� �Ҵ� �迭�� �� ����
	for (int i = 0; i < length; i++)
		p_arr[i] = i;

	// �迭�� ��ҿ� ����� �� ���
	for (int i = 0; i < length; i++)
		cout << p_arr[i] << " ";

	// ���� �Ҵ� �迭�� ����
	delete[] p_arr;

	return 0;
};