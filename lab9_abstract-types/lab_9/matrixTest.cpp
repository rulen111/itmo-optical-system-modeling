/////////////////////////////////////////////////////////////////////////////
// ���������� ����������������
// ���������, ����������� � ���������� ����������� ����� ������. ���������� ����������.
// �������� ������� ������
// matrixTest.cpp
// 
// ������� ������
// ����������� ����, B34003
/////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

// ����������� �������� ������
#include "matrix.h"
/////////////////////////////////////////////////////////////////////////////
// ������ ������������� ������ Matrix
int main() {
	setlocale(LC_ALL, "Russian");
	Matrix<double> m_double1(4, 3), m_double2(3, 4);
	Matrix<int> m_int1(3, 4), m_int2(4, 3);

	m_double1.fill_rand(0., 100.);
	m_double2.fill_rand(50., 150.);
	cout << "������� �� ���������� ���������� ���� double:" << endl << m_double1 << endl;

	m_int1.fill_rand(0, 100);
	m_int2.fill_rand(50, 150);
	cout << "������� �� ���������� ���������� ���� int:" << endl << m_int1 << endl;

	cout << "�������� m_double1 �� 5.2 � �������������:" << endl;
	m_double1 *= 5.2;
	cout << m_double1 << endl;

	cout << "�������� m_int1 �� 5 � �������������:" << endl;
	m_int1 *= 5;
	cout << m_int1 << endl;

	cout << "�������� m_double1 �� m_double2:" << endl;
	cout << m_double1 * m_double2 << endl;

	cout << "�������� m_int1 �� m_int2:" << endl;
	cout << m_int1 * m_int2 << endl;

	/*
	// ���� ��������� ������ � �������������
	cout << "����������� �� ��������� m1(1�1)" << endl << m1 << endl;
	cout << "������ ����������� m2(4�3)" << endl << m2 << endl;
	cout << "����������� ����������� m2_c(4�3)" << endl << m2_c << endl;

	// ��������� ��������� �������
	m_u = m_u.getUnitM(3, 3);
	cout << "��������� ������� m_u(3�3)" << endl << m_u << endl;

	// ������� � ��������� ��������
	cout << "������ ������������ �������� ������ ������� ������ 12.5" << endl;
	m1.setValue(0, 0, 12.5);
	cout << "�������� m1(0,0) = " << m1.getValue(0, 0) << endl;

	// ��������� ���������� ����� � ��������
	cout << endl << "������ ������� m2: " << m2.getRows() << "x" << m2.getCols() << endl;

	// ��������� �������� ������
	if (m2.eqSize(m2_c)) {
		cout << endl << "m2 � m2_c ����� �� �������" << endl;
	}
	else {
		cout << endl << "m2 � m2_c �� ����� �� �������" << endl;
	}

	// ��������� � ��������� � ������������� �� �����
	cout << endl << "�������� m_u �� 5 � �������������" << endl;
	m_u *= 5.;
	cout << m_u << endl;

	cout << "�������� m_u �� 6 ��� ������������" << endl;
	cout << m_u * 6. << endl;

	// ��������� ������
	for (int i = 0; i < m_v.getRows(); i++) {
		for (int j = 0; j < m_v.getCols(); j++) {
			m_v.setValue(i, j, i * j);
		}
	}
	cout << "�������� m_u:" << endl;
	cout << m_u << endl;
	cout << "�� m_v:" << endl;
	cout << m_v << endl;
	cout << "���������:" << endl << m_u * m_v << endl;

	cout << "�������� ������� � ������������� ��������� m2(4x3) � m_p(2x2)" << endl;
	m2 * m_p;
	cout << endl;

	// �������� ������� ��������� ������
	cout << "��������� ����� �� m2 � m2_c" << endl;
	if (m2 == m2_c) {
		cout << "m2 = m2_c" << endl;
	}

	if (m2 != m2_c) {
		cout << "m2 != m2_c" << endl;
	}

	cout << "��������� ����� �� m2 � m_p" << endl;
	if (m2 == m_p) {
		cout << "m2 = m2_c" << endl;
	}

	if (m2 != m_p) {
		cout << "m2 != m2_c" << endl;
	}

	// ����������� ������
	cout << endl << "������� ������� m_n(3�4) � �������� � ��� m_v:" << endl;
	Matrix<double> m_n(3, 4);
	m_n = m_v;
	cout << m_n << endl;

	cout << endl << "�������� ����������� m_p(2x2) � m_n(3x4):" << endl;
	m_n = m_p;
	cout << m_n << endl;

	// ��������������� ������
	cout << "�������� m_n(2, 3) = " << m_n(2, 3) << endl;

	// ���� ������� � ����������
	cout << endl << "��������� ������� 2�2 � ����������" << endl;
	Matrix<double> m_kb(2, 2);
	cin >> m_kb;
	cout << endl << "���������:" << endl << m_kb;
	*/
	
}
/////////////////////////////////////////////////////////////////////////////