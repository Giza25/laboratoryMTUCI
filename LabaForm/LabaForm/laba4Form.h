#pragma once
#include "Func.h"

namespace LabaForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для laba4Form
	/// </summary>
	public ref class laba4Form : public System::Windows::Forms::Form
	{
	public:
		laba4Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~laba4Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backBtn;
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::Label^ taskLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Label^ yLabel;
	private: System::Windows::Forms::TextBox^ xTextBox;
	private: System::Windows::Forms::TextBox^ yTextBox;




	private: System::Windows::Forms::TextBox^ resultTextBox;
	private: System::Windows::Forms::Button^ solveBtn;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(laba4Form::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->xTextBox = (gcnew System::Windows::Forms::TextBox());
			this->yTextBox = (gcnew System::Windows::Forms::TextBox());
			this->resultTextBox = (gcnew System::Windows::Forms::TextBox());
			this->solveBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// backBtn
			// 
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->backBtn->Location = System::Drawing::Point(44, 709);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(414, 105);
			this->backBtn->TabIndex = 0;
			this->backBtn->Text = L"Назад";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &laba4Form::backBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitBtn->Location = System::Drawing::Point(1142, 709);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(414, 105);
			this->exitBtn->TabIndex = 1;
			this->exitBtn->Text = L"Выход";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &laba4Form::exitBtn_Click);
			// 
			// titleLabel
			// 
			this->titleLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->titleLabel->Location = System::Drawing::Point(186, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(1213, 78);
			this->titleLabel->TabIndex = 2;
			this->titleLabel->Text = L"Лабораторная работа №4\r\nЗапись арифметических выражений на основе пользовательски"
				L"х функций\r\n";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// taskLabel
			// 
			this->taskLabel->AutoSize = true;
			this->taskLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taskLabel->Location = System::Drawing::Point(57, 150);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(836, 39);
			this->taskLabel->TabIndex = 3;
			this->taskLabel->Text = L"Высчитать значение арифметического выражения:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(899, 121);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(523, 127);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(270, 330);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(72, 39);
			this->xLabel->TabIndex = 5;
			this->xLabel->Text = L"x = ";
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yLabel->Location = System::Drawing::Point(1046, 330);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(72, 39);
			this->yLabel->TabIndex = 6;
			this->yLabel->Text = L"y = ";
			// 
			// xTextBox
			// 
			this->xTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xTextBox->Location = System::Drawing::Point(348, 327);
			this->xTextBox->Name = L"xTextBox";
			this->xTextBox->Size = System::Drawing::Size(200, 45);
			this->xTextBox->TabIndex = 7;
			// 
			// yTextBox
			// 
			this->yTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yTextBox->Location = System::Drawing::Point(1124, 327);
			this->yTextBox->Name = L"yTextBox";
			this->yTextBox->Size = System::Drawing::Size(200, 45);
			this->yTextBox->TabIndex = 8;
			// 
			// resultTextBox
			// 
			this->resultTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultTextBox->Location = System::Drawing::Point(330, 603);
			this->resultTextBox->Name = L"resultTextBox";
			this->resultTextBox->Size = System::Drawing::Size(961, 45);
			this->resultTextBox->TabIndex = 9;
			// 
			// solveBtn
			// 
			this->solveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solveBtn->Location = System::Drawing::Point(592, 454);
			this->solveBtn->Name = L"solveBtn";
			this->solveBtn->Size = System::Drawing::Size(426, 105);
			this->solveBtn->TabIndex = 10;
			this->solveBtn->Text = L"Вычислить";
			this->solveBtn->UseVisualStyleBackColor = true;
			this->solveBtn->Click += gcnew System::EventHandler(this, &laba4Form::solveBtn_Click);
			// 
			// laba4Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->solveBtn);
			this->Controls->Add(this->resultTextBox);
			this->Controls->Add(this->yTextBox);
			this->Controls->Add(this->xTextBox);
			this->Controls->Add(this->yLabel);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->taskLabel);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->backBtn);
			this->Name = L"laba4Form";
			this->Text = L"Лабораторная Работа №4";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Owner->Show();
		this->Close();
	}
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Owner->Close();
		this->Close();
	}

	double laba4Func(TextBox^ x, TextBox^ y)
	{
		double X = Convert::ToDouble(x->Text);
		double Y = Convert::ToDouble(x->Text);
		return pow(5.2, 3) * log10(X + Y) / (X - 1 / (0.45 * sin(X - 8 * Y))) + 0.5;
	}
	private: System::Void solveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		resultTextBox->Text = "" + laba4Func(xTextBox, yTextBox);
	}
};
}
