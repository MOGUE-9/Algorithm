#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	string input;


	getline(cin, input);

	int count;

	//만약 맨 앞이 공백이고 그걸로 끝이라면??
	// 3번의 입력이 모두 공백이라면? >> 너무 끔찍한데 ㅋㅋ

	//빈 문자열 처리를 안해줬다! 예외처리 필수! 
	if (input.empty())
	{
		cout << "0";
		return 0;
	}

	count = 1;


	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			count++;


			//둘다 따로처리해야 하는 이유 > 앞뒤로 공백 들어갈수도있으니까.

			if (i == 0)
				count--;

			if(i == input.length() - 1)
				count--;
		}
	}

	cout << count;

	return 0;
}


