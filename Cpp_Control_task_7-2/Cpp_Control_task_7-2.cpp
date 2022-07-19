// Cpp_Control_task_7-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>
#include <typeinfo>

using namespace std;

struct quadratic_equation {
    double x1;
    double x2;
};
/*Реализуйте решение квадратного уравнения с помощью функции, 
возвращающей переменную типа структуры – решение этого уравнения с полями –
корнями уравнения.*/
int flag;
quadratic_equation Myroot(double a, double b, double c)
{
    quadratic_equation q;
    
    double D = b * b - 4.0 * a * c;
    if (D < 0) {
        flag = -1;
        q.x1 = q.x2 = NULL;
        return q;
    }
    if (a == 0)
    {
        if (b == 0) {
            flag = 0;
            q.x2 = q.x1 = 0;
            return q;
        }
        flag = 0;
        q.x2 = q.x1 = -c / b;
        return q;
    }
    if (D == 0)
    {
        q.x1 = -b / (2.0 * a);
        q.x2 = q.x1;
        flag = 0;
        return q;
    }
    flag = 1;
    q.x1 = (-b + sqrt(D)) / (2.0 * a);
    q.x2 = (-b - sqrt(D)) / (2.0 * a);
    return q;
}

int main()
{
    setlocale(0, "");
    double a, b, c;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    quadratic_equation q = Myroot(a, b, c);

    if (flag == 1) {
        cout << "x1=" << q.x1 << "\t" << "x2=" << q.x2 << endl;
    }
    else if (flag == 0)cout << "x1=x2=" << q.x1 << endl;
    else  cout << "Вещественных корней нет " << endl;

    return 0;
}
