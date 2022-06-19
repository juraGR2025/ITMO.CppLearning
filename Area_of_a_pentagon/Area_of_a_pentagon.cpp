﻿// Area_of_a_pentagon.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    //Определите типы данных, используемые в расчетах.
    double GaussArray[2][5];//Создаем массив 2х5.
    double S = 0;
    int i;//Инициализация переменной-счетчика.
    int n = 5;
    for (i = 0; i < n; i++) {
        cout << "Введите значение x для точки # " << (i + 1) << ": ";
        cin >> GaussArray[0][i];
        cout << "Введите значение y для точки # " << (i + 1) << ": ";
        cin >> GaussArray[1][i];
    }
//Вывод массива координат точек.
    cout << "\r" << "Координаты точек: " << ends << "\n";
    for (i = 0; i < n; i++) {
        cout << "\t" << GaussArray[0][i] << "\t" << GaussArray[1][i] << "\n";
    }
//Деловая часть программы - вычисление площади пятиугольника по формуле Гаусса.
for (i = 0; i < n; i++) {
    if (i < n-1) {
        S = S + (GaussArray[0][i] * GaussArray[1][i + 1] - GaussArray[0][i + 1] * GaussArray[1][i]);
    }
    if (i == n-1) {
        S = S + (GaussArray[0][i] * GaussArray[1][0] - GaussArray[0][0] * GaussArray[1][i]);
    }
}

S = abs(S / 2);
cout << "Площадь пятиугольника равна " << S ;
        return 0;
    }


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
