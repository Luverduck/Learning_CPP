// Section 03. ������
// 03.10 ���� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int i = 0b01001101;
int j = 0b11010111;

void bitInit(int& i, int& j)
{
	i = 0b01001101;
	j = 0b11010111;
}

int main()
{
	// ��Ʈ AND ���� �� ����
	i &= j;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// ��Ʈ OR ���� �� ����
	i |= j;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// ��Ʈ XOR ���� �� ����
	i ^= j;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// ��Ʈ ���� �̵� ���� �� ����
	i <<= 2;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// ��Ʈ ������ �̵� ���� �� ����
	i >>= 2;
	cout << std::bitset<8>(i) << endl;

	return 0;
}