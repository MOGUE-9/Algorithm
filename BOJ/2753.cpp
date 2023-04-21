#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int year;
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 400 == 0)return 1;
		else if (year % 100 == 0) return 0;
		else return 1;
	}
	else return 0;

	//예전에 짰던 코드
	int a;

	cin >> a;

	if (!(a % 4) && (a % 100))
	{
		cout << 1;
	}
	else if (!(a % 4) && !(a % 400))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}
