#include <iostream>

using namespace std;

int main()
{
	int Num;

	cout << "�� �Է� : ";
	cin >> Num;

	cout << "�Է� �� ���� : " << Num << endl;

	for (int i = 7; i >= 0; --i)
	{
		int Result = Num >> i & 1;
		cout << Result;
	}

	return 0;
}
