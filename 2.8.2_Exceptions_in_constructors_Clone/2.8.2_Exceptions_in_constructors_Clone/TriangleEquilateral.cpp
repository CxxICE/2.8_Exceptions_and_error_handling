#include "TriangleEquilateral.h"

TriangleEquilateral::TriangleEquilateral(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) 
{ 
	if (a!=b || a!=c || b!=c)
	{
		throw BadFigure("������ �������� ��������������� ������������. �������: �� ��� ������� �����");
	}
	else if (A!=60 || B!=60 || C!=60)
	{
		throw BadFigure("������ �������� ��������������� ������������. �������: �� ��� ���� �����");
	}
	name = "�������������� �����������"; 
}

Figure* TriangleEquilateral::clone(int a, int b, int c, int A, int B, int C)
{
	return new TriangleEquilateral(a, b, c, A, B, C);
}