/////////////////////////////////////////////////////////////////////////////
// Прикладное программирование
// Вычисление параксиальных характеристик линзы
// Класс Сферическая Поверхность
// sphericalsufrace.h
// 
// Ахмаров Руслан
// Университет ИТМО, B34003
/////////////////////////////////////////////////////////////////////////////
// проверка на повторное подключение файла
#if !defined SPHERICALSURFACE_H
#define SPHERICALSURFACE_H 

#include "surface.h"
using namespace std;
/////////////////////////////////////////////////////////////////////////////
// Описание класса Поверхность
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