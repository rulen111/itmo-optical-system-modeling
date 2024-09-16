/////////////////////////////////////////////////////////////////////////////
// ���������� ����������������
// ���������� ������������� ������������� �����
// ����� ����������� �����������
// sphericalsufrace.h
// 
// ������� ������
// ����������� ����, B34003
/////////////////////////////////////////////////////////////////////////////
// �������� �� ��������� ����������� �����
#if !defined SPHERICALSURFACE_H
#define SPHERICALSURFACE_H 

#include "surface.h"
using namespace std;
/////////////////////////////////////////////////////////////////////////////
// �������� ������ �����������
class SphericalSurface : public Surface {
private:
	double m_r;
public:
	SphericalSurface();
	~SphericalSurface();

	void SetR(double r);
	double GetR();

	void GetTransformMatrix(Matrix<double>& transform, double n, double n_);
};
/////////////////////////////////////////////////////////////////////////////
#endif //defined SPHERICALSURFACE_H