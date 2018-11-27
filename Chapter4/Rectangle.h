#pragma once
#include "point.h"

class Rectangle
{
private:
	point upLeft;
	point lowRight;
public:
	//bool InitMembers(const point &ul, const point &lr);
	Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
	void ShowRecInfo() const;
};

//point.cpp
//Rectangle.cpp
//RectangleFaultFind.cpp
//point.h
//Rectangle.h
//위의 것들은 서로 한꺼번에 실행