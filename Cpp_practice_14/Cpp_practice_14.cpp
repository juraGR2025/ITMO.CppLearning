// Cpp_practice_14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
/* Реализуем функцию сортировки, принимающую два параметра: 
массив целых чисел и его размер: */
void sorting(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        int x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}
/*5. На основе функции сортировки создайте шаблон функции:*/
template<class T>
void sorting (T arr[], int size){
 int j = 0;
 for (int i = 0; i < size; i++ ){
 T x = arr[i];
 for (j = i - 1; j >= 0 && x < arr[j]; j--) 
arr[j+1] = arr[j];
 arr[j + 1] = x;
 }
}
/*Контрольное задание. Напишите шаблон функции, возвращающей среднее арифметическое всех 
элементов массива. Аргументами функции должны быть имя и размер массива (типа int). 
В функции main() проверьте работу с массивами типа int, long, double и char*/

template<class T>
double average_value(T arr[], int size) {
    int summ = 0;
    for (int i = 0; i < size; i++)
        summ += arr[i];
    return summ / (double)size;
}


/*7. Создайте еще одну шаблонную функцию для вывода массивов различных 
типов на экран*/
template<class T>
void output_template(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++)
        cout << arr[i] << "; ";
        cout << endl;
}
/*3. В методе main() создайте массив, вызовите функцию сортировки и 
отобразите отсортированный массив на экране:*/
int main()
{
    /*int arr[] = { 9,3,17,6,5,4,31,2,12 };
    int k1 = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, k1);
    for (int i = 0; i < k1; i++) cout << arr[i] << ";";*/
/*6. В методе main() создайте два массива, один с вещественным, другой с 
символьным типами данных. Протестируйте работу шаблонной функции:*/
 int arr[] = {9,3,17,6,5,4,31,2,12};
 double arrd[] = {2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2};
 char arrc[] = "Hello, word";
 long arrl[] = { 66, 71, 80, 11, 156, 33, 333, 67, 2022, 43 };
 int k1 = sizeof(arr)/sizeof(arr[0]);
 int k2 = sizeof(arrd)/sizeof(arrd[0]);
 int k3 = sizeof(arrc)/sizeof(arrc[0]) - 1;
 int k4 = sizeof(arrl) / sizeof(arrl[0]);
 sorting(arr, k1);
 output_template(arr, k1);
 cout << average_value(arr, k1) << endl;
 sorting(arrd, k2);
 output_template(arrd, k2);
 cout << average_value(arrd, k2) << endl;
 sorting(arrc, k3);
 output_template(arrc, k3);
 cout << average_value(arrc, k3) << endl;
 sorting(arrl, k4);
 output_template(arrl, k4);
 cout << average_value(arrl, k4) << endl;
}
