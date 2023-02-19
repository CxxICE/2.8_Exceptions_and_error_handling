#include "Triangle.h"

#include <iostream>
#include <format>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{	
	if (A + B + C != 180)
	{
		throw BadFigure("������ �������� ������������. �������: ����� ����� �� ����� 180");
	}
	quantSides = 3;
	name = "�����������";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}

void Triangle::printParam()
{
	std::cout	<< name << " ("
				<< std::format("�������: {}, {}, {}; ",a,b,c)			//c++20
				<< std::format("����: {}, {}, {}) ������\n",A,B,C);	//c++20
}