#pragma once
#include "TwoDimensional.h"
class Circles :
	public TwoDimensional
{
private:
	const float pi = 3.1415926;
	double radius;
public:
	Circles();
	~Circles();
	double r;
	float Circumference(double);
	float AreaOfCircle(double);
};

