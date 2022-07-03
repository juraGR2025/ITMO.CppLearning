// Cpp_Control_task_7-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
using Tuple = tuple<double, double, int>;
void printTupleEquation(Tuple t)//Функция печати кортежа (короткая запись).
{
    cout << "("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ", "
        << std::get<2>(t) << ")" << endl;
}
//int Myroot(double, double, double, double&, double&);

Tuple Myroot(double a, double b, double c, double& x1, double& x2)
{

    double D = b * b - 4.0 * a * c;
    if (D < 0) {
        return make_tuple(NULL, NULL, -1);
    }
    if (a == 0)
    {
        if (b == 0)
            return make_tuple(NULL, NULL, -1);
        x2 = x1 = -c / b;
        return make_tuple(x1, x2, 1);
    }
    if (D == 0)
    {
        x1 = -b / (2.0 * a);
        x2 = x1;

        return make_tuple(x1, x2, 0);
    }
    x1 = (-b + sqrt(D)) / (2.0 * a);
    x2 = (-b - sqrt(D)) / (2.0 * a);
    return make_tuple(x1, x2, 1);
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(0, "");
    double a, b, c, x1 = 0, x2 = 0;
    int flag;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    auto t0 = Myroot(a, b, c, x1, x2);
    flag = std::get<2>(t0);
    cout << "Flag = " << flag << endl;
    if (flag == 1) {
        cout << "x1=" << x1 << "\t" << "x2=" << x2 << endl;
    }
    else if (flag == 0)cout << "x1=x2=" << x1 << endl;
    else  cout << "Вещественных корней нет " << endl;

    printTupleEquation(t0);
    return 0;
}