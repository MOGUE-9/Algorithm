#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int H, M;

	cin >> H >> M;



	if (M >= 45)
	{
		M -= 45;
	}
	else
	{
		int m = 45 - M;
		M = 60 - m;
		H -= 1;
	}

	if (H < 0)
		H = 24 + H;

	cout << H << " " << M;

	return 0;
}

