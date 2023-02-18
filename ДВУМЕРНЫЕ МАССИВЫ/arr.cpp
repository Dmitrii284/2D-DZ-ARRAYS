#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] Случайные числа  массива
#include <ctime> //srand(time(NULL)); Случайные числа  массива
#include <algorithm> // функция  stor  Быстрая сортировка std::sort(arr, arr + size);  
// функцию swap Сортировка через сравнениемассивов std::swap(arr[j], arr[j + 1]);

int main() {
	setlocale(LC_ALL, "Rus");
	/* Given a two-dimensional array with dimensions 10 by 10,
	delayed by random numbers from 0 to 100.
	Task 1
	Write a program that counts
	each single line and outputs all found
	amounts in the console.*/
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
	for (int i = 0; i < size; i++) {
			sumR = 0;
		for (int j = 0; j < size; j++) {
			sumR += mx[i][j];
		}
		std::cout << '\n' << sumR << '\n';// Тут добавляется к сумме каждого ряда . Надо вывести только одного.
	}			
	int k;
	std::cout << "Enter line number col to sort -> ";
	std::cin >> k;
	std::cout << "First way \n";
			/*for (int i = size - 1; i >= 0; i--) {
				for (int j = 0; j < i; j++) {
					if (mx[k][j + 1] < mx[k][j])
						std::swap(mx[k][j + 1], mx[k][j]);
				}
			}
			for (int j = 0; j < size; j++){
				std::cout << mx[k][j] << '\t';
			}
			std::cout << '\n';*/

		std::sort(mx[k], mx[k] + size);		
	//for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++) {
			std::cout << mx[k][j] << '\t';
		}
			std::cout << '\n';
	//}
	return 0;
}