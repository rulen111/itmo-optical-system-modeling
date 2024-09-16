/////////////////////////////////////////////////////////////////////////////
// Прикладное программирование
// Вычисление параксиальных характеристик линзы
// Класс Линза
// lens.h
// 
// Ахмаров Руслан
// Университет ИТМО, B34003
/////////////////////////////////////////////////////////////////////////////
// проверка на повторное подключение файла
#if !defined LENS_H
#define LENS_H 

#include "paraxial.h"
#include "sphericalsurface.h"
using namespace std;
/////////////////////////////////////////////////////////////////////////////
// Описание класса Линза
class Lens {
private:
	double m_d, m_n, m_s, m_a, m_s_;
	SphericalSurface m_surface1, m_surface2;
public:
	Lens();
	~Lens();

	void SetN(double n);
	double GetN();
	void SetThickness(double d);
	double GetThickness();
	void SetS(double s);
	double GetS();
	void SetA(double a);
	double GetA();
	void SetS_(double s_);
	double GetS_();


	SphericalSurface& AccessSurface1();
	const SphericalSurface& GetSurface1() const;
	SphericalSurface& AccessSurface2();
	const SphericalSurface& GetSurface2() const;

	void GetTransferMatrix(Matrix<double>& transfer, double d, double n);

	void CalculateParaxial(Paraxial& paraxial);

	void CalculateImage(Paraxial& paraxial);
};
/////////////////////////////////////////////////////////////////////////////
#endif //defined LENS_H