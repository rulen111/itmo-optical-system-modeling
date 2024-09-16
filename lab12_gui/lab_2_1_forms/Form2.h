#pragma once
#include <vector>

namespace lab_2_1_forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ textBoxSH_;

	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ textBoxSH;

	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textBoxSF_;

	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ textBoxSF;

	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBoxF_;

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBoxF;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxSH_ = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxSH = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxSF_ = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxSF = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxF_ = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxF = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBoxSH_);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBoxSH);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBoxSF_);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxSF);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxF_);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxF);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(744, 134);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ѕараксиальные характеристики";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(630, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"SH\', мм";
			// 
			// textBoxSH_
			// 
			this->textBoxSH_->Location = System::Drawing::Point(633, 61);
			this->textBoxSH_->Name = L"textBoxSH_";
			this->textBoxSH_->ReadOnly = true;
			this->textBoxSH_->Size = System::Drawing::Size(100, 20);
			this->textBoxSH_->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(503, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"SH, мм";
			// 
			// textBoxSH
			// 
			this->textBoxSH->Location = System::Drawing::Point(506, 61);
			this->textBoxSH->Name = L"textBoxSH";
			this->textBoxSH->ReadOnly = true;
			this->textBoxSH->Size = System::Drawing::Size(100, 20);
			this->textBoxSH->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(375, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"SF\', мм";
			// 
			// textBoxSF_
			// 
			this->textBoxSF_->Location = System::Drawing::Point(378, 61);
			this->textBoxSF_->Name = L"textBoxSF_";
			this->textBoxSF_->ReadOnly = true;
			this->textBoxSF_->Size = System::Drawing::Size(100, 20);
			this->textBoxSF_->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(249, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"SF, мм";
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// textBoxSF
			// 
			this->textBoxSF->Location = System::Drawing::Point(252, 61);
			this->textBoxSF->Name = L"textBoxSF";
			this->textBoxSF->ReadOnly = true;
			this->textBoxSF->Size = System::Drawing::Size(100, 20);
			this->textBoxSF->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(128, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"F\', мм";
			// 
			// textBoxF_
			// 
			this->textBoxF_->Location = System::Drawing::Point(131, 61);
			this->textBoxF_->Name = L"textBoxF_";
			this->textBoxF_->ReadOnly = true;
			this->textBoxF_->Size = System::Drawing::Size(100, 20);
			this->textBoxF_->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"F, мм";
			// 
			// textBoxF
			// 
			this->textBoxF->Location = System::Drawing::Point(6, 61);
			this->textBoxF->Name = L"textBoxF";
			this->textBoxF->ReadOnly = true;
			this->textBoxF->Size = System::Drawing::Size(100, 20);
			this->textBoxF->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 182);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(733, 330);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 533);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form2";
			this->Text = L"ѕаракс";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
