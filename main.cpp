#include <iostream>

using namespace std;

int main()
{
	int Num;

	cout << "�� �Է� : ";
	cin >> Num;

	cout << "�Է� �� ���� : " << Num << endl;

	if (Num < 256)
	{
		for (int i = 7; i >= 0; --i)
		{
			int Result = Num >> i & 1;
			cout << Result;
		}
	}
	else
	{
		cout << "256 �̸��� ���� �Է� ���ּ���" << endl;
	}
	return 0;
}