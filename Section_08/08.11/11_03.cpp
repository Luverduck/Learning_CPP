// Section 08. ����ü
// 08.11 ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �������� ����
	enum Color
	{
		Red,
		Orange,
		Yellow,
		Blue
	};

	// �����ڰ� ������ �������� ����
	enum Feeling
	{
		Pleased,
		Cosy,
		Blue,
		Angry
	};

	// ���� �������� ���ǵ� ���� �ٸ� �ٸ� ���������� ������ �����ڸ��� ����� �� ����.
	cout << (Color::Blue == Feeling::Blue) << endl;
	// Error	C2365	'Blue': redefinition; previous definition was 'enumerator'

	return 0;
};