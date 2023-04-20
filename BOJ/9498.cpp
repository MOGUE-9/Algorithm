#include <iostream>

using namespace std;

int main(void)
{
	int a= 0;

	cin >> a;

	if (a < 60)
		cout << "F";
	else if (a >= 60 && a < 70)
		cout << "D";
	else if (a >= 70 && a < 80)
		cout << "C";
	else if (a >= 80 && a < 90)
		cout << "B";
	else
		cout << "A";

}