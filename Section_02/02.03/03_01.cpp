// Section 02. ������ �⺻���� �ڷ���
// 02.03 ���� �ʺ� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
	using namespace std;
	
	// ũ�Ⱑ 8��Ʈ�� ������ (������)
	std::int8_t fint1 = 65;
	cout << fint1 << endl;

	// ũ�Ⱑ 16��Ʈ�� ������
	std::int16_t fint2(10);
	cout << fint2 << endl;

	// ũ�Ⱑ 32��Ʈ�� ������ �� ���� ���� ��
	std::int_fast32_t fint3 = 25;
	cout << fint3 << endl;

	// ũ�Ⱑ �ּ� 64��Ʈ �̻� ������
	std::int_least64_t fint4 = 44;
	cout << fint4 << endl;

	return 0;
}