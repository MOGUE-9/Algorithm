#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);


	int n = 0 , sum = 0;

	vector<int> arr2;

	while (true)
	{
		cin >> n;

		if (n == -1) break;

		for (int i = 1; i < n; i++)
		{
			if ( n % i == 0)
			{
				arr2.push_back(i);
				sum += i;
			}
		}

		if (n == sum)
		{
			cout << n << " = ";
			for (int i = 0; i < arr2.size() -1 ; i++)
			{
				cout << arr2[i] << " + ";
			}
			cout << arr2[arr2.size() - 1];

			cout << "\n";

			arr2.clear();
			arr2.shrink_to_fit();
			sum = 0;
		}
		else if (n != sum)
		{
			cout << n << " is NOT perfect." << "\n";
			arr2.clear();
			arr2.shrink_to_fit();
			sum = 0;

		}
	}



	return 0;
}
