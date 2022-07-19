// Cpp_Control_task_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <sstream>
#include <ctime>

using namespace std;
/*1.Создайте структуру с именем Time. Три ее поля, имеющие тип int, назовите 
hours, minutes и seconds. Напишите программу, которая просит пользователя ввести 
время в формате часы, минуты, секунды. Можно запрашивать на ввод как три 
значения сразу, так и выводить для каждой величины отдельное приглашение. 
Программа должна хранить время в структурной переменной типа Time и выводить 
количество секунд во введенном времени. Добавьте в структуру две функции для 
сложения и вычитания интервалов времени. При решении задачи учитывайте 
естественные допустимые значения для реализуемых характеристик.*/
struct Time
{
    int hours;
    int minutes;
    int seconds;
    int sumTime(Time t) {//Функция для выводa количествa секунд во введенном времени.
        int sumseconds = 0;
        sumseconds = t.minutes * 60;
        sumseconds = sumseconds + t.seconds + t.hours * 60 * 60;
        return sumseconds;
    }
    Time AddTime(const Time& t1, const Time& t2, const Time& t3, const Time& t4)
    {
        Time t;
    //Вычисляем первый интервал времени.
        int T1 = sumTime(t2) - sumTime(t1);
    //Вычисляем второй интервал времени.
        int T2 = sumTime(t4) - sumTime(t3);
    //Вычисляем сумму интервалов.
        int sumint = T1 + T2;
    //Вычисляем значения структуры.
        if (sumint >= 3600) {
            t.hours = sumint / 60 / 60;
            t.minutes = (sumint - t.hours * 60 * 60) / 60;
            t.seconds = sumint - t.hours * 60 * 60 - t.minutes * 60;
            return t;
        }
        else if (sumint >= 60 && sumint < 3600) {
            t.hours = 0;
            t.minutes = sumint / 60;
            t.seconds = sumint -  t.minutes * 60;
            return t;
        }
        else {
            t.hours = 0;
            t.minutes = 0;
            t.seconds = sumint;
        }
    }
    Time DiffTime(const Time& t1, const Time& t2, const Time& t3, const Time& t4)
    {
        Time t;
        //Вычисляем первый интервал времени.
        int T1 = sumTime(t4) - sumTime(t3);
        //Вычисляем второй интервал времени.
        int T2 = sumTime(t2) - sumTime(t1);
        //Вычисляем разницу интервалов.
        int sumint = T1 - T2;
        //Вычисляем значения структуры.
        if (sumint >= 3600) {
            t.hours = sumint / 60 / 60;
            t.minutes = (sumint - t.hours * 60 * 60) / 60;
            t.seconds = sumint - t.hours * 60 * 60 - t.minutes * 60;
            return t;
        }
        else if (sumint >= 60 && sumint < 3600) {
            t.hours = 0;
            t.minutes = sumint / 60;
            t.seconds = sumint - t.minutes * 60;
            return t;
        }
        else {
            t.hours = 0;
            t.minutes = 0;
            t.seconds = sumint;
        }
    }
};
Time InputTime()
{//Функция для ввода значений времени.
    Time t;
    cout << "\nВведите часы: ";
    cin >> t.hours;
    if (t.hours > 23 || t.hours < 0)
    {
        cout << "\nНеверный формат времени!" << endl;
        exit(t.hours);
    }
    cout << "Введите минуты: ";
    cin >> t.minutes;
    if (t.minutes > 59 || t.minutes < 0) 
    {
        cout << "\nНеверный формат времени!" << endl;
        exit(t.minutes);
    }
    cout << "Введите секунды: ";
    cin >> t.seconds;
    if (t.seconds > 59 || t.seconds < 0)
    {
        cout << "\nНеверный формат времени!" << endl;
        exit(t.seconds);
    }
    return t;
}
void sumTime(Time t) {//Функция для выводa количествa секунд во введенном времени.
    int sumseconds = 0;
    sumseconds = t.minutes * 60;
    sumseconds = sumseconds + t.seconds + t.hours * 60 * 60;
    cout << "C 0 часов 00 минут прошло " << to_string(sumseconds) << " секунды";
}
void ShowTime(Time t)
{
    cout << "В интервале " << t.hours << " часов, " << t.minutes <<" минут, " << t.seconds << " cекунд." << "\"\n";
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Time t1 = InputTime();
    sumTime(t1);
    Time t2 = InputTime();
    Time t3 = InputTime();
    Time t4 = InputTime();
    Time trez = t1.AddTime(t1, t2, t3, t4);
    ShowTime(trez);
    Time trez2 = t1.DiffTime(t1, t2, t3, t4);
    cout << "Разница интервалов. " << endl;
    ShowTime(trez2);
}

