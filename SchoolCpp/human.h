// human.h
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#pragma once 
using namespace std;
/* Защита от двойного подключения заголовочного файла */
/*Реализуйте класс, объявите в поле класса свойства (имя, фамилия и 
отчество), конструктор с тремя параметрами для инициализации этих 
свойств и методы получения значений в поля класса:*/
class human {
public:
	// Конструктор класса human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	// Получение ФИО полиморфным вызовом
	virtual std::string get_polimorf() const
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

private:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};
