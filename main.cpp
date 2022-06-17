#include <iostream>

using namespace std;

int main()
{
	int Num;

	cout << "수 입력 : ";
	cin >> Num;

	cout << "입력 된 정수 : " << Num << endl;

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
		cout << "256 미만의 수를 입력 해주세요" << endl;
	}
	return 0;
}