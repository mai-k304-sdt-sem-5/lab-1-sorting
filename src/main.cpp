#include <iostream>
#include <ctime>

using namespace std;
 
void insertionSort(int *, int); // Прототип функции сортировки вставками
 
int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    cout << "Введите размер массива: ";
    int size_array; // Длинна массива
    cin >> size_array; // Ввод длинны массива
    int *sorted_array = new int [size_array]; // Одномерный динамический массив
    for (int counter = 0; counter < size_array; counter++) {
        sorted_array[counter] = rand() % 100; // Заполняем массив случайными числами
        cout << sorted_array[counter] << " "; // Вывод массива на экран
    }
    cout << endl;
    insertionSort(sorted_array, size_array); // Вызов функции сортировки вставками
    for (int counter = 0; counter < size_array; counter++) {
        cout << sorted_array[counter] << " "; // Печать отсортированного массива
    }
    cout << endl;
    delete[] sorted_array; // Высвобождаем память
}
 
void insertionSort(int *arrayPtr, int length) { // Сортировка вставками
    int temp, // Временная переменная для хранения значения элемента сортируемого массива
        item; // Индекс предыдущего элемента
    for (int counter = 1; counter < length; counter++) {
        temp = arrayPtr[counter]; // Инициализируем временную переменную текущим значением элемента массива
        item = counter-1; // Запоминаем индекс предыдущего элемента массива
        while(item >= 0 && arrayPtr[item] > temp) { // Пока индекс не равен 0 и предыдущий элемент массива больше текущего
            arrayPtr[item + 1] = arrayPtr[item]; // Перестановка элементов массива
            arrayPtr[item] = temp;
            item--;
        }
    }
}