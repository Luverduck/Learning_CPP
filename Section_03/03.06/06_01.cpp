// Section 03. ������
// 03.06 �� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// && �������� �켱������ || �����ں��� ����
	bool value1 = true;
	bool value2 = false;
	bool value3 = false;

	bool exp = value1 || value2 && value3;
	// ���� ����� : ( value1 || ( value2 && value3 ) )

	return 0;
}