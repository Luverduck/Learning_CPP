// Section 06. ������ �޸�
// 06.02 ������ ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int var = 10;

int main()
{
	int var = 5;
	{
		// ���� �ٸ� ��Ͽ� ������ �ĺ��ڰ� ������ ��� ���� ����� ��� �������� �ĺ��ڸ� ����Ѵ�.
		// int var = 3;
		cout << var << endl;	// 5
	}
	cout << var << endl;		// 5

	return 0;
};