#include <iostream>
#include <cstdlib>  // arr[i] = rand() % (10 + 1 - 1) + 1; // [1 ...10] ��������� �����  �������
#include <ctime> //srand(time(NULL)); ��������� �����  �������
#include <algorithm> // �������  stor  ������� ���������� std::sort(arr, arr + size);  
// ������� swap ���������� ����� ����������������� std::swap(arr[j], arr[j + 1]);

int main() {
	setlocale(LC_ALL, "Rus");
	/*��� ��������� ������ � ��������� 10 �� 10,
		����������� ���������� ������� �� 0 �� 100.
		������ 1
		�������� ���������, ������� ������� �����
		������� ���������� ���� � ������� ��� ���������
		����� � �������.*/
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
	/*int sumR = 0;
	for (int i = 0; i < size; i++) {
		sumR = 0;
		for (int j = 0; j < size; j++) {
			sumR += mx[i][j];
		}
		std::cout << '\n' << sumR << '\n';// ��� ����������� � ����� ������� ���� . ���� ������� ������ ������.
	}*/
		


	
	int k;
	std::cout << "Enter line number col to sort -> ";
	std::cin >> k;

	
			/*for (int i = size - 1; i >= 0; i--) {
				for (int j = 0; j < i; j++) {
					if (mx[k][j + 1] < mx[k][j])
						std::swap(mx[k][j + 1], mx[k][j]);

					

				}
				
				
			}*/
			
		/*
				for (int j = 0; j < size; j++) {
					
					std::cout << mx[k][j] << '\t';
				}
				std::cout << '\n';
				*/
	std::sort(mx[k], mx[k] + size);
		
	//for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			
			std::cout << mx[k][j] << '\t';
		}
		std::cout << '\n';
	//}

		




	return 0;
}