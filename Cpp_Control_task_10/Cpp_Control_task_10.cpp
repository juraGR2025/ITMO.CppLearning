// Cpp_Control_task_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "Triangle.h"
#include "dot.h"
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
// Объявляем координаты точек треугольника.
    double xA = -2; double yA = 0;
    double xB = 0; double yB = 4.567;
    double xC = 2; double yC = 0;
// Объявляем точки, реализующие принцип "агрегация" (часть и целое могут существовать по-отдельности).    
    Dot* d2 = new Dot(xB, yB);
    Dot* d3 = new Dot(xC, yC);
// Создаем экземпляр класса Triangle (используем конструктор).
    Triangle* Tri = new Triangle(xA, yA, *d2, *d3);
// Вызов метода для вывода сторон треугольника.
    Tri->method_for_displaying();
// Вызов метода для расчета периметра треугольника.
    cout << "Периметр равен " << Tri->method_for_calculating_perimeter() << endl;
// Вызов метода для расчета площади треугольника.
    cout << "Площадь треугольника равна " << Tri->method_for_calculating_area() << endl;

}
