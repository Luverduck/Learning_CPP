// Section 05. ������ �޸�
// 05.01 ������ ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int var = 10;

int main()
{
	// ���� �ٸ� ��Ͽ� ������ �ĺ��ڰ� ������ ��� ���� ����� ��� �������� �ĺ��ڸ� ����Ѵ�.
	// ���� �ĺ��ڸ� ����ϴ� ��� ���������� �ĺ��ڸ� ã�� ���� ���
	// �ش� ��� �������� �ٷ� �ٱ� ��� �������� �� �������� ���� ����� ��� �������� �ȴ�.
	int var = 5;
	{
		int var = 3;
		cout << var << endl;	// ��� : 3
	}
	cout << var << endl;		// ��� : 5

	return 0;
};