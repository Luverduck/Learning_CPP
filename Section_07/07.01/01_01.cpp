// Section 07. �迭�� ���ڿ�
// 07.01 �迭

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �迭�� ����
	int arr[10];

	// �迭�� ��ҿ� �� ����
	arr[0] = 10;

	// �迭�� �ʱ�ȭ
	// 1) �迭 ����� �ڷ��� ũ�� �޸𸮸� �迭�� ���̸�ŭ �Ҵ��� �� �ʱ�ȭ ����Ʈ�� ���� ������� �����Ѵ�.
	int arr_1[3] = { 1, 2, 3 };
	// 2) �迭�� ���̸� �����ϴ� ��� �ʱ�ȭ ����Ʈ�� ���� �迭�� ���̷� �Ѵ�.
	int arr_2[] = { 1, 2, 3 };
	// 3) �迭�� �ʱ�ȭ�� �� ���� �����ڸ� ������ �� �ִ�. (C++ 11)
	int arr_3[]{ 1, 2, 3 };

	return 0;
};