#include <iostream>
#include <vector>
#include <algorithm>

//https://codesyun.tistory.com/64

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);


	int min, max, sum = 0;

	vector<int> vec;

	cin >> min >> max;

	if (min == 2)
	{
		vec.push_back(min);
	}


	int start = min;

	//소수 : 약수가 본인 & 1 뿐이어야함

	for (int i = 2; i < max; i++)
	{
		int back = 0; //

		if (start % i == 0 && start != i)
		{
			back++;
		}

		if (back == 0)
		{
			sum += start;
			vec.push_back(start);
		}

		start++;
	}

	cout << sum << "\n";
	sort(vec.begin(), vec.end());
	cout << vec.front();

}
