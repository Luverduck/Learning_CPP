// Section 08. ����ü
// 08.12 typedef Ű����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// double �ڷ����� ��Ī ����
	typedef double distance_t;

	// ��Ī���� ���ǵ� �ڷ����� ���� �ʱ�ȭ
	distance_t distance = 3.5;
	cout << distance << endl;

	// typedef�� ���ǵ� ��Ī�� ����
	// ��� �ۿ� ���ǵ� int �ڷ����� ��Ī
	typedef int integer_t;
	{
		// ��� �ȿ� ���ǵ� short �ڷ����� ��Ī
		typedef short integer_t;
		cout << sizeof(integer_t) << endl;;
	};
	cout << sizeof(integer_t) << endl;

	return 0;
};