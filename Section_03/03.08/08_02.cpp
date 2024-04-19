// Section 03. ������
// 03.08 ��Ʈ ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// a�� b�� 4��Ʈ �������� ǥ��
	unsigned int a = 3;
	cout << std::bitset<4>(a) << endl;
	unsigned int b = 10;
	cout << std::bitset<4>(b) << endl << endl;

	// ��Ʈ AND ����
	cout << "a & b = " << std::bitset<4>(a & b) << endl;

	// ��Ʈ OR ����
	cout << "a | b = " << std::bitset<4>(a | b) << endl;

	// ��Ʈ XOR ����
	cout << "a ^ b = " << std::bitset<4>(a ^ b) << endl;

	return 0;
}