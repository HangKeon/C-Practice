#include <iostream>
using namespace std;

class calculator
{
private:
	int nadd;
	int nmin;
	int nmul;
	int ndiv;

public:
	void ShowOpCount();
	void Init();
	double Add(double, double);
	double Min(double, double);
	double Div(double, double);
};

void calculator::Init()
{
	nadd = 0;
	nmin = 0;
	nmul = 0;
	ndiv = 0;
}

double calculator::Add(double a, double b)
{
	nadd++;
	return a + b;
}

double calculator::Min(double a, double b)
{
	nmin++;
	return a - b;
}

double calculator::Div(double a, double b)
{
	ndiv++;
	return a / b;
}


void calculator::ShowOpCount()
{
	cout << "µ¡¼À : " << nadd << " " << "»¬¼À : " << nmin << " " << "°ö¼À : " << nmul << " ³ª´°¼À : " << ndiv << endl;
}



int main()
{
	calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();




	return 0;
}