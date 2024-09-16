// Лабораторная работа №7, вариант №13, группа B34003, студент Ахмаров Руслан Идрисович
#include <fstream> // стандартный поток чтения/записи в файл
#include <iostream> // стандартный поток ввода/вывода в консоль

using namespace std; // используемое стандартное пространство имен

// функция для ввода и проверки входных параметров
void getInitParams(double& aperture, double& focalLength) {
	cout << "Введите расстояние до апертурной диафрагмы в мм: ";
	cin >> aperture;
	cout << endl << "Введите фокусное расстояние линзы в мм: ";
	cin >> focalLength;

	// просим ввести параметры до тех пор, пока они не будут соответствовать условиям
	while ((aperture == 0.0) || (focalLength == 0.0)) {
		cout << "Входные параметры не могут быть равны нулю!" << endl;
		cout << endl << "Введите расстояние до апертурной диафрагмы в мм: ";
		cin >> aperture;
		cout << endl << "Введите фокусное расстояние линзы в мм: ";
		cin >> focalLength;
	}
}

// функция для расчета расстояния до входного зрачка
double CalcEntrancePupil(double aperture, double focalLength) {
	return 1 / ((1 / aperture) - (1 / focalLength));
}

int main() {
	setlocale(LC_ALL, "Russian"); // подключение русского языка в консоли

	ofstream outFile("Out.txt"); // результирующий файл
	double aperture, focalLength, entrancePupil; // определение переменных

	getInitParams(aperture, focalLength); // вызов функции для инициализации входных параметров
	
	entrancePupil = CalcEntrancePupil(aperture, focalLength); // расчет расстояния до входного зрачка

	// вывод результатов в консоль и в результирующий файл
	cout << endl << "Расстояние до входного зрачка для указанных параметров равно: " << entrancePupil << " мм";
	outFile << "Введенное расстояние до апертурной диафрагмы равно: " << aperture << " мм" << endl;
	outFile << "Введенное фокусное расстояние линзы равно: " << focalLength << " мм" << endl;
	outFile << "Расстояние до входного зрачка для указанных параметров равно: " << entrancePupil <<  " мм";

	outFile.close(); // закрываем файл после записи
}