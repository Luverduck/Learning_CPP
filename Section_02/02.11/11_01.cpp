// Section 02. ������ �⺻���� �ڷ���
// 02.11 �� ��ȯ

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �Ͻ��� �� ��ȯ (implicit type conversion)
	// �����Ϸ��� �ڵ����� �������ִ� �ڷ��� ��ȯ

	// 1) ���� �°� (numeric promotion)
	// ũ�Ⱑ ���� �ڷ����� ������ ������ ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ���
	long l = 64;      // int�� 64�� long������ ��ȯ�Ǿ� l�� ����ȴ�.
	double d = 1.5f;  // float�� 1.5�� double������ ��ȯ�Ǿ� d�� ����ȴ�.

	return 0;
}