// Section 07. �迭�� ���ڿ�
// 07.02 �迭�� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �迭�� �ʱ�ȭ
	int arr[4] = { 100, 200, 300, 400 };

	// �����͸� �迭�� ù ����� �ּҷ� �ʱ�ȭ
	int* ptr = &arr[0];

	// �ε��� ����
	cout << arr[0] << " / " << ptr[0] << endl;
	// ��� : 100 / 100

	cout << arr[1] << " / " << ptr[1] << endl;
	// ��� : 200 / 200

	cout << arr[2] << " / " << ptr[2] << endl;
	// ��� : 300 / 300

	cout << arr[3] << " / " << ptr[3] << endl;
	// ��� : 400 / 400

	return 0;
};