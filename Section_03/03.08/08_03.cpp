// Section 03. ������
// 03.08 ��Ʈ ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// ��Ʈ ����Ʈ ����
	unsigned int a = 3;
	cout << std::bitset<8>(a) << endl;

	unsigned int b = a << 3;
	cout << std::bitset<8>(b) << endl;

	unsigned int c = a >> 3;
	cout << std::bitset<8>(c) << endl;

	return 0;
}