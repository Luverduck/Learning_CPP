// Section 09. �Լ�
// 09.04 �μ��� ���� (�迭)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
void func(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
};


int main()
{
	// �迭 �ʱ�ȭ
	int a_arr[4]{ 1, 2, 3, 4 };

	// �迭�� ����
	int a_len = sizeof(a_arr) / sizeof(int);

	// ���� ���� ����
	func(a_arr, a_len);

	return 0;
}