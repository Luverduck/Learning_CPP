// Section 06. ������ �޸�
// 06.05 �޸� ���� �Ҵ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// �迭�� �޸� ���� �Ҵ�
	int* ptr_arr = new int[30];

	// �迭�� ���� �Ҵ�� �޸��� ũ��
	cout << _msize(ptr_arr) << endl;

	// �迭�� ����
	cout << _msize(ptr_arr) / sizeof(int) << endl;

	// �迭�� ���� �Ҵ� �޸� ����
	delete[] ptr_arr;

	return 0;
};