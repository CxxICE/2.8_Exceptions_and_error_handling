#include "Rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrilateral(a, b, c, d, A, B, C, D) 
{
	if (a!=c)
	{
		throw BadFigure("������ �������� ��������������. �������: ������� a � c �� �����");
	}
	else if (b!=d)
	{
		throw BadFigure("������ �������� ��������������. �������: ������� b � d �� �����");
	}
	else if (A!=90 || B!=90 || C!=90 || D!=90)
	{
		throw BadFigure("������ �������� ��������������. �������: �� ��� ���� ����� 90");
	}
	name = "�������������"; 
}
