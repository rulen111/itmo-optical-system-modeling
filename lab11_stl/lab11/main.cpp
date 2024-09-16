/////////////////////////////////////////////////////////////////////////////
// ������������� ���������� ������
// ������������ ������ �11, ������� �7
// ������������� ����������� � ���������� ���������� STL
// - m1=0, m2=100
// - ���������� ���������� ��������� �� ���������� ������ 10
// - ����� ������ ���������� �� ���� ���������
// - ��������� ����� ���� ���������
// main.cpp
// 
// ������� ������
// ����������� ����, B34003
/////////////////////////////////////////////////////////////////////////////
// ���������� ������
#include <iostream> // ����������� ����� �����/������ � �������
#include <vector> // �������� �������
#include <algorithm> // 
#include <ctime> // 

using namespace std; // ������������ ����������� ������������ ����
/////////////////////////////////////////////////////////////////////////////
// �������� �������
void fill_rand(vector<double>& data, int size, double min, double max);
int count_more(vector<double>& data, double num);
double sum_all(vector<double>& data);
double sqrt_all(vector<double>& data);
void print_all(vector<double>& data, int nLine);
/////////////////////////////////////////////////////////////////////////////
// ���������� �������
// ���������� ������� ���������� �������
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

// ������� ���������� ��������� ������ ������-�� �����
int count_more(vector<double>& data, double num = 10.) {
    int count = 0;
    for (auto elem : data) {
        if (elem > num) {
            count++;
        }
    }

    return count;
}

// ������� ����� ���� ���������
double sum_all(vector<double>& data) {
    double sum = 0.;
    for (auto elem : data) {
        sum += elem;
    }

    return sum;
}

// ���������� ����������� ����� �� ����� ���������
double sqrt_all(vector<double>& data) {
    double sum;
    sum = sum_all(data);
    return sqrt(sum);
}

// ����� ��������� �� �����
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
// ������� �������
int main() {
    // ���������� ������� ����
    setlocale(LC_ALL, "Russian");
    
    // ���������� ����������
    double m1 = 0., m2 = 100.;
    vector<double> data;
    data.resize(20);

    // ��������� ������ ���������� ������� � ������� � �������
    //fill_rand(data, 40, m1, m2);
    for_each(data.begin(), data.end(), get_rand);
    cout << "����������� ���������� ������� ������ �� " << data.size() << " ���������:" << endl;
    print_all(data);

    // ������� ������ �� ������ �������
    cout << endl << "���������� ��������� �� ���������� ������ 10: " << count_more(data) << endl;
    cout << endl << "����� ���� ���������: " << sum_all(data) << endl;
    cout << endl << "������ ���������� �� ����� ���� ���������: " << sqrt_all(data) << endl;
}
/////////////////////////////////////////////////////////////////////////////