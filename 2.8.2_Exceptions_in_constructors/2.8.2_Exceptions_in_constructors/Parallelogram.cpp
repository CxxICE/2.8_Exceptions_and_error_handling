#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{ 
	if (a!=c)
	{
		throw BadFigure("������ �������� ���������������. �������: ������� a � c �� �����");
	}
	else if (b!=d)
	{
		throw BadFigure("������ �������� ���������������. �������: ������� b � d �� �����");
	}
	else if (A!=C)
	{
		throw BadFigure("������ �������� ���������������. �������: ���� A � C �� �����");
	}
	else if (B!=D)
	{
		throw BadFigure("������ �������� ���������������. �������: ���� B � D �� �����");
	}

	name = "��������������"; 
}
