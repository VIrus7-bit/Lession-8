#include "Parallelogram.h"
#include "MyException.h"


Parallelogram::Parallelogram(int sideLengthA, int sideLengthB, int sideLengthC, int sideLengthD, int angleA, int angleB, int angleC, int angleD)
	: Quadrilateral(sideLengthA, sideLengthB, sideLengthC, sideLengthD, angleA, angleB, angleC, angleD)
{
	Quadrilateral::nameOfFigure_ = "Паралелограмм";

	if ((sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
		&& (angleA_ != angleC_ || angleB_ != angleD_))
	{
		throw MyException("Сумма соседней стороны равна 90");
	}

	if (sideLengthA_ != sideLengthC_ || sideLengthB_ != sideLengthD_)
	{
		throw MyException("Сумма соседней стороны равна 90");
	}

	if (angleA_ != angleC_ || angleB_ != angleD_)
	{
		throw MyException("Сумма соседней стороны равна 90");
	}
}