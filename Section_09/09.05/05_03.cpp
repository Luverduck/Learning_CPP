// Section 09. 함수
// 09.05 인수의 전달 (구조체)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 구조체
struct Struct
{
	int i;
	double d;
	char str[10];
};

// 함수
void func(Struct& r_struct)
{
	// 구조체와 멤버에 대한 주소 및 값 출력
	cout << "structure in function" << endl;
	cout << &r_struct << endl;
	cout << &(r_struct.i) << " " << r_struct.i << endl;
	cout << &(r_struct.d) << " " << r_struct.d << endl;
	cout << &(r_struct.str) << " " << r_struct.str << endl;
};

int main()
{
	// 구조체 초기화
	Struct a_struct = { 10, 0.5, "Hello!" };

	// 구조체와 멤버에 대한 주소 및 값 출력
	cout << "structure" << endl;
	cout << &a_struct << endl;
	cout << &(a_struct.i) << " " << a_struct.i << endl;
	cout << &(a_struct.d) << " " << a_struct.d << endl;
	cout << &(a_struct.str) << " " << a_struct.str << endl;

	// 참조에 의한 전달
	func(a_struct);

	return 0;
}