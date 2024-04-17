// Section 02. ������ �⺻���� �ڷ���
// 02.09 ���ͷ� ���

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ���ͷ� ����� �ڷ���
	// - ���ͷ� ����� ���λ�(prefix) �Ǵ� ���̻�(suffix)�� ���� �ڷ����� ��Ÿ�� �� �ִ�.

	// �������� ���λ�(prefix)
	'A';		// char�� (default)
	u'B';		// char16_t��
	U'C';		// char32_t��
	L'D';		// w_char��
	u8"Hello!";	// UTF-8 ���

	// �������� ���̻�(suffix)
	10u;		// unsigned��
	10;			// int�� (default)
	100l;		// long��
	1000ll;		// long long��

	// �Ǽ����� ���̻�(suffix)
	1.1f;		// float��
	10.1;		// double�� (default)
	10.3l;		// long double��

	return 0;
}