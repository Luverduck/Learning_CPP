// Section 07. �迭�� ���ڿ�
// 07.10 std::vector

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// std::array
#include <vector>

using namespace std;

int main()
{
	// ������ �ʱ�ȭ
	std::vector<int> arr = { 0, 1, 2, 3, 4 };

	// ������ ��� ����
	cout << arr.at(0) << " ";
	cout << arr.at(1) << " ";
	cout << arr.at(2) << " ";
	cout << arr.at(3) << " ";
	cout << arr.at(4) << " ";
	cout << endl;

	// ������ ����
	cout << arr.size() << endl;

	// ������ ���� ����
	arr.resize(10);
	cout << arr.size() << endl;

	// ������ ���̸� ������ų ��� ���� �߰��� ������ ��� ��Ҵ� 0���� �ʱ�ȭ�ȴ�.
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
};