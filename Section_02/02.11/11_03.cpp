// Section 02. ������ �⺻���� �ڷ���
// 02.11 �� ��ȯ

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int i = 100;

int main()
{
	// ����� �� ��ȯ (explicit type conversion)
	// ����ڰ� �� ��ȯ �����ڸ� ����Ͽ� �����ϴ� �ڷ��� ��ȯ

	// C ��Ÿ�� �� ��ȯ (C-style cast)
	// �� ��ȯ ������ ()�� ����ϴ� �� ��ȯ
	(short)i;
	short(i);

	// ������ �� ��ȯ (named cast)
	// C++�� �� ��ȯ �����ڸ� ����ϴ� �� ��ȯ
	// - static_cast<type>(expression);
	// - dynamic_cast<type>(expression);
	// - reinterpret_cast<type>(expression);
	// - const_cast<type>(expression);
	static_cast<short>(i);

	return 0;
}