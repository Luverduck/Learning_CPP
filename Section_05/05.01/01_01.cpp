// Section 05. �����Ϳ� ����
// 05.01 ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �������� ����
	int* ptr;

	// �����Ϳ� �� �Ҵ�
	int a = 10;
	
	int* ptr1;
	ptr1 = &a;

	// �������� �ʱ�ȭ
	int* ptr2 = &a;

	// �������� ������
	cout << "*ptr2 = " << *ptr2 << endl;

	// �������� ũ��
	cout << "sizoef ptr2 = " << sizeof ptr2 << endl;

	return 0;
}