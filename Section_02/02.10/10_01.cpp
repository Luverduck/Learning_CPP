// Section 02. ������ �⺻���� �ڷ���
// 02.10 ��ȣ�� ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ��ȣ�� ����� �ʱ�ȭ

	// ��ȣ�� ����� ������ Ÿ�ӿ� �ʱ�ȭ�ϴ� ��� constexpr Ű����� �����Ѵ�.
	constexpr int const_static = 123;
	cout << const_static << endl;

	// ��ȣ�� ����� ��Ÿ�� �߿� �ʱ�ȭ�ϴ� ��� const Ű����� �����Ѵ�.
	int num;
	cin >> num;
	const int const_dynamic = num;
	cout << const_dynamic << endl;

	return 0;
}