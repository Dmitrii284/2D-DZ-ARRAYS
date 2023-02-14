#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);

int main() {
	setlocale(LC_ALL, "Rus");
	/*Дан двумерный массив с размерами 10 на 10,
		заполненный случайными числами от 0 до 100.
		Задача 1
		Напишите программу, которая считает сумму
		каждого отдельного ряда и выводит все найденные
		суммы в консоль.*/
	const int size = 10;
	int mx[size][size];
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			mx[i][j] = rand() % 101; //[0..100]
			std::cout << mx[i][j] << '\t';
		}
		std::cout << '\n';
		
	}
	int sumR = 0;
	for (int i = size; i <= size; i++)
		for (int j = 0; j < size; j++) {
			sumR += mx[i][j];
		}
	std::cout << sumR << '\n';
	

	return 0;
}