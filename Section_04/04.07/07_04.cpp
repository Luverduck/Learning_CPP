// Section 04. �帧 ����
// 04.07 ������ break, continue

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// for�������� continue
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;

		cout << "i = " << i << endl;
	}

	return 0;
}