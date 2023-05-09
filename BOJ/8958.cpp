#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


	int input = 0;
	cin >> input;

	// vector<string> str;


	for (int i = 0; i < input; ++i)
	{
		string input_s;
		cin >> input_s;

		// str.push_back(input_s);

		input_s[1];
		
		int sum = 0;
		int val = 0;

		for (int i = 0; i < input_s.size(); ++i)
		{

			if (input_s[i] == 'O')
			{
				val++;

				// if (i == 0)
				// {
				// 	val += 1;
				// }
				// else
				// {
				// 	val++;
				// }
			}
			if (input_s[i] == 'X')
			{
				val = 0;
			}

			sum += val;
		}
		cout << sum << "\n";

		sum = 0;
	}

	return 0;
}
