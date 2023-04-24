#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	ios::sync_with_stdio(false); cin.tie(nullptr);

	int a, b;
	cin >> a >> b;


	while (true)
	{
		if (a == 0 && b == 0)
			break;

		if (b % a == 0) cout << "factor\n";
		else if (a % b == 0) cout << "multiple\n";
		else cout << "neither\n";

		cin >> a >> b;
	}


#if 0
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int a = 0, b = 0;

	cin >> a >> b;


	if (b % a == 0) cout << "factor";
	else if (a % b == 0) cout << "multiple";
	{
		

		for (int i = 1; i < a; i++)
		{
			if (b == a * i)
			{
				cout << "multiple";
				break;

			}
			else if (b > a * i)
			{
				cout << "neither";
				break;
			}
		}
	}
#endif

	return 0;
}
