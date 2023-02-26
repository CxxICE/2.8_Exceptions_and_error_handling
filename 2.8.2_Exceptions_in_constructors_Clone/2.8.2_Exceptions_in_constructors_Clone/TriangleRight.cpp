#include "TriangleRight.h"

TriangleRight::TriangleRight(int a, int b, int c, int A, int B, int �) :Triangle(a, b, c, A, B, �) 
{ 
	if (C != 90)
	{
		throw BadFigure("������ �������� �������������� ������������. �������: ���� � �� ����� 90");
	}
	name = "������������� �����������"; 
}

Figure* TriangleRight::clone(int a, int b, int c, int A, int B, int C)
{
	return new TriangleRight(a, b, c, A, B, C);
}
