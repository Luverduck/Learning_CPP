// Section 05. �����Ϳ� ����
// 05.07 ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ������ ����
	int a = 10;
	int& ref_a = a;

	// ������ ������ ����
	int& ref_ref_a = ref_a;

	// ������ ����, ������ ����� ������ ����
	cout << a			<< " " << &a			<< endl;
	cout << ref_a		<< " " << &ref_a		<< endl;
	cout << ref_ref_a	<< " " << &ref_ref_a	<< endl;

	// ������ ����, �������� ����
	int* ptr_a = &a;
	cout << a		<< " " << &a							<< endl;
	cout << ref_a	<< " " << &ref_a						<< endl;
	cout << ptr_a	<< " " << &ptr_a	<< " " <<	* ptr_a << endl;

	return 0;
}