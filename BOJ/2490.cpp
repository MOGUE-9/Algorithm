#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0);

	int t[3][4];
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> t[i][j];
		}
	}



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += t[i][j];
		}

		switch (sum)
		{
		case 4: //모
			cout << 'E' <<"\n";
			break;
		case 3: //도
			cout << 'A' << "\n";
			break;
		case 2: //개
			cout << 'B' << "\n";
			break;
		case 1: //걸
			cout << 'C' << "\n";
			break;
		case 0: //윷
			cout << 'D' << "\n";
			break;
		}

		sum = 0;
	}

}
