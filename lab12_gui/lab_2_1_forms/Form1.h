#pragma once
#include "lens.h"
#include <string>
#include <cmath>
#include "Form2.h"
#define PI 3.14159265358979

namespace CppCLRWinFormsProject {

	// Подключение необходимых пространств имен
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Imaging;

	// Описание класса Форма
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	// Определение элементов формы
	private: 
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;

		System::Windows::Forms::TextBox^ textBoxR1;
		System::Windows::Forms::TextBox^ textBoxR2;
		System::Windows::Forms::TextBox^ textBoxD;
		System::Windows::Forms::TextBox^ textBoxH1;
		System::Windows::Forms::TextBox^ textBoxH2;
		System::Windows::Forms::TextBox^ textBoxN;
		System::Windows::Forms::TextBox^ textBoxNA;

		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::GroupBox^ groupBox2;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::ComponentModel::IContainer^ components;

		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::Label^ label13;
		System::Windows::Forms::Label^ label14;
		System::Windows::Forms::Label^ label15;
		System::Windows::Forms::Label^ label16;
		System::Windows::Forms::Label^ label17;
		System::Windows::Forms::Label^ label18;
		System::Windows::Forms::Label^ label19;
		System::Windows::Forms::Label^ label20;

	
	public: 
		// Для связи переменных между методами класса
		// эти элементы имеют тип public
		System::Windows::Forms::TextBox^ textBoxSH_;
		System::Windows::Forms::TextBox^ textBoxSH;
		System::Windows::Forms::TextBox^ textBoxSF_;
		System::Windows::Forms::TextBox^ textBoxSF;
		System::Windows::Forms::TextBox^ textBoxF_;
		System::Windows::Forms::TextBox^ textBoxF;
		System::Windows::Forms::TextBox^ textBoxS;
		System::Windows::Forms::TextBox^ textBoxS_;

#pragma region Windows Form Designer generated code
		// Инициализация элементов формы
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxR1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxR2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxD = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxH1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxH2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNA = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBoxS = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBoxS_ = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxSH_ = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBoxSH = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSF_ = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBoxF_ = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxF = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSF = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(509, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBoxR1
			// 
			this->textBoxR1->Location = System::Drawing::Point(9, 77);
			this->textBoxR1->Name = L"textBoxR1";
			this->textBoxR1->Size = System::Drawing::Size(100, 20);
			this->textBoxR1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"R1, мм";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"R2, мм";
			// 
			// textBoxR2
			// 
			this->textBoxR2->Location = System::Drawing::Point(9, 134);
			this->textBoxR2->Name = L"textBoxR2";
			this->textBoxR2->Size = System::Drawing::Size(100, 20);
			this->textBoxR2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(176, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"d, мм";
			// 
			// textBoxD
			// 
			this->textBoxD->Location = System::Drawing::Point(179, 77);
			this->textBoxD->Name = L"textBoxD";
			this->textBoxD->Size = System::Drawing::Size(100, 20);
			this->textBoxD->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(339, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"D, мм";
			// 
			// textBoxH1
			// 
			this->textBoxH1->Location = System::Drawing::Point(342, 77);
			this->textBoxH1->Name = L"textBoxH1";
			this->textBoxH1->Size = System::Drawing::Size(100, 20);
			this->textBoxH1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->Location = System::Drawing::Point(339, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"H2, мм";
			this->label5->Visible = false;
			// 
			// textBoxH2
			// 
			this->textBoxH2->Enabled = false;
			this->textBoxH2->Location = System::Drawing::Point(342, 134);
			this->textBoxH2->Name = L"textBoxH2";
			this->textBoxH2->Size = System::Drawing::Size(100, 20);
			this->textBoxH2->TabIndex = 9;
			this->textBoxH2->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(506, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"n";
			// 
			// textBoxN
			// 
			this->textBoxN->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxN->Location = System::Drawing::Point(509, 77);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(100, 20);
			this->textBoxN->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->Controls->Add(this->textBoxNA);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->textBoxS);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxR1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxR2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBoxN);
			this->groupBox1->Controls->Add(this->textBoxD);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBoxH2);
			this->groupBox1->Controls->Add(this->textBoxH1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(649, 234);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Конструктивные параметры";
			// 
			// textBoxNA
			// 
			this->textBoxNA->Enabled = false;
			this->textBoxNA->Location = System::Drawing::Point(179, 195);
			this->textBoxNA->Name = L"textBoxNA";
			this->textBoxNA->Size = System::Drawing::Size(100, 20);
			this->textBoxNA->TabIndex = 24;
			this->textBoxNA->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Enabled = false;
			this->label19->Location = System::Drawing::Point(176, 179);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(22, 13);
			this->label19->TabIndex = 23;
			this->label19->Text = L"NA";
			this->label19->Visible = false;
			// 
			// textBoxS
			// 
			this->textBoxS->Enabled = false;
			this->textBoxS->Location = System::Drawing::Point(9, 195);
			this->textBoxS->Name = L"textBoxS";
			this->textBoxS->Size = System::Drawing::Size(100, 20);
			this->textBoxS->TabIndex = 22;
			this->textBoxS->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Enabled = false;
			this->label18->Location = System::Drawing::Point(6, 179);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 13);
			this->label18->TabIndex = 21;
			this->label18->Text = L"S, мм";
			this->label18->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(403, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Ход лучей";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(506, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"преломления";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(506, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Показатель";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(339, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Световой диаметр";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(176, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Осевое расстояние";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Радиус кривизны";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->textBoxS_);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBoxSH_);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBoxSH);
			this->groupBox2->Controls->Add(this->textBoxSF_);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBoxF_);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBoxF);
			this->groupBox2->Controls->Add(this->textBoxSF);
			this->groupBox2->Location = System::Drawing::Point(0, 240);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(649, 409);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параксиальные характеристики и ход лучей";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Enabled = false;
			this->label20->Location = System::Drawing::Point(6, 363);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 13);
			this->label20->TabIndex = 26;
			this->label20->Text = L"S\', мм";
			this->label20->Visible = false;
			// 
			// textBoxS_
			// 
			this->textBoxS_->Enabled = false;
			this->textBoxS_->Location = System::Drawing::Point(9, 379);
			this->textBoxS_->Name = L"textBoxS_";
			this->textBoxS_->ReadOnly = true;
			this->textBoxS_->Size = System::Drawing::Size(100, 20);
			this->textBoxS_->TabIndex = 25;
			this->textBoxS_->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(135, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 380);
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 307);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"SH\', мм";
			// 
			// textBoxSH_
			// 
			this->textBoxSH_->Location = System::Drawing::Point(11, 323);
			this->textBoxSH_->Name = L"textBoxSH_";
			this->textBoxSH_->ReadOnly = true;
			this->textBoxSH_->Size = System::Drawing::Size(100, 20);
			this->textBoxSH_->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 253);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"SH, мм";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 197);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"SF\', мм";
			// 
			// textBoxSH
			// 
			this->textBoxSH->Location = System::Drawing::Point(9, 269);
			this->textBoxSH->Name = L"textBoxSH";
			this->textBoxSH->ReadOnly = true;
			this->textBoxSH->Size = System::Drawing::Size(100, 20);
			this->textBoxSH->TabIndex = 20;
			// 
			// textBoxSF_
			// 
			this->textBoxSF_->Location = System::Drawing::Point(9, 213);
			this->textBoxSF_->Name = L"textBoxSF_";
			this->textBoxSF_->ReadOnly = true;
			this->textBoxSF_->Size = System::Drawing::Size(100, 20);
			this->textBoxSF_->TabIndex = 18;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 13);
			this->label16->TabIndex = 15;
			this->label16->Text = L"F\', мм";
			// 
			// textBoxF_
			// 
			this->textBoxF_->Location = System::Drawing::Point(9, 106);
			this->textBoxF_->Name = L"textBoxF_";
			this->textBoxF_->ReadOnly = true;
			this->textBoxF_->Size = System::Drawing::Size(100, 20);
			this->textBoxF_->TabIndex = 14;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 13);
			this->label17->TabIndex = 13;
			this->label17->Text = L"F, мм";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 144);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 17;
			this->label15->Text = L"SF, мм";
			// 
			// textBoxF
			// 
			this->textBoxF->Location = System::Drawing::Point(9, 51);
			this->textBoxF->Name = L"textBoxF";
			this->textBoxF->ReadOnly = true;
			this->textBoxF->Size = System::Drawing::Size(100, 20);
			this->textBoxF->TabIndex = 12;
			// 
			// textBoxSF
			// 
			this->textBoxSF->Location = System::Drawing::Point(9, 160);
			this->textBoxSF->Name = L"textBoxSF";
			this->textBoxSF->ReadOnly = true;
			this->textBoxSF->Size = System::Drawing::Size(100, 20);
			this->textBoxSF->TabIndex = 16;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 652);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Расчет линзы";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	// Реализация методов формы
	// Системный метод
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	// Нажатие на кнопку "Расчет"
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Создаем экземпляр линзы и задаем ее характеристики из соответствующих полей формы
		Lens lens1;

		lens1.SetThickness(System::Convert::ToDouble(this->textBoxD->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US")));
		lens1.SetN(System::Convert::ToDouble(this->textBoxN->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US")));

		lens1.AccessSurface1().SetR(System::Convert::ToDouble(this->textBoxR1->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US")));
		lens1.AccessSurface1().SetH(System::Convert::ToDouble(this->textBoxH1->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US")));

		lens1.AccessSurface2().SetR(System::Convert::ToDouble(this->textBoxR2->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US")));
		lens1.AccessSurface2().SetH(System::Convert::ToDouble(this->textBoxH1->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US")));

		// Считаем параксиальные характеристики
		Paraxial paraxial;
		lens1.CalculateParaxial(paraxial);

		// Выводим параксиальные характеристики в соответствующие поля формы
		this->textBoxF->Text = paraxial.m_F.ToString("#.###");
		this->textBoxF_->Text = paraxial.m_F_.ToString("#.###");
		this->textBoxSF->Text = paraxial.m_SF.ToString("#.###");
		this->textBoxSF_->Text = paraxial.m_SF_.ToString("#.###");
		this->textBoxSH->Text = paraxial.m_SH.ToString("#.###");
		this->textBoxSH_->Text = paraxial.m_SH_.ToString("#.###");
	}

	// Нажатие на кнопку "Ход лучей"
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Считываем характеристики линзы
		double r1, r2, d, D1, D2, S, NA, SH, SH_, S_, SF_, SF;
		r1 = System::Convert::ToDouble(this->textBoxR1->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US"));
		r2 = System::Convert::ToDouble(this->textBoxR2->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US"));
		d = System::Convert::ToDouble(this->textBoxD->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US"));
		D1 = System::Convert::ToDouble(this->textBoxH1->Text, System::Globalization::CultureInfo::GetCultureInfo("en-US"));
		D2 = D1;
		SH = System::Convert::ToDouble(this->textBoxSH->Text, System::Globalization::CultureInfo::GetCultureInfo("ru-RU"));
		SH_ = System::Convert::ToDouble(this->textBoxSH_->Text, System::Globalization::CultureInfo::GetCultureInfo("ru-RU"));
		SF_ = System::Convert::ToDouble(this->textBoxSF_->Text, System::Globalization::CultureInfo::GetCultureInfo("ru-RU"));
		SF = System::Convert::ToDouble(this->textBoxSF->Text, System::Globalization::CultureInfo::GetCultureInfo("ru-RU"));

		// Считаем углы дуг поверхностей линзы
		double startAngle1, startAngle2;
		startAngle1 = 180 * asin(D1 / abs(r1)) / PI;
		startAngle2 = 180 * asin(D2 / abs(r2)) / PI;

		// Считаем стрелки прогиба поверхностей линзы
		double rd1, rd2;
		rd1 = abs(r1) * cos(startAngle1 * PI / 180);
		rd2 = abs(r2) * cos(startAngle2 * PI / 180);

		// Создаем графический объект для отрисовки линзы
		Bitmap^ bmp = gcnew Bitmap(500, 380, PixelFormat::Format32bppArgb);
		Graphics^ grfx = Graphics::FromImage(bmp);
		grfx->Clear(Color::White);

		// Задаем масштабный коэффициент
		double scale = 380 * 0.7 / (2 * D1);

		// Определяем перья и кисти для графика
		Pen^ blackPen = gcnew Pen(Color::Black, 2.5f);
		Pen^ blackPenSm = gcnew Pen(Color::Black, 1.0f);
		Pen^ bluePen = gcnew Pen(Color::Blue, 2.0f);
		Pen^ dashDotPen = gcnew Pen(Color::Black, 1.0f);
		dashDotPen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDotDot;
		SolidBrush^ blueBrush = gcnew SolidBrush(Color::FromArgb(225, 204, 204, 255));
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Verdana", 8);

		// Начинаем формировать контур линзы
		GraphicsPath^ lensContour = gcnew GraphicsPath();

		System::Drawing::Region^ lensRegion = gcnew System::Drawing::Region(lensContour);

		// Рисуем оптическую ось
		grfx->DrawLine(dashDotPen, 10, 190, 490, 190);

		
		// Рисуем первую поверхность
		Rectangle rectR1 = Rectangle(250 - scale * (d / 2 + (r1 > 0 ? 0 : 2) * abs(r1)), 190 - scale * abs(r1), scale * abs(r1) * 2, scale * abs(r1) * 2);
		lensContour->AddArc(rectR1, (r1 > 0 ? 0.5 : 1) * 360 - startAngle1, 2 * startAngle1);

		if (r1 > 0) {
			// Рисуем верхний торец
			if (D1 == D2) {
				Point p1((250 - scale * (d / 2) + scale * (abs(r1) - rd1)), 190 - scale * D1);
				Point p2(250 + scale * (d / 2) - (r2 > 0 ? -1 : 1) * scale * (abs(r2) - rd2), 190 - scale * D2);
				lensContour->AddLine(p1, p2);
			}
			else if (D1 > D2) {

			}
			else {

			}

			if (r2 > 0) {
				grfx->DrawPath(blackPen, lensContour);
				GraphicsPath^ lensContour2 = gcnew GraphicsPath();

				// Рисуем нижний торец
				if (D1 == D2) {
					Point p3((250 - scale * (d / 2) + scale * (abs(r1) - rd1)), 190 + scale * D1);
					Point p4(250 + scale * (d / 2) + scale * (abs(r2) - rd2), 190 + scale * D2);
					lensContour2->AddLine(p3, p4);
				}
				else if (D1 > D2) {
					Point p3((250 - scale * (d / 2) + scale * (abs(r1) - rd1)), 190 + scale * D1);
					Point p4(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 + scale * D2);
					lensContour2->AddLine(p3, p4);
				}
				else {

				}

				// Рисуем вторую поверхность
				Rectangle rectR2 = Rectangle((250 + scale * (d / 2 - (r2 > 0 ? 0 : 2) * abs(r2))), 190 - scale * abs(r2), scale * abs(r2) * 2, scale * abs(r2) * 2);
				lensContour2->AddArc(rectR2, (r2 > 0 ? 0.5 : 1) * 360 - startAngle2, 2 * startAngle2);

				lensContour->AddPath(lensContour2, false);

			}
			else {
				// Рисуем вторую поверхность
				Rectangle rectR2 = Rectangle((250 + scale * (d / 2 - (r2 > 0 ? 0 : 2) * abs(r2))), 190 - scale * abs(r2), scale * abs(r2) * 2, scale * abs(r2) * 2);
				lensContour->AddArc(rectR2, (r2 > 0 ? 0.5 : 1) * 360 - startAngle2, 2 * startAngle2);

				// Рисуем нижний торец
				if (D1 == D2) {
					Point p3(250 - scale * (d / 2) + scale * (abs(r1) - rd1), 190 + scale * D1);
					Point p4(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 + scale * D2);
					lensContour->AddLine(p4, p3);
				}
				else if (D1 > D2) {
					Point p3((250 - scale * (d / 2) + scale * (abs(r1) - rd1)), 190 + scale * D1);
					Point p4(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 + scale * D2);
					lensContour->AddLine(p3, p4);
				}
				else {

				}
			}
		}
		else {
			// Рисуем нижний торец
			if (D1 == D2) {
				Point p3((250 - scale * (d / 2) + scale * (abs(r1) - rd1)), 190 + scale * D1);
				Point p4(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 + scale * D2);
				lensContour->AddLine(p3, p4);
			}
			else if (D1 > D2) {
				Point p3((250 - scale * (d / 2) + scale * (abs(r1) - rd1)), 190 + scale * D1);
				Point p4(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 + scale * D2);
				lensContour->AddLine(p3, p4);
			}
			else {

			}

			if (r2 > 0) {
				// Рисуем вторую поверхность
				Rectangle rectR2 = Rectangle((250 + scale * (d / 2 - (r2 > 0 ? 0 : 2) * abs(r2))), 190 - scale * abs(r2), scale * abs(r2) * 2, scale * abs(r2) * 2);
				lensContour->AddArc(rectR2, (r2 > 0 ? 0.5 : 1) * 360 - startAngle2, 2 * startAngle2);

				// Рисуем верхний торец
				if (D1 == D2) {
					Point p1((250 - scale * (d / 2) - scale * (abs(r1) - rd1)), 190 - scale * D1);
					Point p2(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 - scale * D2);
					lensContour->AddLine(p2, p1);
				}
				else if (D1 > D2) {

				}
				else {

				}
			}
			else {
				grfx->DrawPath(blackPen, lensContour);
				GraphicsPath^ lensContour2 = gcnew GraphicsPath();

				// Рисуем верхний торец
				if (D1 == D2) {
					Point p1((250 - scale * (d / 2) - scale * (abs(r1) - rd1)), 190 - scale * D1);
					Point p2(250 + scale * (d / 2) - scale * (abs(r2) - rd2), 190 - scale * D2);
					lensContour2->AddLine(p1, p2);
				}
				else if (D1 > D2) {

				}
				else {

				}

				// Рисуем вторую поверхность
				Rectangle rectR2 = Rectangle((250 + scale * (d / 2 - (r2 > 0 ? 0 : 2) * abs(r2))), 190 - scale * abs(r2), scale * abs(r2) * 2, scale * abs(r2) * 2);
				lensContour2->AddArc(rectR2, (r2 > 0 ? 0.5 : 1) * 360 - startAngle2, 2 * startAngle2);

				lensContour->AddPath(lensContour2, false);

			}
		}

		// Запускаем отрисовку графики и закрашиваем линзу
		grfx->DrawPath(blackPen, lensContour);
		lensRegion->Complement(lensContour);
		grfx->FillRegion(blueBrush, lensRegion);

		// Рисуем первую главную плоскость
		Point h1(250 - scale * (d / 2 - SH), 190 - scale * (D1 + 15));
		Point h2(250 - scale * (d / 2 - SH), 190 + scale * (D2 + 15));
		grfx->DrawLine(blackPenSm, h1, h2);

		// Рисуем вторую главную плоскость
		Point h3(250 + scale * (d / 2 + SH_), 190 - scale * (D1 + 15));
		Point h4(250 + scale * (d / 2 + SH_), 190 + scale * (D2 + 15));
		grfx->DrawLine(blackPenSm, h3, h4);

		// Рисуем луч до линзы
		Point rayP1(250 - scale * (d / 2 + 30), 190 - scale * (D1 - 5));
		Point rayP2(250 - scale * (d / 2 - SH), 190 - scale * (D1 - 5));
		grfx->DrawLine(bluePen, rayP1, rayP2);

		// Рисуем луч после линзы
		Point rayP3(250 + scale * (d / 2 + SH_), 190 - scale * (D1 - 5));
		Point rayP4(250 + scale * (d / 2 + SF_), 190);
		grfx->DrawLine(bluePen, rayP2, rayP3);
		grfx->DrawLine(bluePen, rayP3, rayP4);

		// Отображение изображения в форме
		pictureBox1->Image = bmp;
	}
	};
}
