// Section 05. �����Ϳ� ����
// 05.03 �������� ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �������� ���� ���� (Pointer Increment/Decrement)
	// ������ ���� ���� �� �����Ͱ� ����Ű�� �ڷ��� ũ�⸸ŭ ���� ����/�����Ѵ�.
	// ���� �ּҸ� �������� ����/���� ��° �������� �ּҸ� ����Ѵ�.

	int a = 10;
	int* ptr = &a;

	// �ּ��� ���� 4�� �̵��ϴ� ���� Ȯ���� �� �ִ�.
	cout << ptr		<< endl;	// 000000C887F3FB14
	cout << ptr++	<< endl;	// 000000C887F3FB18
	cout << ptr++	<< endl;	// 000000C887F3FB1C

	return 0;
}