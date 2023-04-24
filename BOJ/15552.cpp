#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int a;

	cin >> a;

	for (int i = 0; i < a; a++)
	{
		int b, c;
		cin >> b >> c;

		cout << b + c;
	}

	return 0;
}