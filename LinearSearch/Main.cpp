//Linear Search
#include<iostream>
#include<cstdlib>
#include<ctime>


template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}

//Заполнение массива случайными числами из диапазона от left до right
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

//Линейный поиск первого вхождения элемента value в массив 
//arr длинною в length , начиная с позиции begin
template <typename T>
int search_index(T arr[], const int length, int value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

//Линейный поиск последнего вхождения элемента value в массив 
//arr длинною в length 
template <typename T>
int search_last_index(T arr[], const int length, int value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

//Линейный поиск последнего вхождения элемента value в массив 
//arr длинною в length,начиная с позиции begin
template <typename T>
int search_last_index(T arr[], const int length, int value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

int main() {
	system("chcp 1251>nul");
	int n, m;
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, 1, 11);//[1...10]
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Введите число -> ";
	std::cin >> n;

	//Поиск первого вхождения
	/*int index = search_index(arr, size, n, 5);
	if (index != -1)
		std::cout << "Позиция числа в массиве: " << index << std::endl;
	else
		std::cout << "Числа нет в массиве!" << std::endl;*/

		//Поиск последнего вхождения
	int last_index = search_last_index(arr, size, n, 4);
	if (last_index != -1)
		std::cout << "Позиция последнего вхождения числа в массив: " << last_index << std::endl;
	else
		std::cout << "Числа нет в массиве!" << std::endl;



	return 0;
}