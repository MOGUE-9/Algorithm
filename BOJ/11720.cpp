#include <iostream>
#include <string>
// #include <stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int n, sum = 0;
	char ch;

	cin >> n;
	//
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> ch;
	//
	// 	sum += ch - 48;
	//
	// }

	string str;

	cin >> str;

	for (int i = 0; i < n; i++)
	{
		sum += str[i] - '0';
	}

	cout << sum;

	return 0;
}

// {
// 	string str;
// 	int sum = 0;
//
// 	cin >> n >> str;
//
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (i != 0)
// 		{
// 			string s = str[i];
// 			sum += stoi(s);
// 		}
// 	}
// }