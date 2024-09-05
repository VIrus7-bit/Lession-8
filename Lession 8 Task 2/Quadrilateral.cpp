#include "Quadrilateral.h"
#include "MyException.h"

Quadrilateral::Quadrilateral(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
{
	nameOfFigure_ = "Четырёхугольник";

	haveFourSides_ = true;

	sideLengthA_ = sideLengthA;
	sideLengthB_ = sideLengthB;
	sideLengthC_ = sideLengthC;
	sideLengthD_ = sideLengthD;

	angleA_ = angleA;
	angleB_ = angleB;
	angleC_ = angleC;
	angleD_ = angleD;

	if (angleA_ + angleB_ + angleC_ + angleD_ != 360)
	{
		throw MyException("Сумма всех углов равна 360");
	}
};