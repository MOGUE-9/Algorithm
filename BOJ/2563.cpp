#include <iostream>
#include <vector>

using namespace std;

class INDEX
{	
public:
	int x, y;
};

class SQUARE
{
public:
	INDEX dir[4]; // 0좌하, 1좌상, 3우하, 4우상
	int minX, maxX, minY, maxY;  
};

int main()
{

	int input = 0;
	cin >> input;

	int sum = input * 100; //겹침구간 계산안한 면적값 (나중에 겹치는 부분 빼야함)

	vector<SQUARE> square(input);

	//x,y 좌표값 입력
	for (int i = 0; i < input; i++)
	{
		//색종이 갯수만큼 좌하단 x,y좌표값 입력받음

		//LB
		cin >> square[i].dir[0].x >> square[i].dir[0].y;

		//LT
		square[i].dir[1].x = square[i].dir[0].x;
		square[i].dir[1].y = square[i].dir[0].y + 10;

		//RB
		square[i].dir[2].x = square[i].dir[0].x + 10;
		square[i].dir[2].y = square[i].dir[0].y;

		//RT
		square[i].dir[3].x = square[i].dir[0].x + 10;
		square[i].dir[3].y = square[i].dir[0].x + 10;
	}

	int doubleX, doubleY; //겹치는 좌표저장용

	//색종이당 좌표비교 -> 겹침확인
	for (int i = 0; i < input; i++) //비교기준
	{
		for (int j = 0; j < input; j++) //비교대상
		{
			//비교기준의 x좌표 2개가 비교대상 x좌표 사이에 있는지
			if (square[i].dir[0].x > square[j].dir[0].x && square[i].dir[0].x < square[j].dir[2].x)
			{	//x좌표 2개가 모두 남의 좌표 안쪽임
				// doubleX = (square[j].dir[2].x +)
			}
			else if (square[i].dir[0].x > square[j].dir[0].x)
			{	//왼쪽 좌표만 안에 들어감 
				doubleX = square[j].dir[2].x - square[i].dir[0].x;
			}
			else if (square[i].dir[0].x < square[j].dir[2].x)
			{	//오른 좌표만 안에 들어감

			}


			//비교기준의 y좌표 2개가 비교대상 y좌표 사이에 있는지
			if(square[i].dir[0].y > square[j].dir[0].y)
			{
				
			}
			else if (square[i].dir[0].y < square[j].dir[1].y)
			{
				
			}
		}

	}



	return sum;

}