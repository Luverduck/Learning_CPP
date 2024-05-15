// Section 09. �Լ�
// 09.12 �Լ� ������

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <array>

using namespace std;

// ���ؿ� ���� ¦��/Ȧ���� ����ϴ� �Լ�
void print(array<int, 10>& r_arr, bool (*check_func)(const int&))
{
	for (int i = 0; i < sizeof(r_arr) / sizeof(int); i++)
	{
		if (check_func(r_arr[i]))
			cout << r_arr[i] << " ";
	}
	cout << endl;
}

// ¦���� �� true�� ��ȯ
bool isEven(const int& x)
{
	if (x % 2 == 0) return true;
	return false;
}

// Ȧ���� �� true�� ��ȯ
bool isOdd(const int& x)
{
	if (x % 2 != 0) return true;
	return false;
}

int main()
{
	// �迭 �ʱ�ȭ
	array<int, 10> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// ¦���� ���
	print(arr, isEven);

	// Ȧ���� ���
	print(arr, isOdd);

	return 0;
}