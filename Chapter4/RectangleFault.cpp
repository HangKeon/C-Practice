#include <iostream>
using namespace std;

class point
{
public:
	int x;										//x��ǥ�� ������ 0�̻� 100����
	int y;										//y��ǥ�� ������ 0�̻� 100����
};

class Rectangle
{
public:
	point upLeft;
	point lowRight;

	void ShowRecInfo()
	{
		cout << "�� ��� : " << '[' << upLeft.x << ", " << upLeft.y << ']' << endl;
		cout << "�� �ϴ� : " << '[' << lowRight.x << ", " << lowRight.y << ']' << endl;
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