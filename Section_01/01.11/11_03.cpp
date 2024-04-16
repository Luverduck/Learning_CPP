// Section 01. C++�� �������� ����
// 01.11 ���� �����̽�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� �����̽��� ��ø
namespace OuterNamespace
{
	// �ܺ��� ���� �����̽��� ���� ����
	int var_outer = 100;

	namespace InnerNamespace
	{
		// ������ ���� �����̽��� ���� ����
		int var_inner = 30;
	}
}

int main()
{
	// �ܺ��� ���� �����̽��� ���ǵ� ������ ����
	cout << OuterNamespace::var_outer << endl;

	// ������ ���� �����̽��� ���ǵ� ������ ����
	cout << OuterNamespace::InnerNamespace::var_inner << endl;

	return 0;
}