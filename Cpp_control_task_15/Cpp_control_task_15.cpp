// Cpp_control_task_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <map>
#include <windows.h>

using namespace std;
/*Требуется написать программу, которая позволит присваивать оценки 
студентам, указывая только имя студента. 
Для организации данных используйте контейнер map (контейнер map – это 
класс, в котором все элементы хранятся в виде пары ключ-значение), ключ должен 
быть уникальным и использоваться для доступа к связанной паре: имя студента – 
ключ, оценка (тип char) - значение.
Указание. Создайте структуру (класс в принципе не требуется для этой задачи)
StudentGrade с двумя элементами: имя студента (std::string) и оценка (char)*/

struct StudentGrade {
public:
    string Name;
    char grade;
};


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    map<string, char>  rating_sheet;

    StudentGrade student1{ "Юрий", '5' };
    StudentGrade student2{ "Александр", '5' };
    StudentGrade student3{ "Егор", '4' };

    rating_sheet.insert(pair<string, char>(student1.Name, student1.grade));
    rating_sheet.insert(pair<string, char>(student2.Name, student2.grade));
    rating_sheet.insert(pair<string, char>(student3.Name, student3.grade));

    // Вывод массива студентов
    map<string, char>::iterator it;
    it = rating_sheet.begin();
    while (it != rating_sheet.end()) {

        cout << "Студент " << (*it).first << " получил оценку " << (*it).second << endl;
        it++;
    }
    string name;
    cout << "Добавить студента? (y/n)" << endl;
    char choice;
    cin >> choice;
    
    while (choice == 'y' || choice == 'Y') {
    cout << "Введите имя студента:" << endl;
    cin >> name;
    for (auto& stud : rating_sheet)
    {
        // Если студент найден, выводим информацию об оценке.
        if (stud.first == name) {
            cout << "Такой студент есть! Оценка студента " << stud.first << ": "<< stud.second << endl;
            return 0;
        }
    }
// Если студент не найден, создаём новый StudentGrade для нового ученика
    char grade;
    cout << "Студента " << name << " нет в списке." << endl;
    cout << "Введите отметку студента: " << endl;
    cin >> grade;
    StudentGrade student{ name, grade };
    rating_sheet.insert(pair<string, char>(student.Name, student.grade));
    cout << "Студент внесен в список." << endl;
    cout << "Студент " << student.Name << " получил оценку " << student.grade << endl;

    cout << "Продолжить? (y/n)" << endl;
    cin >> choice;
    }
    if(choice != 'y' || choice != 'Y') cout << "Bye!" << endl;
       
    return 0;
}