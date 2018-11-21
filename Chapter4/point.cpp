#include <iostream>
#include "point.h"
using namespace std;

bool point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)										//���� ��� ��� ����ó��
	{
		cout << "��� ������ �� ����" << endl;
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
	if (xpos < 0 || xpos>100)										//���� ��� ��� ����ó��
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool point::SetY(int ypos)
{
	if (ypos < 0 || ypos>100)										//���� ��� ��� ����ó��
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}