// Section 05. �����Ϳ� ����
// 05.03 �������� ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �����Ϳ� �������� ����
	// �����Ϳ� ������ ����/�������κ��� �����Ϳ� �������� ������ ����� �������� �� �� �ִ�.
	// �� �������� ���� ���(����)�� �� ������ ������ ������ �ǹ��Ѵ�.

	int arr[10];
	int* ptr_idx0 = &arr[0];
	int* ptr_idx2 = &arr[2];
	
	cout << ptr_idx2 - ptr_idx0 << endl;	// 2

	return 0;
}