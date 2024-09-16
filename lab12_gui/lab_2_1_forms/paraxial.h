/////////////////////////////////////////////////////////////////////////////
// Прикладное программирование
// Вычисление параксиальных характеристик линзы
// Класс Параксиальные характеристики
// paraxial.h
// 
// Ахмаров Руслан
// Университет ИТМО, B34003
/////////////////////////////////////////////////////////////////////////////
// проверка на повторное подключение файла
#if !defined PARAXIAL_H
#define PARAXIAL_H 

using namespace std;
/////////////////////////////////////////////////////////////////////////////
// Описание класса Параксиальные характеристики
class Paraxial {
public:
	double m_F, m_F_, m_SF, m_SF_, m_SH, m_SH_;
	
	Paraxial();
	~Paraxial();
};
/////////////////////////////////////////////////////////////////////////////
#endif //defined PARAXIAL_H