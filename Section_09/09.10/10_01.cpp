// Section 09. �Լ�
// 09.10 �ζ��� �Լ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

inline int func(int x, int y)
{
	return x > y ? x + y : x - y;
}

int main()
{
	// �ζ��� �Լ�
	cout << func(3, 5) << endl;

	// �ζ��� �Լ��� ������ �ζ��� �Լ��� ȣ��� ��ġ�� �����Ѵ�.
	cout << (3 > 5 ? 3 + 5 : 3 - 5) << endl;
	
	return 0;
}