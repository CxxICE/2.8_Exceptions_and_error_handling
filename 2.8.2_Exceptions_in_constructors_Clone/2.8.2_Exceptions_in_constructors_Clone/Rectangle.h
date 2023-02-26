#pragma once

#include "Figure.h"
#include "Quadrilateral.h"
#include "BadFigure.h"

class Rectangle : public Quadrilateral
{
public:
	Rectangle() {};
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
	Figure* clone(int a, int b, int c, int d, int A, int B, int C, int D) override;
};
