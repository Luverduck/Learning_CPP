// Section 09. �Լ�
// 09.04 �μ��� ���� (�迭)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

// �Լ�
void func(const vector<int>& arr)
{
	int len = sizeof(arr) / sizeof(int);

	cout << sizeof(arr) << endl;

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
};


int main()
{
	// �迭 �ʱ�ȭ
	vector<int> a_arr{ 1, 2, 3, 4 };

	// ������ ���� ����
	func(a_arr);

	return 0;
}