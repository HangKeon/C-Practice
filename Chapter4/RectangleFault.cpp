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

//점의 좌표가 0이상 100이하가 되어야 하는데, 그렇지 못한 point 객체가 있다.
//이렇듯 프로그래머의 실수에 대한 대책이 하나도 되어 있지 않다.
//따라서 제한된 방법으로의 접근만 허용을 해서 잘못된 값이 저장되지 않도록 도와야 하고,  또 실수를 했을 때, 실수가 쉽게 발견되도록 해야 한다.