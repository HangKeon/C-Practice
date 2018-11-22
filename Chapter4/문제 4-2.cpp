#include <iostream>
using namespace std;

class Point															//점의 좌표를 나타내기 위한 클래스
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}	
};

class Circle														//원을 나타내기 위한 클래스
{
private:
	Point center;													//원의 중심 좌표
	int radius;														//반지름
public:
	void Init(int x,int y,int rad)										//초기화
	{
		center.Init(x, y);
		radius = rad;
	}

	void ShowCircleInfo()
	{
		cout << "radius : " << radius << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle inner;													//안쪽 원
	Circle outter;													//바깥쪽 원
public:
	void Init(int innerX,int innerY,int innerRad,int outterX,int outterY,int outterRad)
	{
		inner.Init(innerX, innerY, innerRad);
		outter.Init(outterX, outterY, outterRad);
	}

	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outter.ShowCircleInfo();
	}
};

int main()
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}