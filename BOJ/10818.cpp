#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int N;
	vector<int> input;


	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int M;
		cin >> M;

		input.push_back(M);
	}

	sort(input.begin(), input.end());

	cout << input.front() << " " << input.back();

	return 0;
}
