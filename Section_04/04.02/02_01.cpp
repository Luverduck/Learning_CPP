// Section 04. �帧 ����
// 04.02 ���ǹ� if

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cin >> x >> y;

	if (x > y)
		cout << "x > y" << endl;
	else if (x == y)
		cout << "x == y" << endl;
	else 
		cout << "x < y" << endl;

	return 0;
}