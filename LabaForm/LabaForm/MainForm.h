#pragma once
#include "laba4Form.h"
#include "laba5Form.h"

namespace LabaForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::Button^ laba5Btn;
	private: System::Windows::Forms::Button^ laba4Btn;
	private: System::Windows::Forms::Button^ laba6Btn;
	private: System::Windows::Forms::Label^ meLabel;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->laba5Btn = (gcnew System::Windows::Forms::Button());
			this->laba4Btn = (gcnew System::Windows::Forms::Button());
			this->laba6Btn = (gcnew System::Windows::Forms::Button());
			this->meLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mainLabel
			// 
			this->mainLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->mainLabel->AutoSize = true;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainLabel->Location = System::Drawing::Point(789, 39);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(759, 234);
			this->mainLabel->TabIndex = 0;
			this->mainLabel->Text = resources->GetString(L"mainLabel.Text");
			this->mainLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(948, 276);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(440, 411);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// exitBtn
			// 
			this->exitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitBtn->Location = System::Drawing::Point(44, 661);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(562, 153);
			this->exitBtn->TabIndex = 2;
			this->exitBtn->Text = L"Выход";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MainForm::exitBtn_Click);
			// 
			// laba5Btn
			// 
			this->laba5Btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->laba5Btn->Location = System::Drawing::Point(44, 229);
			this->laba5Btn->Name = L"laba5Btn";
			this->laba5Btn->Size = System::Drawing::Size(562, 153);
			this->laba5Btn->TabIndex = 3;
			this->laba5Btn->Text = L"Лабораторная работа 5";
			this->laba5Btn->UseVisualStyleBackColor = true;
			this->laba5Btn->Click += gcnew System::EventHandler(this, &MainForm::laba5Btn_Click);
			// 
			// laba4Btn
			// 
			this->laba4Btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->laba4Btn->Location = System::Drawing::Point(44, 39);
			this->laba4Btn->Name = L"laba4Btn";
			this->laba4Btn->Size = System::Drawing::Size(562, 153);
			this->laba4Btn->TabIndex = 4;
			this->laba4Btn->Text = L"Лабораторная работа 4";
			this->laba4Btn->UseVisualStyleBackColor = true;
			this->laba4Btn->Click += gcnew System::EventHandler(this, &MainForm::laba4Btn_Click);
			// 
			// laba6Btn
			// 
			this->laba6Btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->laba6Btn->Location = System::Drawing::Point(44, 419);
			this->laba6Btn->Name = L"laba6Btn";
			this->laba6Btn->Size = System::Drawing::Size(562, 153);
			this->laba6Btn->TabIndex = 5;
			this->laba6Btn->UseVisualStyleBackColor = true;
			// 
			// meLabel
			// 
			this->meLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->meLabel->AutoSize = true;
			this->meLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->meLabel->Location = System::Drawing::Point(1215, 690);
			this->meLabel->Name = L"meLabel";
			this->meLabel->Size = System::Drawing::Size(370, 124);
			this->meLabel->TabIndex = 6;
			this->meLabel->Text = L"Выполнил студент\r\nГруппы БСТ1902\r\nМкртычян Д.Г.\r\nПроверил доц. Гуриков С.Р.\r\n";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->meLabel);
			this->Controls->Add(this->laba6Btn);
			this->Controls->Add(this->laba4Btn);
			this->Controls->Add(this->laba5Btn);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->mainLabel);
			this->Name = L"MainForm";
			this->Text = L"Меню";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void laba4Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		laba4Form^ f = gcnew laba4Form;
		f->Owner = this;
		f->Show();
		this->Hide();
	}
private: System::Void laba5Btn_Click(System::Object^ sender, System::EventArgs^ e) {
	laba5Form^ f = gcnew laba5Form;
	f->Owner = this;
	f->Show();
	this->Hide();
	}
};
}
