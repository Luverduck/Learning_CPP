// Section 04. �帧 ����
// 04.04 �ݺ��� while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// while �ݺ����� ���ǽ��� ���� 0�� �ƴ� ������ ��� true�� �Ǿ� while���� ������� �ʴ´�.
	// �� ���, �ݵ�� ���� Ż�� ������ ����ؾ� �Ѵ�.
	int count = 0;
	while (1)
	{
		cout << count << endl;
		++count;

		// ���� Ż�� ����
		if (count >= 10)
			break;
	}

	return 0;
}