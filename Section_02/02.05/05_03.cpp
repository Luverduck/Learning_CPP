// Section 02. ������ �⺻���� �ڷ���
// 02.05 �ε��Ҽ�����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip> // setprecision()

using namespace std;

int main()
{
	// �Ǽ��� ����� �� ���е��� �����Ѵ�.
	cout << setprecision(16) << endl;

	// �ε� �Ҽ��� ������� �Ǽ��� ǥ���� �� �ణ�� ������ �߻��Ѵ�.
	// �ε� �Ҽ��� ����� �̷��� ������ �����Ǿ� �Ǽ��� �����ϰ� ǥ���� �� ����.
	double d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	cout << d << endl;

	return 0;
}