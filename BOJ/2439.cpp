﻿#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int N;

	cin >> N;

	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
