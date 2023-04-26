#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0);

	int input, sum = 0;
	vector<int> vec;

	for (int i = 0; i < 7; i++)
	{
		cin >> input;

		if (input % 2 == 1)
		{
			vec.push_back(input);
			sum += input;
		}
	}


	if (sum == 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum << "\n";
		sort(vec.begin(), vec.end());
		cout << vec.front();
	}


}
