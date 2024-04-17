// Section 02. ������ �⺻���� �ڷ���
// 02.07 ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// �������� ũ��
	cout << sizeof(char) << endl;

	// �������� ǥ�� ����
	// ��ȣ�� �ִ� ������
	cout << (int)std::numeric_limits<signed char>::max() << endl;
	cout << (int)std::numeric_limits<signed char>::lowest() << endl;

	// ��ȣ�� ���� ������
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	return 0;
}