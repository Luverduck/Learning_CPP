// Section 06. ������ �޸�
// 06.04 ������ ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� ������ ����Ű�� �������� ��ȯ
// ���� ������ ����� ������ �ڵ����� �޸𸮰� �����ȴ�.
// ���� ������ ����Ű�� �����͸� ��ȯ�ϴ� ��� �̹� ������ �޸� �ּҸ� ��ȯ�ϰ� �ȴ�.
// static Ű���带 ���� ����� ����� �����Ͱ� ����Ű�� �޸𸮸� �����ϵ��� �ؾ��Ѵ�.
int* func()
{
	// static Ű����� ����� ���� ����
	static int var_local = 10;
	// ���� ������ �ּҸ� �����Ϳ� ����
	int* ptr_var = &var_local;
	// ������ ��ȯ
	return ptr_var;
};

int main()
{
	// �Լ� ���� ����� ��ȯ�� �ּҸ� �����Ϳ� ����
	int* ptr_return = func();
	// �������� �ּҿ� �����Ϳ� ����� �� ���
	cout << ptr_return << " " << *ptr_return << endl;

	return 0;
};