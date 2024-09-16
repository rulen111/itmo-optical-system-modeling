// ������������ ������ �1, ������� �7, ������ B34003, ������� ������� ������ ���������

#include <iostream> // ����������� ����� ����������� �����/������
#include <cmath> // ������������ ����, ���������� �������� �������������� �������

using namespace std; // ������������ ����������� ������������ ����

int main()
{
    // ���������� � ������������� ����������
    double z1 = 0.0, z2 = 0.0, y1 = 0.0, y2 = 0.0;
    double z1_n = 0.0, z1_d = 0.0, y1_n = 0.0, y1_d = 0.0;
    double m = 0.0, n = 0.0, a = 0.0;

    // ���� ���������� ����������
    cout << "Enter parameters m, n and a(alpha) divided by space: ";
    cin >> m >> n >> a;
    cout << "\n";

    // ���������� �������� ���������
    z1_n = pow((pow(m, 2) - 1 / (pow(n, 2))), m) * pow((n + 1 / m), n - m); // ��������� Z1
    z1_d = pow((pow(n, 2) - 1 / pow(m, 2)), n) * pow((m - 1 / n), m - n); // ����������� Z1
    z1 = z1_n / z1_d;

    z2 = pow(m / n, m + n);

    y2 = pow(1 / tan(a), 2);

    y1_n = pow(cos(a), 2) - y2 + 1; // ��������� Y1
    y1_d = pow(sin(a), 2) + pow(tan(a), 2) - 1; // ����������� Y1
    y1 = y1_n / y1_d;

    // ����� ����������� ����������
    cout << "Calculation results:\nZ1 = " << z1 << "\nZ2 = " << z2 << "\nY1 = " << y1 << "\nY2 = " << y2;

    cin.get(); // �������� ������

    return 0;
}
