#include "Rombus.h"

Rombus::Rombus(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{ 
	if (a!=b || a!=c || a!=d || b!=c || b!=d || c!=d)
	{
		throw BadFigure("������ �������� �����. �������: �� ��� ������� �����");
	}
	else if (A!=C)
	{
		throw BadFigure("������ �������� �����. �������: ���� A � C �� �����");
	}
	else if (B!=D)
	{
		throw BadFigure("������ �������� �����. �������: ���� B � D �� �����");
	}
	name = "����"; 
}

Figure* Rombus::clone(int a, int b, int c, int d, int A, int B, int C, int D)
{
	return new Rombus(a, b, c, d, A, B, C, D);
}

