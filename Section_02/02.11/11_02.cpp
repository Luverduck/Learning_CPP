// Section 02. ������ �⺻���� �ڷ���
// 02.11 �� ��ȯ

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �Ͻ��� �� ��ȯ (implicit type conversion)
	// �����Ϸ��� �ڵ����� �������ִ� �ڷ��� ��ȯ

	// 2) ���� ��ȯ (numeric conversion)
	// ���� �°� �� ��� �� ��ȯ
	short s = 10;     // int�� 10�� short������ ��ȯ�Ǿ� s�� ����ȴ�.
	float f = 3.5;    // double�� 3.5�� float������ ��ȯ�Ǿ� f�� ����ȴ�.
	int i = 6.5;      // double�� 6.5�� int������ ��ȯ�Ǿ� i�� ����ȴ�.
	// - ũ�Ⱑ ū �ڷ������� ũ�Ⱑ ���� �ڷ������� ��ȯ�ϴ� ��� ���� �÷ο찡 �߻��� �� �ִ�.
	short s = 100000;   // -31072
	cout << s << endl;
	// - �ε� �Ҽ��������� ���������� ��ȯ�ϴ� ��� �Ҽ��� ���� ���� �ս��� �߻��� �� �ִ�.
	int i = 4.9;        // 4
	cout << i << endl;

	return 0;
}