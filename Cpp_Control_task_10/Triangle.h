#pragma once
#include "dot.h"
#include <math.h>

class Triangle
{/*Элементы класса Triangle:
• Три точки – объекты класса Dot.
• Конструктор.
• Методы, позволяющие:
− вывести длины сторон треугольника;
− расчитать периметр треугольника;
− расчитать площадь треугольника*/
public:
	double x;
	double y;
// Деструктор класса 
	~Triangle();
//Конструктор класса
	Triangle(double x, double y, Dot, Dot);
// Метод для вывода сторон треугольника.
	double method_for_displaying();
// Метод для расчета периметра треугольника.
	double method_for_calculating_perimeter();
// Метод для расчета площади треугольника.
	double method_for_calculating_area();
private:
	double a, b, c, p;//Длины сторон треугольника + полупериметр.
};
