#pragma once
#include "point.h"

class Rectangle
{
private:
	point upLeft;
	point lowRight;
public:
	bool InitMembers(const point &ul, const point &lr);
	void ShowRecInfo() const;
};