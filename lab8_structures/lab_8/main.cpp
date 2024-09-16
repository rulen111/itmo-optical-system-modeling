// Лабораторная работа №8, вариант №12, группа B34003, студент Ахмаров Руслан Идрисович
#include <fstream> // стандартный поток чтения/записи в файл
#include <iostream> // стандартный поток ввода/вывода в консоль

using namespace std; // используемое стандартное пространство имен

// описание структуры каталога оптических стекол
struct Glass {
	string name;
	double refrIndexE;
	double refrIndexD;
	double abbeE;
	double abbeD;
};

// функция поиска стекла по показателю преломления и выводу информации о нем в консоль
void findGlass(struct Glass *glassBank, double refrIndex, int size = 190, char type = 'e', double eps = 0.002) {
	bool found = false; // флаг нахождения хотя бы одной марки стекла
	cout << "Найденные марки стекол:" << endl;
	cout << "Марка\tne\tnd\tVe\tVd" << endl;

	for (int i = 0; i < size; i++) {
		if (type == 'e') {
			if (fabs(glassBank[i].refrIndexE - refrIndex) <= eps) { // проверяем что значение из каталога попадает в заданный интервал
				cout << glassBank[i].name << "\t" << glassBank[i].refrIndexE << "\t" << glassBank[i].refrIndexD << "\t" << glassBank[i].abbeE << "\t" << glassBank[i].abbeD << endl;
				found = true;
			}
		}
		else {
			if (fabs(glassBank[i].refrIndexD - refrIndex) <= eps) { // проверяем что значение из каталога попадает в заданный интервал
				cout << glassBank[i].name << "\t" << glassBank[i].refrIndexE << "\t" << glassBank[i].refrIndexD << "\t" << glassBank[i].abbeE << "\t" << glassBank[i].abbeD << endl;
				found = true;
			}
		}
	}

	if (found){
		return;
	}
	else {
		cout << "Подходящих стекол не найдено!" << endl;
		return;
	}
}

int main() {
	setlocale(LC_ALL, "Russian"); // подключение русского языка в консоли

	// определение переменных
	ifstream inFile("glassbank.txt");
	const int size = 190;
	double refrIndex, eps;
	char type, cont = 'y'; // флаги для типа показателя преломления и желания повторить поиск

	Glass glassBank[size]; // объявление массива структуры

	// заполнение структуры данными из файла
	for (int i = 0; i < size; i++) {
		inFile >> glassBank[i].name >> glassBank[i].refrIndexE >> glassBank[i].refrIndexD >> glassBank[i].abbeE >> glassBank[i].abbeD;
	}
	inFile.close(); // закрываем файл после чтения

	// реализация повтора поиска по желанию оператора
	while (cont == 'y') {
		// ввод необходимых переменных оператором
		cout << "Укажите обозначение длины волны, по показателю преломления которой будет выполнен поиск (e или d): ";
		cin >> type;
		cout << endl << "Введите искомое значение показателя преломления: ";
		cin >> refrIndex;
		cout << endl << "Введите ширину интервала поиска (точность): ";
		cin >> eps;
		cout << endl;

		findGlass(glassBank, refrIndex, size, type, eps); // вызов функции поиска марок стекла

		cout << "Выполнить поиск еще раз? (y/n): "; // запуск повторного поиска по желанию
		cin >> cont;
		cout << endl;
	}
}