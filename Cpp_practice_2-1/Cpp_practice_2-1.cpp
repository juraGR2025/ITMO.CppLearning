// Cpp_practice_2-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Исходные данные: координаты точки – x,y.
//Результат: сообщение «внутри», «снаружи», «на границе».
//Фигура - полукруг с центром в начале координат с радиусом = 3.

#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    double x;
    double y;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;
    if (x * x + y * y < 9 && y > 0)
        cout << "Внутри";// "внутри"
    else if (x * x + y * y > 9 || y < 0)
        cout << "Снаружи"; // "снаружи"
    else 
        cout << "На границе";// "на границе"

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
