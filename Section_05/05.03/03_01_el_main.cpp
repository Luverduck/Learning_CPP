// Section 05. ������ �޸�
// 05.03 ������ ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� ���� (�ܺ� ����)
int var_global_el;

// ���� �Լ� (�ܺ� ����)
void externalLinkageTest();

int main()
{
	// ���� ������ �ʱ�ȭ
	var_global_el = 1024;

	// ���� �Լ� ȣ��
	externalLinkageTest();

	return 0;
};