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
	INDEX dir[4]; // 0����, 1�»�, 3����, 4���
	int minX, maxX, minY, maxY;  
};

int main()
{

	int input = 0;
	cin >> input;

	int sum = input * 100; //��ħ���� ������ ������ (���߿� ��ġ�� �κ� ������)

	vector<SQUARE> square(input);

	//x,y ��ǥ�� �Է�
	for (int i = 0; i < input; i++)
	{
		//������ ������ŭ ���ϴ� x,y��ǥ�� �Է¹���

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

	int doubleX, doubleY; //��ġ�� ��ǥ�����

	//�����̴� ��ǥ�� -> ��ħȮ��
	for (int i = 0; i < input; i++) //�񱳱���
	{
		for (int j = 0; j < input; j++) //�񱳴��
		{
			//�񱳱����� x��ǥ 2���� �񱳴�� x��ǥ ���̿� �ִ���
			if (square[i].dir[0].x > square[j].dir[0].x && square[i].dir[0].x < square[j].dir[2].x)
			{	//x��ǥ 2���� ��� ���� ��ǥ ������
				// doubleX = (square[j].dir[2].x +)
			}
			else if (square[i].dir[0].x > square[j].dir[0].x)
			{	//���� ��ǥ�� �ȿ� �� 
				doubleX = square[j].dir[2].x - square[i].dir[0].x;
			}
			else if (square[i].dir[0].x < square[j].dir[2].x)
			{	//���� ��ǥ�� �ȿ� ��

			}


			//�񱳱����� y��ǥ 2���� �񱳴�� y��ǥ ���̿� �ִ���
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