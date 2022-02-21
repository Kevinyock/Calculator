#pragma once
#include "Shapes.h"
class ThreeDimensional :
	public Shapes
{
public:
	ThreeDimensional();
	~ThreeDimensional();
	virtual double Density() = 0;
	virtual double SurfaceArea() = 0;
	virtual double Volume() = 0;
};

