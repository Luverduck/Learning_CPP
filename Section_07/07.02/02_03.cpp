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

	// ����/���� ����
	cout << arr + 0 << " " << *(arr + 0) << " / " << ptr + 0 << " " << *(ptr + 0) << endl;
	// ��� : 00000033A4EFFC68 100 / 00000033A4EFFC68 100

	cout << arr + 1 << " " << *(arr + 1) << " / " << ptr + 1 << " " << *(ptr + 1) << endl;
	// ��� : 00000033A4EFFC6C 200 / 00000033A4EFFC6C 200

	cout << arr + 2 << " " << *(arr + 2) << " / " << ptr + 2 << " " << *(ptr + 2) << endl;
	// ��� : 00000033A4EFFC70 300 / 00000033A4EFFC70 300

	cout << arr + 3 << " " << *(arr + 3) << " / " << ptr + 3 << " " << *(ptr + 3) << endl;
	// ��� : 00000033A4EFFC74 400 / 00000033A4EFFC74 400

	return 0;
};