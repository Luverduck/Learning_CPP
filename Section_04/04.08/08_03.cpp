// Section 04. �帧 ����
// 04.08 ������ break, continue

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// switch ~ case�������� break
	int i = 3;

	switch (i)
	{
	case 1:
		cout << "i = 1" << endl;
		break;
	case 2:
		cout << "i = 2" << endl;
	case 3:
		cout << "i = 3" << endl;
	case 4:
		cout << "i = 4" << endl;
		break;
	default:
		cout << "default" << endl;
		break;
	}

	return 0;
}