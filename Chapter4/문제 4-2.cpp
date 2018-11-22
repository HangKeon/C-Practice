#include <iostream>
using namespace std;

class Point															//���� ��ǥ�� ��Ÿ���� ���� Ŭ����
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

class Circle														//���� ��Ÿ���� ���� Ŭ����
{
private:
	Point center;													//���� �߽� ��ǥ
	int radius;														//������
public:
	void Init(int x,int y,int rad)										//�ʱ�ȭ
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
	Circle inner;													//���� ��
	Circle outter;													//�ٱ��� ��
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