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
void func(Struct v_struct)
{
	// ����ü�� ����� ���� �ּ� �� �� ���
	cout << "structure in function" << endl;
	cout << &v_struct << endl;
	cout << &(v_struct.i) << " " << v_struct.i << endl;
	cout << &(v_struct.d) << " " << v_struct.d << endl;
	cout << &(v_struct.str) << " " << v_struct.str << endl;
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

	// ���� ���� ����
	func(a_struct);

	return 0;
}