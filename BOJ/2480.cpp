﻿#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && a == c) cout << 10000 + a * 1000;
	else if (a == b || a == c) cout << 1000 + a * 100;
	else if (b == c) cout << 1000 + b * 100;
	else cout << max({ a, b, c }) * 100;

	//같은눈 3개 10,000원+(같은 눈)×1,000원

	//같은눈 2개 1,000원+(같은 눈)×100

	//같은눈 0개  (그 중 가장 큰 눈)×100원


#if 0
	int same;

	if (dice[0] == dice[1]) //2
	{
		if (dice[0] == dice[2]) //3 
		{
			same = dice[0];
			cout << 10000 + same * 1000;
		}
		else //2
		{
			same = dice[0];
			cout << 1000 + same * 100;
		}
	}
	else if (dice[0] == dice[2]) //2
	{
		if (dice[1] == dice[2]) //3
		{
			same = dice[0];
			cout << 10000 + same * 1000;
		}
		else //2
		{
			same = dice[0];
			cout << 1000 + same * 100;
		}
	}
	else if (dice[1] == dice[2]) //2
	{
		same = dice[0];
		cout << 1000 + same * 100;
	}
	else // 모두 다른 눈
	{
		int max = 0;
		for (int i = 0; i < 3; i++)
		{
			if (dice[i] > max) max = dice[i];
		}
		cout << max * 100;
	}
#endif

}