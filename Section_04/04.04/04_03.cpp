// Section 04. �帧 ����
// 04.04 �ݺ��� while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// ��ȣ�� ���� �ڷ������� ���ǽ��� ������ ��� ���� �����÷ο쿡 ���� ���� ������ �߻��� �� �ִ�.
	unsigned int count = 0;
	while (count < 0)
	{
		if (count == 0)
			cout << "Zero" << endl;
		else
			cout << count << endl;

		// ���� ī���� ����
		count--;
	}

	return 0;
}