/////////////////////////////////////////////////////////////////////////////
// Прикладное программирование
// Обявление, определение и реализация абстрактных типов данных. Перегрузка операторов.
// Создание шаблона класса
// matrixTest.cpp
// 
// Ахмаров Руслан
// Университет ИТМО, B34003
/////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

// подключение описания класса
#include "matrix.h"
/////////////////////////////////////////////////////////////////////////////
// пример использования класса Matrix
int main() {
	setlocale(LC_ALL, "Russian");
	Matrix<double> m_double1(4, 3), m_double2(3, 4);
	Matrix<int> m_int1(3, 4), m_int2(4, 3);

	m_double1.fill_rand(0., 100.);
	m_double2.fill_rand(50., 150.);
	cout << "Матрица со случайными значениями типа double:" << endl << m_double1 << endl;

	m_int1.fill_rand(0, 100);
	m_int2.fill_rand(50, 150);
	cout << "Матрица со случайными значениями типа int:" << endl << m_int1 << endl;

	cout << "Умножаем m_double1 на 5.2 с присваиванием:" << endl;
	m_double1 *= 5.2;
	cout << m_double1 << endl;

	cout << "Умножаем m_int1 на 5 с присваиванием:" << endl;
	m_int1 *= 5;
	cout << m_int1 << endl;

	cout << "Умножаем m_double1 на m_double2:" << endl;
	cout << m_double1 * m_double2 << endl;

	cout << "Умножаем m_int1 на m_int2:" << endl;
	cout << m_int1 * m_int2 << endl;

	/*
	// Тест оператора вывода и конструкторов
	cout << "Конструктор по умолчанию m1(1х1)" << endl << m1 << endl;
	cout << "Полный конструктор m2(4х3)" << endl << m2 << endl;
	cout << "Конструктор копирования m2_c(4х3)" << endl << m2_c << endl;

	// Получение единичной матрицы
	m_u = m_u.getUnitM(3, 3);
	cout << "Единичная матрица m_u(3х3)" << endl << m_u << endl;

	// Задание и получение значения
	cout << "Задаем единственное значение первой матрицы числом 12.5" << endl;
	m1.setValue(0, 0, 12.5);
	cout << "Значение m1(0,0) = " << m1.getValue(0, 0) << endl;

	// Получение количества строк и столбцов
	cout << endl << "Размер матрицы m2: " << m2.getRows() << "x" << m2.getCols() << endl;

	// Сравнение размеров матриц
	if (m2.eqSize(m2_c)) {
		cout << endl << "m2 и m2_c равны по размеру" << endl;
	}
	else {
		cout << endl << "m2 и m2_c не равны по размеру" << endl;
	}

	// Умножение и умножение с присваиванием на число
	cout << endl << "Умножаем m_u на 5 с присваиванием" << endl;
	m_u *= 5.;
	cout << m_u << endl;

	cout << "Умножаем m_u на 6 без присваивания" << endl;
	cout << m_u * 6. << endl;

	// Умножение матриц
	for (int i = 0; i < m_v.getRows(); i++) {
		for (int j = 0; j < m_v.getCols(); j++) {
			m_v.setValue(i, j, i * j);
		}
	}
	cout << "Умножаем m_u:" << endl;
	cout << m_u << endl;
	cout << "на m_v:" << endl;
	cout << m_v << endl;
	cout << "Результат:" << endl << m_u * m_v << endl;

	cout << "Умножаем матрицы с неправильными размерами m2(4x3) и m_p(2x2)" << endl;
	m2 * m_p;
	cout << endl;

	// Проверка полного равенства матриц
	cout << "Проверяем равны ли m2 и m2_c" << endl;
	if (m2 == m2_c) {
		cout << "m2 = m2_c" << endl;
	}

	if (m2 != m2_c) {
		cout << "m2 != m2_c" << endl;
	}

	cout << "Проверяем равны ли m2 и m_p" << endl;
	if (m2 == m_p) {
		cout << "m2 = m2_c" << endl;
	}

	if (m2 != m_p) {
		cout << "m2 != m2_c" << endl;
	}

	// Копирование матриц
	cout << endl << "Создаем матрицу m_n(3х4) и копируем в нее m_v:" << endl;
	Matrix<double> m_n(3, 4);
	m_n = m_v;
	cout << m_n << endl;

	cout << endl << "Пытаемся скопировать m_p(2x2) в m_n(3x4):" << endl;
	m_n = m_p;
	cout << m_n << endl;

	// Индексированный доступ
	cout << "Значение m_n(2, 3) = " << m_n(2, 3) << endl;

	// Ввод матрицы с клавиатуры
	cout << endl << "Заполняем матрицу 2х2 с клавиатуры" << endl;
	Matrix<double> m_kb(2, 2);
	cin >> m_kb;
	cout << endl << "Результат:" << endl << m_kb;
	*/
	
}
/////////////////////////////////////////////////////////////////////////////