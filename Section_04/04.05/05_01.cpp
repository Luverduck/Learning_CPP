// Section 04. �帧 ����
// 04.05 �ݺ��� do ~ while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// �ݵ�� �� �� �̻� �����ؾ� �� ������ do �ȿ� �ۼ��Ѵ�.
	int selection;
	
	do
	{
		// �ּ� �� �� �̻� �Է��� �޴´�.
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
		// �ùٸ� �Է��� ���� ������ �ݺ��Ѵ�.
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;

	return 0;
}