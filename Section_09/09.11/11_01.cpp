// Section 09. �Լ�
// 09.11 ����� �Լ� ȣ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ��� �Լ�
void rec_func(int n)
{
	int x = 10;
	cout << "rec_func(" << n << ") / &n = " << &n << " / &x = " << &x << endl;

	// n�� 5 ������ ���� ��� ȣ��
	if (n < 3)
		rec_func(n + 1);

	cout << "rec_func(" << n << ") / &n = " << &n << " / &x = " << &x << endl;
}

int main()
{
	// ��� �Լ� ȣ��
	rec_func(1);

	return 0;
}