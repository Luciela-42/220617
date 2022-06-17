#include <iostream>

using namespace std;

int main()
{
	int Num;

	cout << "수 입력 : ";
	cin >> Num;

	cout << "입력 된 정수 : " << Num << endl;

	for (int i = 7; i >= 0; --i)
	{
		int Result = Num >> i & 1;
		cout << Result;
	}

	return 0;
}
