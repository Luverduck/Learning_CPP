// Section 07. �迭�� ���ڿ�
// 07.09 std::array (C++ 11)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// std::array
#include <array>

using namespace std;

int main()
{
	// �迭�� �ʱ�ȭ
	std::array<int, 5> arr = { 0, 1, 2, 3, 4 };
	
	// �迭�� ��� ����
	cout << arr.at(0) << " ";
	cout << arr.at(1) << " ";
	cout << arr.at(2) << " ";
	cout << arr.at(3) << " ";
	cout << arr.at(4) << " ";
	cout << endl;

	// �迭�� ����
	int length = arr.size();

	cout << length << endl;

	return 0;
};