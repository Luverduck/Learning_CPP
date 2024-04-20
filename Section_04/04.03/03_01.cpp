// Section 04. �帧 ����
// 04.03 ���ǹ� switch ~ case

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� ����ü ����
enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

// ���� ���
void printColor(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		cout << "White" << endl;
		break;
	case 2:
		cout << "Red" << endl;
		break;
	case 3:
		cout << "Green" << endl;
		break;
	case 4:
		cout << "Blue" << endl;
		break;
	}
}

int main()
{
	printColor(Colors::BLACK);

	return 0;
}