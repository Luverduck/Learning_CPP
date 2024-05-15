// Section 09. �Լ�
// 09.06 �Լ��� ��ȯ��

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// <cstdarg>
#include <cstdarg>

using namespace std;


double getAvg(int count, ...)
{
	// �հ踦 0���� �ʱ�ȭ
	double sum = 0.0;

	// �μ� ������ (argument pointer)
	va_list ap;

	// �μ� �����͸� ���� �μ� count�� �޸� ���� �޸� �ּҷ� �ʱ�ȭ
	va_start(ap, count);

	for (int i = 0; i < count; i++)
		// �μ� �����Ϳ� ����� �޸� �ּҿ� ����� ���� int������ ��ũ�� Ȯ���Ѵ�.
		sum += va_arg(ap, int); // �� �� �μ� �����͸� ���� �޸� �ּҷ� �ʱ�ȭ�Ѵ�.

	// �μ� �������� �ּҸ� null�� �ʱ�ȭ�Ѵ�.
	va_end(ap);

	return sum / count;
};

int main()
{
	cout << getAvg(4, 1, 2, 3, 4) << endl;

	return 0;
}
