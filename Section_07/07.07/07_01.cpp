// Section 07. �迭�� ���ڿ�
// 07.07 C-style ���ڿ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// C-style ���ڿ� ����
	char str1[255];

	// C-style ���ڿ��� �� ����
	str1[0] = 'H';
	str1[1] = 'e';
	str1[2] = 'l';
	str1[3] = 'l';
	str1[4] = 'o';
	str1[5] = ',';
	str1[6] = '\0';
	str1[7] = 'W';
	str1[8] = 'o';
	str1[9] = 'r';
	str1[10] = 'l';
	str1[11] = 'd';
	str1[12] = '!';
	str1[13] = '\0';

	// null ���� '\0'�� ������ �������� ���ڸ� ����Ѵ�.
	cout << str1 << endl;

	// C-style ���ڿ� �ʱ�ȭ
	char str2[] = "Hello, World!";

	// null ���� '\0'�� ������ �������� ���ڸ� ����Ѵ�.
	cout << str2 << endl;

	// C-style ���ڿ��� �ʱ�ȭ�� �� ���ڿ� ���� null ���� '\0'�� �ڵ����� �߰��ȴ�. 
	int idx = 0;
	while (true) 
	{
		if (str2[idx] == '\0') break;

		cout << str2[idx] << " " << (int)str2[idx] << endl;
		++idx;
	}
	
	return 0;
};