// Section 01. C++�� �������� ����
// 01.04 ����� ��Ʈ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ���� �ʱ�ȭ
	int x = 10;

	// �ܼ� �Է� �� ������ ����� �� ���
	cout << "Before your input, x was " << x << endl;

	// �ַܼ� �Է¹��� ���� ������ ����
	cin >> x;

	// �ܼ� �Է� �� ������ ����� �� ���
	cout << "After your input, x is " << x << endl;

	return 0;
}