// Section 01. C++�� �������� ����
// 01.08 ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �ܺο� ���� ���� ������ ������ �ĺ��ڰ� ���� �� ���� ����� ��ġ�� �ĺ��ڸ� ����Ѵ�.

	// �ܺ� ���� ������ ���� ����
	int var = 100;
	{
		// ���� ���� ������ ���� ����
		int var = 10;
		// ���� ���� �������� ������ �� ���
		cout << "internal : " << var << endl;
	}

	// �ܺ� ���� �������� ������ �� ���
	cout << "external : " << var << endl;

	return 0;
}