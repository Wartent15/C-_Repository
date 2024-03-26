#pragma once
#include <iostream>
#include "Shape.h"

class Circle : public Shape {
	int radius;
public:
	Circle(std::string name, std::string color, int radius);

	double area() override;
};
