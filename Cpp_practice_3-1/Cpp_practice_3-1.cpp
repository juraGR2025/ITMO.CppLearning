// Cpp_practice_3-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int a, b, c;
    int k = 0, n = 10;
    for (int i = 1; i <= n; i++)
    {
        // инициализация операндов случайными числами от 1 до 101
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        if (a * b != c)
        {
            k++; // операция «инкремент», аналогично: k = k + 1
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    int Sum = 0;
    int l = 10;
    int m = 90;
    for (int i = 1; i <= 100; i++)
    {
        if ((i > l) && (i < m))
            continue;
        Sum += i;
    }

    cout << "Count error: " << k << endl;
    cout << "Sum: " << Sum << endl;
    return 0;
}
