// Section 03. ������
// 03.05 �� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath> // abs()

using namespace std;

int main()
{
	// �ε� �Ҽ��� ���� ������ ���� �� �� ���� ���̰� �ԽǷ� ���ϸ� ���ٰ� �����Ѵ�.
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}