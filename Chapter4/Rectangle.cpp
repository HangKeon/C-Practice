#include <iostream>
#include "Rectangle.h"
using namespace std;

//point.cpp
//Rectangle.cpp
//RectangleFaultFind.cpp
//point.h
//Rectangle.h
//위의 것들은 서로 한꺼번에 실행

/*bool Rectangle::InitMembers(const point &ul, const point &lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}*/

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2):upLeft(x1,y1),lowRight(x2,y2)
{

}



void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단 : " << '[' << upLeft.GetX() << ", " << upLeft.GetY() << ']' << endl;
	cout << "우 하단 : [" << lowRight.GetX() << ", " << lowRight.GetY() << ']' << endl;
}