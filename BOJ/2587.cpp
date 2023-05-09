#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int input[5];
	int sum = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> input[i];
		sum += input[i];
	}

	cout << sum / 5 << "\n";
	sort(input, input + 5);
	cout << input[2];
}