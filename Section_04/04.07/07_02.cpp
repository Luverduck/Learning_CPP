// Section 04. �帧 ����
// 04.07 ������ break, continue

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// while�������� break
	int i = 0;

	while (i < 100)
	{
		if (i > 4)
			break;

		cout << "i = " << i << endl;

		i++;
	}

	return 0;
}