// Section 09. �Լ�
// 09.07 �Լ��� ��ȯ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// �Լ�
int* func(int v_x)
{
	// ���� ���� �ʱ�ȭ
	int x = v_x * 2;

	// �����͸� �Լ� �� ���� ������ �ּҷ� �ʱ�ȭ
	int* p_x = &x;

	// ���� ������ ����Ű�� �������� �ּҷ��� ��ȯ
	return p_x;
}

int main()
{
	// �Լ� ȣ�� �� �ּҷ��� ��ȯ
	int* ret = func(10);

	// ��ȯ�� ���
	cout << ret << " " << *ret << endl;
	// �Լ� ������ ������ ���� ������ ����Ű�� �������� �޸𸮰� �����ȴ� 
	// ���� ��ȯ�� �ּҷ� �������� �����Ⱚ�� ��µȴ�.

	return 0;
}