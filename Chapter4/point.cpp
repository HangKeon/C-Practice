#include <iostream>
#include "point.h"
using namespace std;

bool point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)										//범위 벗어난 경우 예외처리
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int point::GetX() const
{
	return x;
}

int point::GetY() const
{
	return y;
}

bool point::SetX(int xpos)
{
	if (xpos < 0 || xpos>100)										//범위 벗어난 경우 예외처리
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool point::SetY(int ypos)
{
	if (ypos < 0 || ypos>100)										//범위 벗어난 경우 예외처리
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}