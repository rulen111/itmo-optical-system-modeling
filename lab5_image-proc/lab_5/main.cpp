// Лабораторная работа №5, вариант №13, группа B34003, студент Ахмаров Руслан Идрисович
#include <fstream> // стандартный поток чтения/записи в файл
#include <iostream> // стандартный поток консольного ввода/вывода

using namespace std; // используемое стандартное пространство имен

int main() {
	setlocale(LC_ALL, "Russian"); // подключение русского языка в консоли

	// размеры двумерного массива
	const int rows = 20; // количество строк
	const int cols = 20; // количество столбцов
	// определение массива, определение и инициализация переменных
	int A[rows][cols], D = 0, count = 0;

	ifstream inFile("In.txt"); // файл с исходным массивом
	ofstream outFile("Out.txt"); // результирующий файл
	
	// Ввод в двумерный массив
	for (int i = 0; i < rows; i++) // цикл по строкам
	{
		for (int k = 0; k < cols; k++) // цикл по столбцам
		{
			inFile >> A[i][k]; // запись значения в элемент массива
		}
	}
	inFile.close(); // закрываем файл на чтение

	// вывод исходного массива в файл
	outFile << "Размер изображения: " << rows << " x " << cols << " пикселей" << endl << endl;
	outFile << "Исходная матрица:" << endl;
	for (auto &row : A) // цикл по строкам
	{
		for (auto &col : row) // цикл по столбцам
		{
			outFile << col << " "; // записываем значения элемента массива в файл
		}
		outFile << endl;
	}
	outFile << endl;

	// просим оператора ввести значение интенсивности для замены
	cout << "Введите значение интенсивности, которое нужно заменить на 255: ";
	cin >> D;

	// преобразование и вывод результирующего массива в файл
	outFile << "Результирующая матрица:" << endl;
	for (auto& row : A) // цикл по строкам
	{
		for (auto& col : row) // цикл по столбцам
		{	
			// преобразование согласно заданию
			if (col == D) {
				col = 255;
				count++;
			}
			else {
				col = 0;
			}

			// записываем значения элемента массива в файл
			outFile << col << " ";
		}
		outFile << endl;
	}
	outFile << "Количество найденных пикселей: " << count; // записываем количество найденных пикселей
	outFile.close(); // закрываем файл для записи

	return 0;
}