/////////////////////////////////////////////////////////////////////////////
// Прикладное программирование
// Обявление, определение и реализация абстрактных типов данных.Перегрузка операторов.
// matrix.cpp
// 
// Ахмаров Руслан
// Университет ИТМО, B34003
/////////////////////////////////////////////////////////////////////////////
// подключение описания класса
#include "matrix.h"

/////////////////////////////////////////////////////////////////////////////
// Конструктор по умолчанию
template <class TYPE>
Matrix<TYPE>::Matrix() {
	m_rows = 1;
	m_cols = 1;
	
	m_arr = new TYPE* [m_rows];
	for (int i = 0; i < m_rows; i++) {
		m_arr[i] = new TYPE[m_cols];
		for (int j = 0; j < m_cols; j++) {
			m_arr[i][j] = 0;
		}
	}
}
/////////////////////////////////////////////////////////////////////////////
// Полный конструктор
template <class TYPE>
Matrix<TYPE>::Matrix(int rows, int cols) {
	m_rows = rows;
	m_cols = cols;

	m_arr = new TYPE* [m_rows];
	for (int i = 0; i < m_rows; i++) {
		m_arr[i] = new TYPE[m_cols];
		for (int j = 0; j < m_cols; j++) {
			m_arr[i][j] = 0;
		}
	}
}
/////////////////////////////////////////////////////////////////////////////
// Конструктор копирования
template <class TYPE>
Matrix<TYPE>::Matrix(const Matrix<TYPE>& one) {
	m_rows = one.getRows();
	m_cols = one.getCols();

	m_arr = new TYPE* [m_rows];
	for (int i = 0; i < m_rows; i++) {
		m_arr[i] = new TYPE[m_cols];
		for (int j = 0; j < m_cols; j++) {
			m_arr[i][j] = one.getValue(i, j);
		}
	}
}
/////////////////////////////////////////////////////////////////////////////
// Деструктор
template <class TYPE>
Matrix<TYPE>::~Matrix() {
	for (int i = m_rows - 1; i >= 0; i--) {
		delete[] m_arr[i];
	}
	delete[] m_arr;
}
/////////////////////////////////////////////////////////////////////////////
// Получение единичной матрицы
template <class TYPE>
Matrix<TYPE> Matrix<TYPE>::getUnitM(int rows, int cols) {
	Matrix<TYPE> resArr(rows, cols);
	
	for (int i = 0; i < resArr.getRows(); i++) {
		for (int j = 0; j < resArr.getCols(); j++) {
			if (j == i) {
				resArr.setValue(i, j, 1);
			}
			else {
				resArr.setValue(i, j, 0);
			}
		}
	}

	return resArr;
}
/////////////////////////////////////////////////////////////////////////////
// Селектор значения элемента матрицы
template <class TYPE>
TYPE Matrix<TYPE>::getValue(int i, int j) const {
	return m_arr[i][j];
}
/////////////////////////////////////////////////////////////////////////////
// Модификатор элемента матрицы
template <class TYPE>
void Matrix<TYPE>::setValue(int i, int j, TYPE val) {
	m_arr[i][j] = val;
}
/////////////////////////////////////////////////////////////////////////////
// Селектор количества строк
template <class TYPE>
int Matrix<TYPE>::getRows() const {
	return m_rows;
}
/////////////////////////////////////////////////////////////////////////////
// Селектор количества столбцов
template <class TYPE>
int Matrix<TYPE>::getCols() const {
	return m_cols;
}
/////////////////////////////////////////////////////////////////////////////
// Проверка равенства размеров матриц
template <class TYPE>
bool Matrix<TYPE>::eqSize(const Matrix<TYPE>& other) {
	return ((this->getRows() == other.getRows()) && (this->getCols() == other.getCols()));
}
/////////////////////////////////////////////////////////////////////////////
// Умножение матрицы на число
template <class TYPE>
Matrix<TYPE> Matrix<TYPE>::operator*(const TYPE& other) const {
	Matrix<TYPE> resArr(*this);

	for (int i = 0; i < this->getRows(); i++) {
		for (int j = 0; j < this->getCols(); j++) {
			resArr.setValue(i, j, resArr.getValue(i, j) * other);
		}
	}

	return resArr;
}
/////////////////////////////////////////////////////////////////////////////
// Умножение матрицы на число с присваиванием
template <class TYPE>
Matrix<TYPE> Matrix<TYPE>::operator*=(const TYPE& other) {
	Matrix<TYPE> temp(*this);

	for (int i = 0; i < this->getRows(); i++) {
		for (int j = 0; j < this->getCols(); j++) {
			this->setValue(i, j, temp.getValue(i, j) * other);
		}
	}

	return (*this);
}
/////////////////////////////////////////////////////////////////////////////
// Умножение матрицы на матрицу
template <class TYPE>
Matrix<TYPE> Matrix<TYPE>::operator*(const Matrix<TYPE>& other) const {
	if (this->getCols() == other.getRows()) {
		Matrix<TYPE> resArr(this->getRows(), other.getCols());

		for (int i = 0; i < resArr.getRows(); i++) {
			for (int j = 0; j < resArr.getCols(); j++) {
				TYPE val = 0;
				for (int k = 0; k < other.getRows(); k++) {
					val = resArr.getValue(i, j) + this->getValue(i, k) * other.getValue(k, j);
					resArr.setValue(i, j, val);
				}
			}
		}

		return resArr;
	}
	else {
		cout << "Размеры матриц не соответствуют условиям умножения матриц!" << endl;
		Matrix<TYPE> zero;
		return zero;
	}
}
/////////////////////////////////////////////////////////////////////////////
// Проверка полного равенства матриц
template <class TYPE>
bool Matrix<TYPE>::operator== (const Matrix<TYPE>& other) const {
	if ((this->getRows() == other.getRows()) && (this->getCols() == other.getCols())) {
		for (int i = 0; i < this->getRows(); i++) {
			for (int j = 0; j < this->getCols(); j++) {
				if (this->getValue(i, j) == other.getValue(i, j)) {
					continue;
				}
				else {
					return false;
				}
			}
		}

		return true;
	}
	else {
		cout << "Размеры матриц не равны!" << endl;
		return false;
	}
}
/////////////////////////////////////////////////////////////////////////////
// Проверка полного неравенства матриц
template <class TYPE>
bool Matrix<TYPE>::operator!= (const Matrix<TYPE>& other) const {
	if ((this->getRows() == other.getRows()) && (this->getCols() == other.getCols())) {
		for (int i = 0; i < this->getRows(); i++) {
			for (int j = 0; j < this->getCols(); j++) {
				if (this->getValue(i, j) != other.getValue(i, j)) {
					return true;
				}
				else {
					continue;
				}
			}
		}

		return false;
	}
	else {
		cout << "Размеры матриц не равны!" << endl;
		return true;
	}
}
/////////////////////////////////////////////////////////////////////////////
// Копирование матриц
template <class TYPE>
Matrix<TYPE> Matrix<TYPE>::operator=(const Matrix<TYPE>& other) {
	if ((this->getRows() == other.getRows()) && (this->getCols() == other.getCols())) {
		for (int i = 0; i < this->getRows(); i++) {
			for (int j = 0; j < this->getCols(); j++) {
				this->setValue(i, j, other.getValue(i, j));
			}
		}

		return (*this);
	}
	else {
		cout << "Размеры матриц не равны!" << endl;
		return (*this);
	}
}
/////////////////////////////////////////////////////////////////////////////
// Индексированный доступ к элементам
template <class TYPE>
TYPE Matrix<TYPE>::operator()(int i, int j) const {
	return this->getValue(i - 1, j - 1);
}
/////////////////////////////////////////////////////////////////////////////
// Вывод матрицы на экран
template <class TYPE>
ostream& operator<< (ostream& out, const Matrix<TYPE>& one) {
	for (int i = 0; i < one.getRows(); i++) {
		for (int j = 0; j < one.getCols(); j++) {
			out << one.getValue(i, j) << " ";
		}
		out << endl;
	}

	return out;
}
/////////////////////////////////////////////////////////////////////////////
// Ввод матрицы с клавиатуры
template <class TYPE>
istream& operator>> (istream& in, Matrix<TYPE>& one) {
	TYPE val = 0;

	for (int i = 0; i < one.getRows(); i++) {
		for (int j = 0; j < one.getCols(); j++) {
			in >> val;
			one.setValue(i, j, val);
		}
	}

	return in;
}
/////////////////////////////////////////////////////////////////////////////