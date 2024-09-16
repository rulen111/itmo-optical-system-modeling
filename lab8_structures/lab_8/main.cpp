// ������������ ������ �8, ������� �12, ������ B34003, ������� ������� ������ ���������
#include <fstream> // ����������� ����� ������/������ � ����
#include <iostream> // ����������� ����� �����/������ � �������

using namespace std; // ������������ ����������� ������������ ����

// �������� ��������� �������� ���������� ������
struct Glass {
	string name;
	double refrIndexE;
	double refrIndexD;
	double abbeE;
	double abbeD;
};

// ������� ������ ������ �� ���������� ����������� � ������ ���������� � ��� � �������
void findGlass(struct Glass *glassBank, double refrIndex, int size = 190, char type = 'e', double eps = 0.002) {
	bool found = false; // ���� ���������� ���� �� ����� ����� ������
	cout << "��������� ����� ������:" << endl;
	cout << "�����\tne\tnd\tVe\tVd" << endl;

	for (int i = 0; i < size; i++) {
		if (type == 'e') {
			if (fabs(glassBank[i].refrIndexE - refrIndex) <= eps) { // ��������� ��� �������� �� �������� �������� � �������� ��������
				cout << glassBank[i].name << "\t" << glassBank[i].refrIndexE << "\t" << glassBank[i].refrIndexD << "\t" << glassBank[i].abbeE << "\t" << glassBank[i].abbeD << endl;
				found = true;
			}
		}
		else {
			if (fabs(glassBank[i].refrIndexD - refrIndex) <= eps) { // ��������� ��� �������� �� �������� �������� � �������� ��������
				cout << glassBank[i].name << "\t" << glassBank[i].refrIndexE << "\t" << glassBank[i].refrIndexD << "\t" << glassBank[i].abbeE << "\t" << glassBank[i].abbeD << endl;
				found = true;
			}
		}
	}

	if (found){
		return;
	}
	else {
		cout << "���������� ������ �� �������!" << endl;
		return;
	}
}

int main() {
	setlocale(LC_ALL, "Russian"); // ����������� �������� ����� � �������

	// ����������� ����������
	ifstream inFile("glassbank.txt");
	const int size = 190;
	double refrIndex, eps;
	char type, cont = 'y'; // ����� ��� ���� ���������� ����������� � ������� ��������� �����

	Glass glassBank[size]; // ���������� ������� ���������

	// ���������� ��������� ������� �� �����
	for (int i = 0; i < size; i++) {
		inFile >> glassBank[i].name >> glassBank[i].refrIndexE >> glassBank[i].refrIndexD >> glassBank[i].abbeE >> glassBank[i].abbeD;
	}
	inFile.close(); // ��������� ���� ����� ������

	// ���������� ������� ������ �� ������� ���������
	while (cont == 'y') {
		// ���� ����������� ���������� ����������
		cout << "������� ����������� ����� �����, �� ���������� ����������� ������� ����� �������� ����� (e ��� d): ";
		cin >> type;
		cout << endl << "������� ������� �������� ���������� �����������: ";
		cin >> refrIndex;
		cout << endl << "������� ������ ��������� ������ (��������): ";
		cin >> eps;
		cout << endl;

		findGlass(glassBank, refrIndex, size, type, eps); // ����� ������� ������ ����� ������

		cout << "��������� ����� ��� ���? (y/n): "; // ������ ���������� ������ �� �������
		cin >> cont;
		cout << endl;
	}
}