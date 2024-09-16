/////////////////////////////////////////////////////////////////////////////
// Моделирование оптических систем
// Лабораторная работа №11, вариант №7
// Использование контейнеров и алгоритмов библиотеки STL
// - m1=0, m2=100
// - подсчитать количество элементов со значениями больше 10
// - найти корень квадратный из всех элементов
// - вычислить сумму всех элементов
// main.cpp
// 
// Ахмаров Руслан
// Университет ИТМО, B34003
/////////////////////////////////////////////////////////////////////////////
// подключаем модули
#include <iostream> // стандартный поток ввода/вывода в консоль
#include <vector> // описания вектора
#include <algorithm> // 
#include <ctime> // 

using namespace std; // используемое стандартное пространство имен
/////////////////////////////////////////////////////////////////////////////
// описание функций
void fill_rand(vector<double>& data, int size, double min, double max);
int count_more(vector<double>& data, double num);
double sum_all(vector<double>& data);
double sqrt_all(vector<double>& data);
void print_all(vector<double>& data, int nLine);
/////////////////////////////////////////////////////////////////////////////
// реализация функций
// заполнение массива случайными числами
void fill_rand(vector<double>& data, int size, double min, double max)
{
    data.resize(size);

    srand((unsigned)clock());
    for (int i = 0; i < data.size(); ++i)
    {
        data[i] = (rand() * (max - min)) / RAND_MAX + min;
    }
}

void get_rand(double& val) {
    srand((unsigned)clock());
    val = (rand() * (100. - 0.)) / RAND_MAX + 0.;
}

// подсчет количества элементов больше какого-то числа
int count_more(vector<double>& data, double num = 10.) {
    int count = 0;
    for (auto elem : data) {
        if (elem > num) {
            count++;
        }
    }

    return count;
}

// подсчет суммы всех элементов
double sum_all(vector<double>& data) {
    double sum = 0.;
    for (auto elem : data) {
        sum += elem;
    }

    return sum;
}

// вычисление квадратного корня из суммы элементов
double sqrt_all(vector<double>& data) {
    double sum;
    sum = sum_all(data);
    return sqrt(sum);
}

// вывод элементов на экран
void print_all(vector<double>& data, int nLine = 10) {
    int count = 1;

    cout << "[" << data[0];
    for (int i = 1; i < data.size(); ++i) {
        if (count >= nLine) {
            cout << "," << endl << data[i];
            count = 1;
        }
        else {
            cout << ", " << data[i];
            count++;
        }      
    }
    cout << "]" << endl;
}
/////////////////////////////////////////////////////////////////////////////
// главная функция
int main() {
    // подключаем русский язык
    setlocale(LC_ALL, "Russian");
    
    // определяем переменные
    double m1 = 0., m2 = 100.;
    vector<double> data;
    data.resize(20);

    // заполняем массив случайными числами и выводим в консоль
    //fill_rand(data, 40, m1, m2);
    for_each(data.begin(), data.end(), get_rand);
    cout << "Заполненный случайными числами массив из " << data.size() << " элементов:" << endl;
    print_all(data);

    // выводим ответы на пункты задания
    cout << endl << "Количество элементов со значениями больше 10: " << count_more(data) << endl;
    cout << endl << "Сумма всех элементов: " << sum_all(data) << endl;
    cout << endl << "Корень квадратный из суммы всех элементов: " << sqrt_all(data) << endl;
}
/////////////////////////////////////////////////////////////////////////////