#include <iostream>
#include "Rectangle.h"
using namespace std;

//point.cpp
//Rectangle.cpp
//RectangleFaultFind.cpp
//point.h
//Rectangle.h
//���� �͵��� ���� �Ѳ����� ����

int main()
{
	/*point pos1;
	if (!pos1.InitMembers(-2, 4))
		cout << "�ʱ�ȭ ����" << endl;
	if (!pos1.InitMembers(2, 4))
		cout << "�ʱ�ȭ ����" << endl;

	point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "�ʱ�ȭ ����" << endl;

	Rectangle rec;
	if (!rec.InitMembers(pos2,pos1))
		cout << "���簢�� �ʱ�ȭ ����" << endl;

	if (!rec.InitMembers(pos1, pos2))
		cout << "���簢�� �ʱ�ȭ ����" << endl;
		*/

	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();

	return 0;
}