#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	string input;

	int count, left = 0, right = 0;

	cin >> count;

	while (count)
	{
		cin >> input;


		for (int i = 0; i < input.size(); ++i)
		{
			if (input[i] == '(') left++;
			if (input[i] == ')') right++;

			if (right > left) break;
		}

		if (left == right) cout << "YES" << "\n";
		else cout << "NO" << "\n";

		input.clear();
		left = right = 0;
		count--;
	}

	return 0;
}