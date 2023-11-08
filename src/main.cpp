#include <iostream>
#include <ctime>

using namespace std;
 
void selectionSort(int *, int); // Прототип функции сортировки вставками
 
int main() {
    srand(time(NULL)); // Рандомизация
    setlocale(LC_ALL, "rus"); // Подключения русского языка
    cout << "Введите размер массива: ";
    int size_array; // Длинна массива
    cin >> size_array; // Ввод длинны массива
    int *sorted_array = new int [size_array]; // Одномерный динамический массив
    for (int counter = 0; counter < size_array; counter++) {
        sorted_array[counter] = rand() % 100; // Заполняем массив случайными числами
        cout << sorted_array[counter] << " "; // Вывод массива на экран
    }
    cout << endl;
    insertionSort(sorted_array, size_array); // Вызов функции сортировки выбором
    for (int counter = 0; counter < size_array; counter++) {
        cout << sorted_array[counter] << " "; // Печать отсортированного массива
    }
    cout << endl;
    delete[] sorted_array; // Высвобождаем память
}

void selectionSort(int *arrayPtr, int length) { // Сортировка выбором
	int min, // Минимальное значение
		temp; // Для обмена значениями 
	for (int i = 0; i < length; i++) { // Проход по всем элементам массива
		min = i; // Запомним номер текущей ячейки, как ячейки с минимальным значением
		for (int j = i + 1; j < length; j++) // В цикле найдем реальный номер ячейки с минимальным значением
			min = ( arrayPtr[j] < arrayPtr[min] ) ? j : min;
		if (i != min) { // Сделаем перестановку этого элемента, поменяв его местами с текущим
			temp = arrayPtr[i];
			arrayPtr[i] = arrayPtr[min];
			arrayPtr[min] = temp;
		}
	}
}