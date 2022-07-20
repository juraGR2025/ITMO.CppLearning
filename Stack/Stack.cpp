// Stack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;

class Stack {
public:
	int int_fixed_arr[10];
	int size = 0;
	Stack() {};
	void reset() {
		for (int i = 0; i < 10; i++) {
			int_fixed_arr[i] = 0;
		}
		size = 0;
	}
	bool push(int num) {
		if (size == 10) return false;
		int_fixed_arr[size] = num;
		size++;
		return true;
	}
	void pop() {
		if (size == 0) {
			std::cout << "В стеке нет значений!" << std::endl;
			return;
		}
		int_fixed_arr[size - 1] = 0;
		size--;
	}
	void print() {
		std::cout << "( " << std::ends;
		for (int i = 0; i < size; i++)
			std::cout << int_fixed_arr[i] << " ";
		std::cout << ")" << std::endl;
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
		Stack stack;
		stack.reset();
		stack.print();
		stack.push(3);
		stack.push(7);
		stack.push(5);
		stack.print();
		stack.pop();
		stack.print();
		stack.pop();
		stack.pop();
		stack.print();
		return 0;
/*	Должен производить следующий результат :
		()
		(3 7 5)
		(3 7)
		()*/
}

