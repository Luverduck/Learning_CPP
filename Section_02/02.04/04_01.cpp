// Section 02. ������ �⺻���� �ڷ���
// 02.04 ��ġ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
	// void�� �޸𸮸� �������� �����Ƿ� �ڷ������� ����� �� ����.
	//void v = 100;

	// [����] void�� ������
	int i = 100;
	double d = 4.2;

	// void�� ������ ����
	void* ptr = nullptr;
	// �������� ũ��� ���� �÷����� �����Ѵ�.
	// ���� ������ �ڷ����� �ٸ����� �� ũ��� �����Ƿ� void������ �� ��ȯ �� ���ִ�.
	ptr = (void*)&i;
	ptr = (void*)&d;

	return 0;
}