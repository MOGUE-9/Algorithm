
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	string input; //문자열입력
	int MAX; //입력갯수
	int count; //반복횟수

	cin >> MAX;

	while (MAX)
	{
		cin >> count;
		cin >> input;

		for (int i = 0; i < input.size(); ++i)
		{

			for (int j = 0; j < count; ++j)
			{
				cout << input[i];
			}
		}
		cout << "\n";
		MAX--;
	}


	return 0;
}