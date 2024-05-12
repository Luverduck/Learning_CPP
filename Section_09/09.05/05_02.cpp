// Section 09. �Լ�
// 09.05 �μ��� ���� (����ü)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ����ü
struct Struct
{
	int i;
	double d;
	char str[10];
};

// �Լ�
void func(Struct* p_struct)
{
	// ����ü�� ����� ���� �ּ� �� �� ���
	cout << "structure in function" << endl;
	cout << p_struct << " " << &p_struct << endl;
	cout << &(p_struct->i) << " " << p_struct->i << endl;
	cout << &(p_struct->d) << " " << p_struct->d << endl;
	cout << &(p_struct->str) << " " << p_struct->str << endl;
};

int main()
{
	// ����ü �ʱ�ȭ
	Struct a_struct = { 10, 0.5, "Hello!" };

	// ����ü�� ����� ���� �ּ� �� �� ���
	cout << "structure" << endl;
	cout << &a_struct << endl;
	cout << &(a_struct.i) << " " << a_struct.i << endl;
	cout << &(a_struct.d) << " " << a_struct.d << endl;
	cout << &(a_struct.str) << " " << a_struct.str << endl;

	// �ּҿ� ���� ����
	func(&a_struct);

	return 0;
}