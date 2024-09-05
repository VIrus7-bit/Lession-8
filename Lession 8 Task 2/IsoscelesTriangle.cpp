#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int sideLengthA, int sideLengthB, int sideLengthC, int angleA, int angleB, int angleC)
	: Triangle(sideLengthA, sideLengthB, sideLengthC, angleA, angleB, angleC)
{
	Triangle::nameOfFigure_ = "Равнобедренный треугольник";

	if (sideLengthA_ != sideLengthC_ && angleA_ != angleC_)
	{
		throw MyException("Равнобедренный треугольник");
	}

	if (sideLengthA_ != sideLengthC_)
	{
		throw MyException("Равнобедренный треугольник");
	}

	if (angleA_ != angleC_)
	{
		throw MyException("Равнобедренный треугольник");
	}
};