#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	//36진법 ZZZZZ

	string n_string;
	double b_int;

	cin >> n_string >> b_int;

	double length = n_string.length();
	long long sum = 0;

	vector<char> ch_num;

	strcpy(ch_num.push_back(), n_string.c_str());

	for (int i= 0; i < length; i++)
	{
		double num = length - (i + 1);
		sum += n_string[i] * pow(b_int, num);
	}

	cout << sum;
	// 첫째자리 * b진법 * 자릿수




}
