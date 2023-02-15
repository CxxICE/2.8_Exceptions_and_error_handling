#include "TriangleIsosceles.h"

TriangleIsosceles::TriangleIsosceles(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) 
{ 
	if (a != c)
	{
		throw BadFigure("������ �������� ��������������� ������������. �������: ������� a � c �� �����");
	}
	else if (A != C)
	{
		throw BadFigure("������ �������� ��������������� ������������. �������: ���� A � C �� �����");
	}
	name = "�������������� �����������"; 
}
