// Section 05. ������ �޸�
// 05.03 ������ ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� ���� (���� ����)
static int var_global_il;

// ���� �Լ� (���� ����)
static void externalLinkageTest();

int main()
{
	// ���� ������ �ʱ�ȭ
	var_global_il = 1024;

	// ���� �Լ� ȣ��
	externalLinkageTest();

	return 0;
};

// ���� �Լ� (���� ����)
void externalLinkageTest()
{
	cout << "Call internal function" << endl;
	cout << var_global_il << endl;
}