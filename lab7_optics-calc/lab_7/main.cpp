// ������������ ������ �7, ������� �13, ������ B34003, ������� ������� ������ ���������
#include <fstream> // ����������� ����� ������/������ � ����
#include <iostream> // ����������� ����� �����/������ � �������

using namespace std; // ������������ ����������� ������������ ����

// ������� ��� ����� � �������� ������� ����������
void getInitParams(double& aperture, double& focalLength) {
	cout << "������� ���������� �� ���������� ��������� � ��: ";
	cin >> aperture;
	cout << endl << "������� �������� ���������� ����� � ��: ";
	cin >> focalLength;

	// ������ ������ ��������� �� ��� ���, ���� ��� �� ����� ��������������� ��������
	while ((aperture == 0.0) || (focalLength == 0.0)) {
		cout << "������� ��������� �� ����� ���� ����� ����!" << endl;
		cout << endl << "������� ���������� �� ���������� ��������� � ��: ";
		cin >> aperture;
		cout << endl << "������� �������� ���������� ����� � ��: ";
		cin >> focalLength;
	}
}

// ������� ��� ������� ���������� �� �������� ������
double CalcEntrancePupil(double aperture, double focalLength) {
	return 1 / ((1 / aperture) - (1 / focalLength));
}

int main() {
	setlocale(LC_ALL, "Russian"); // ����������� �������� ����� � �������

	ofstream outFile("Out.txt"); // �������������� ����
	double aperture, focalLength, entrancePupil; // ����������� ����������

	getInitParams(aperture, focalLength); // ����� ������� ��� ������������� ������� ����������
	
	entrancePupil = CalcEntrancePupil(aperture, focalLength); // ������ ���������� �� �������� ������

	// ����� ����������� � ������� � � �������������� ����
	cout << endl << "���������� �� �������� ������ ��� ��������� ���������� �����: " << entrancePupil << " ��";
	outFile << "��������� ���������� �� ���������� ��������� �����: " << aperture << " ��" << endl;
	outFile << "��������� �������� ���������� ����� �����: " << focalLength << " ��" << endl;
	outFile << "���������� �� �������� ������ ��� ��������� ���������� �����: " << entrancePupil <<  " ��";

	outFile.close(); // ��������� ���� ����� ������
}