// Section 06. ������ �޸�
// 06.05 �޸� ���� �Ҵ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// new ������
	// �������� �޸𸮸� �Ҵ��� �� �Ҵ��� �ڷ����� �����͸� ��ȯ�Ѵ�.
	int* ptr_i = new int;
	cout << sizeof(*ptr_i) << endl;

	// delete ������
	// �������� �Ҵ��� �޸𸮸� �����Ѵ�.
	delete ptr_i;

	return 0;
};