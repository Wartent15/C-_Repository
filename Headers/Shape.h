#pragma once
#include <iostream>
#include <string>


class Shape {
protected:
	std::string name;
	std::string color;
public:
	Shape(std::string name, std::string color);

	void info();

	virtual double area() = 0;
};
