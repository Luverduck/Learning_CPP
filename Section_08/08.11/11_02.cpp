// Section 08. ����ü
// 08.11 ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �ʱⰪ�� ������ �������� ����
	enum Color
	{
		Red,
		Orange,
		Yellow = 100,
		Blue
	};

	// �������� ������ ���
	cout << Red << endl;
	cout << Orange << endl;
	cout << Yellow << endl;
	cout << Blue << endl;


	return 0;
};