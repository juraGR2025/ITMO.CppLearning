// SchoolCpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "human.h"
#include "student.h"
#include "teacher.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // Оценкистудента
    std::vector<int> scores;
    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
/*2. Создайте конкретного студента – объект класса student:*/
student *stud = new student("Петров", "Иван", "Алексеевич", scores);
/*3. Выведете на экран полное имя студента, используя унаследованный метод 
класса human*/
std::cout<< stud->get_full_name() <<std::endl;
/*После инициализации объекта, происходит вывод полного имени студента с
помощью функции get_full_name. Эта функция была унаследована от базового 
класса human.
4. Реализуйте вывод среднего балла студента с помощью функции 
get_average_score класса student:*/
std::cout << "Средний балл: "<< stud->get_average_score() <<std::endl;

unsigned int teacher_work_time = 40;
teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич",
    teacher_work_time);
std::cout << tch->get_full_name() << std::endl;
std::cout << "Количество часов: " << tch->get_work_time() <<
std::endl;

human* som_human = new human("Иванов", "Иван", "Иванович");
som_human = tch;
std::cout << som_human->get_polimorf() << std::endl;
return 0;
}
/*Верно, принимается. Но зачем так сложно делать: сначала создавать объект базового класса, 
потом его переприсваивать ранее созданному объекту производного класса. Проще показать полиморфизм так, 
human* hum = new student (....); И потом от имени hum вызывать методы*/