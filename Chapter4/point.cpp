#include <iostream>
#include "point.h"
using namespace std;

//point.cpp
//Rectangle.cpp
//RectangleFaultFind.cpp
//point.h
//Rectangle.h
//위의 것들은 서로 한꺼번에 실행


/*bool point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)										//범위 벗어난 경우 예외처리
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}*/
point::point(const int& xpos, const int& ypos)
{
	x = xpos;
	y = ypos;
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