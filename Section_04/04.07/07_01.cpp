// Section 04. �帧 ����
// 04.07 ������ break, continue

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// for�������� break
	for (int i = 0; i < 10; i++)
	{
		if (i > 3)
			break;

		cout << "i = " << i << endl;
	};

	return 0;
}