// Section 05. �����Ϳ� ����
// 05.08 ������ const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ������ ���� ȣ�� (call by reference)
// �Լ� ȣ��� ������ �μ��� �Ű������� �����Ͽ� �Լ��� ȣ���ϴ� ���
int add(const int& x, const int& y)
{
	// �Լ� ȣ��� ���������� �Ʒ� ������ ����ȴ�.
	// const int& param_x = 3;
	// const int& param_y = 4;

	return x + y;
}

int main()
{
	// �Լ��� �Ű������� const�� ����� ������ �� ��� ���ͷ� ����� �μ��� ������ �� �ִ�.
	int ret = add(3, 5);

	cout << ret << endl;

	return 0;
}