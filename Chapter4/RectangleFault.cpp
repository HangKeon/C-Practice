#include <iostream>
using namespace std;

class point
{
public:
	int x;										//x좌표의 범위는 0이상 100이하
	int y;										//y좌표의 범위는 0이상 100이하
};

class Rectangle
{
public:
	point upLeft;
	point lowRight;

	void ShowRecInfo()
	{
		cout << "좌 상단 : " << '[' << upLeft.x << ", " << upLeft.y << ']' << endl;
		cout << "우 하단 : " << '[' << lowRight.x << ", " << lowRight.y << ']' << endl;
	}
};

int main()
{
	point pos1 = { -2,4 };
	point pos2 = { 5,9 };
	Rectangle rec = { pos2,pos1 };
	rec.ShowRecInfo();

	return 0;
}