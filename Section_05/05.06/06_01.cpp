// Section 05. �����Ϳ� ����
// 05.06 void ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// void �������� ����
	void* ptr;

	// void �����Ϳ� �� �Ҵ�
	int a = 10;
	
	void* ptr1; 
	ptr1 = &a;

	// void �������� �ʱ�ȭ
	void* ptr2 = &a;

	// void �������� ������
	// void �����ʹ� �����Ͱ� ����Ű�� �ڷ����� �� �� �����Ƿ� ������ ������ �� �� ����.
	// void �����Ͱ� ����Ű�� �޸𸮿� �����ϱ� ���ؼ��� �� ��ȯ�� �ؾ� �Ѵ�.
	// cout << *ptr2 << endl; // �Ұ���
	cout << *(static_cast<int*>(ptr2)) << endl;

	// void �������� ��� ����
	// void �����ʹ� �����Ͱ� ����Ű�� �ڷ����� ũ�⸦ �� �� �����Ƿ� ��� ������ �� �� ����.
	// void �������� ��� ������ ���ؼ��� �� ��ȯ�� �ؾ� �Ѵ�.
	int arr[10];
	void* ptr3 = &arr[0];
	//cout << ptr3 + 1 << endl; // �Ұ���
	cout << static_cast<int*>(ptr3) + 1 << endl;
	cout << static_cast<int*>(ptr3) + 2 << endl;
	cout << static_cast<int*>(ptr3) + 3 << endl;

	return 0;
}