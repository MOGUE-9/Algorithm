#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int melody[8];

	int as = 0, des = 0;

	for (int i = 0; i < 8; i++)
		cin >> melody[i];

	for (int i = 0; i < 4; i++)
	{
		if (melody[i] == i + 1 && melody[i] + melody[7 - i] == 9)
			as++;

		else if (melody[i] == 8 - i && melody[i] + melody[7 - i] == 9)
			des++;
	}

	if (as == 4)
	{
		cout << "ascending";
	}
	else if (des == 4)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}


	return 0;

#if 0
	//입력값 저장 . sort값 저장 . < 비교 ascending
	// 역 sort값 저장 . < 비교 descending
	// 둘 다 안 맞으면? mixed

	string input, melody[8], comp[8], comp_R[8];

	for (int i = 0; i < 8; ++i)
	{
		cin >> input;
		melody[i] = input;
	}

	comp = melody;
	comp_R = melody;


	sort(comp, comp.size());
	sort(comp_R, comp_R.size());


	// if (true)
	// {
	// 	if (true)
	// 	{
	// 	
	// 	}
	// }
	// sort(comp, comp + 8);

#endif

}