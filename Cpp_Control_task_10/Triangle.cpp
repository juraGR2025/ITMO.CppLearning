#pragma once
#include <iostream>
#include "dot.h"
#include "Triangle.h"
#include <math.h>

using namespace std;

Triangle::~Triangle()
{
	cout << "The destructor is working. ";
}

Triangle::Triangle(double x, double y, Dot d2, Dot d3)
{
	this->x = x;
	this->y = y;
	Dot d1;
	d1 = Dot::Dot(x, y);//объ€вл€ем экземпл€р класса внутри функции.

	a = d1.distanceTo(d2);
	b = d2.distanceTo(d3);
	c = d3.distanceTo(d1);
	p = (a + b + c) / 2;
}
// ћетод дл€ вывода сторон треугольника.
double Triangle::method_for_displaying() {
	cout << "Cтороны треугольника: " << endl;
	cout << "a =  " << a << endl;
	cout << "b =  " << b << endl;
	cout << "c =  " << c << endl;
	return 0;
}
// ћетод дл€ расчета периметра треугольника.
double Triangle::method_for_calculating_perimeter() {
	double Per = a + b + c;
	return Per;
}
// ћетод дл€ расчета площади треугольника.
double Triangle::method_for_calculating_area() {
	double AreaT = sqrt(p*(p - a)*(p - b)*(p - c));
	return AreaT;
}