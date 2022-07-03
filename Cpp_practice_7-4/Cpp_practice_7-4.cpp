// Cpp_practice_7-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
/*4. Замените созданный typedef на новый вариант :*/
using Tuple = tuple<string, int, double>;

/*Для удобства работы с кортежами можно использовать ключевое слово typedef,
которое позволяет создать псевдоним для любого типа данных и использовать его
вместо фактического имени типа.*/
//typedef tuple<string, int, double> Tuple;

/*4. Объявите функцию с именем printTupleOfThree(), которая печатает 
кортеж, для доступа к значениям кортежа используется функция
get<индекс>(кортеж), причем значение индекса должно быть 
целочисленным константным выражением:*/
//void printTupleOfThree(tuple<string, int, double> t) 
void printTupleOfThree(Tuple t)//Функция печати кортежа (короткая запись).
{
 cout << "("
 << std::get<0>(t) << ", "
 << std::get<1>(t) << ", "
 << std::get<2>(t) << ")" << endl;
}
/*6. Добавьте объявление следующей функции (логика формирования кортежа 
может быть и другой):*/
Tuple funtup(string s, int a, double d)
{
 s.append("!");
 return make_tuple(s, a, d*10);
}
/*10.Добавьте еще одну функцию, которая будет принимать кортеж, изменять 
содержимое его переменных (на ваше усмотрение) и возвращать новый 
кортеж того же типа.*/
Tuple funtup2(string s, int a, double d)
{
    s.append("!!!");
    return make_tuple(s, a +1, d * 10);
}
/*11.Добавьте еще одну функцию, которая будет принимать кортеж, изменять 
содержимое его переменных, формировать две переменные (на ваше make_pair
усмотрение) и возвращать новый кортеж другого типа, состоящий из этих 
двух элементов.*/
typedef std::tuple<string, int> Mytuple;
Mytuple funtup3(string s, int a, double d)
{
    s.append("???");
    return Mytuple(s, a+10+d);
}
void printTupleOfThree2(Mytuple t)//Функция печати кортежа2 (короткая запись).
{
    cout << "("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ")" << endl;
}
int main()
{/*. В функции main() создайте три вектора – они будут представлять 
исходные данные для формирования кортежей.*/
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

/*. В функции main() создайте переменную кортежа типа std::tuple –
объявление объекта обычно указывает типы, из которых будет состоять 
кортеж, и порядок, в котором к ним будет осуществляться доступ. 
std::tuple можно инициализировать разными конструкторами, в этом 
упражнении используется функция std::make_tuple, которая возвращает 
объект std::tuple, содержащий заданные значения:*/
auto t0 = make_tuple(v1[0], v2[0], v3[0]);
auto t2 = make_tuple(v1[2], v2[2], v3[2]);

/*В функции main() вызовите функцию печати кортежа, передав в его 
качестве параметра:*/
printTupleOfThree(t2);

/*7. В функции main() вызовите новую функцию для создания нового 
кортежа на основе исходных данных :*/
auto t1 = funtup(v1[1], v2[1], v3[1]);
auto t3 = funtup2(v1[3], v2[3], v3[3]);
auto t4 = funtup3(v1[4], v2[4], v3[4]);
/*8. И выведите на экран новый кортеж:*/
 printTupleOfThree(t1);
 printTupleOfThree(t3);
 printTupleOfThree2(t4);

        return 0;
}
