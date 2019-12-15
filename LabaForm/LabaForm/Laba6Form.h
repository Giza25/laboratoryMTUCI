#pragma once
#include <cmath>
#include "MyFunctions.h"

namespace LabaForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для laba6Form
	/// </summary>
	public ref class laba6Form : public System::Windows::Forms::Form
	{
	public:
		laba6Form(void)
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
		~laba6Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ resDGV;
	protected:

	private: System::Windows::Forms::TextBox^ aTextBox;
	private: System::Windows::Forms::TextBox^ bTextBox;
	private: System::Windows::Forms::TextBox^ stepTextBox;

	private: System::Windows::Forms::TextBox^ maxTextBox;
	private: System::Windows::Forms::Button^ solveBtn;


	private: System::Windows::Forms::Button^ backBtn;

	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::Label^ maxLabel;
	private: System::Windows::Forms::Label^ aLabel;
	private: System::Windows::Forms::Label^ bLabel;
	private: System::Windows::Forms::Label^ stepLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(laba6Form::typeid));
			this->resDGV = (gcnew System::Windows::Forms::DataGridView());
			this->aTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bTextBox = (gcnew System::Windows::Forms::TextBox());
			this->stepTextBox = (gcnew System::Windows::Forms::TextBox());
			this->maxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->solveBtn = (gcnew System::Windows::Forms::Button());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->maxLabel = (gcnew System::Windows::Forms::Label());
			this->aLabel = (gcnew System::Windows::Forms::Label());
			this->bLabel = (gcnew System::Windows::Forms::Label());
			this->stepLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resDGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// resDGV
			// 
			this->resDGV->AllowUserToAddRows = false;
			this->resDGV->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->resDGV->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->resDGV->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resDGV->ColumnHeadersHeight = 30;
			this->resDGV->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->NullValue = nullptr;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->resDGV->DefaultCellStyle = dataGridViewCellStyle1;
			this->resDGV->Location = System::Drawing::Point(540, 226);
			this->resDGV->Margin = System::Windows::Forms::Padding(2);
			this->resDGV->Name = L"resDGV";
			this->resDGV->RowHeadersVisible = false;
			this->resDGV->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->resDGV->RowTemplate->Height = 35;
			this->resDGV->RowTemplate->ReadOnly = true;
			this->resDGV->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->resDGV->Size = System::Drawing::Size(249, 589);
			this->resDGV->TabIndex = 0;
			// 
			// aTextBox
			// 
			this->aTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->aTextBox->Location = System::Drawing::Point(208, 235);
			this->aTextBox->Margin = System::Windows::Forms::Padding(2);
			this->aTextBox->Name = L"aTextBox";
			this->aTextBox->Size = System::Drawing::Size(100, 32);
			this->aTextBox->TabIndex = 1;
			// 
			// bTextBox
			// 
			this->bTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bTextBox->Location = System::Drawing::Point(208, 422);
			this->bTextBox->Margin = System::Windows::Forms::Padding(2);
			this->bTextBox->Name = L"bTextBox";
			this->bTextBox->Size = System::Drawing::Size(100, 32);
			this->bTextBox->TabIndex = 2;
			// 
			// stepTextBox
			// 
			this->stepTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->stepTextBox->Location = System::Drawing::Point(208, 593);
			this->stepTextBox->Margin = System::Windows::Forms::Padding(2);
			this->stepTextBox->Name = L"stepTextBox";
			this->stepTextBox->Size = System::Drawing::Size(100, 32);
			this->stepTextBox->TabIndex = 3;
			// 
			// maxTextBox
			// 
			this->maxTextBox->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->maxTextBox->Location = System::Drawing::Point(1035, 556);
			this->maxTextBox->Margin = System::Windows::Forms::Padding(2);
			this->maxTextBox->Name = L"maxTextBox";
			this->maxTextBox->Size = System::Drawing::Size(253, 32);
			this->maxTextBox->TabIndex = 4;
			// 
			// solveBtn
			// 
			this->solveBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->solveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->solveBtn->Location = System::Drawing::Point(962, 262);
			this->solveBtn->Margin = System::Windows::Forms::Padding(2);
			this->solveBtn->Name = L"solveBtn";
			this->solveBtn->Size = System::Drawing::Size(400, 100);
			this->solveBtn->TabIndex = 5;
			this->solveBtn->Text = L"Протабулировать";
			this->solveBtn->UseVisualStyleBackColor = true;
			this->solveBtn->Click += gcnew System::EventHandler(this, &laba6Form::solveBtn_Click);
			// 
			// backBtn
			// 
			this->backBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->backBtn->Location = System::Drawing::Point(11, 750);
			this->backBtn->Margin = System::Windows::Forms::Padding(2);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(400, 100);
			this->backBtn->TabIndex = 6;
			this->backBtn->Text = L"Назад";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &laba6Form::backBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->exitBtn->Location = System::Drawing::Point(1173, 750);
			this->exitBtn->Margin = System::Windows::Forms::Padding(2);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(400, 100);
			this->exitBtn->TabIndex = 7;
			this->exitBtn->Text = L"Выход";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &laba6Form::exitBtn_Click);
			// 
			// maxLabel
			// 
			this->maxLabel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->maxLabel->AutoSize = true;
			this->maxLabel->Location = System::Drawing::Point(982, 528);
			this->maxLabel->Name = L"maxLabel";
			this->maxLabel->Size = System::Drawing::Size(362, 26);
			this->maxLabel->TabIndex = 8;
			this->maxLabel->Text = L"Максимальный элемент таблицы:";
			// 
			// aLabel
			// 
			this->aLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->aLabel->AutoSize = true;
			this->aLabel->Location = System::Drawing::Point(160, 238);
			this->aLabel->Name = L"aLabel";
			this->aLabel->Size = System::Drawing::Size(43, 26);
			this->aLabel->TabIndex = 9;
			this->aLabel->Text = L"a =";
			// 
			// bLabel
			// 
			this->bLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bLabel->AutoSize = true;
			this->bLabel->Location = System::Drawing::Point(160, 425);
			this->bLabel->Name = L"bLabel";
			this->bLabel->Size = System::Drawing::Size(43, 26);
			this->bLabel->TabIndex = 10;
			this->bLabel->Text = L"b =";
			// 
			// stepLabel
			// 
			this->stepLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->stepLabel->AutoSize = true;
			this->stepLabel->Location = System::Drawing::Point(146, 596);
			this->stepLabel->Name = L"stepLabel";
			this->stepLabel->Size = System::Drawing::Size(57, 26);
			this->stepLabel->TabIndex = 11;
			this->stepLabel->Text = L"Шаг:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(638, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(265, 52);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Лабораторная Работа 6\r\nТабулирование функции";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(383, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(585, 52);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Протабулировать функцию на интервале \r\nс данным шагом и вывести ее максимальное з"
				L"начение:\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(974, 99);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// laba6Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stepLabel);
			this->Controls->Add(this->bLabel);
			this->Controls->Add(this->aLabel);
			this->Controls->Add(this->maxLabel);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->solveBtn);
			this->Controls->Add(this->maxTextBox);
			this->Controls->Add(this->stepTextBox);
			this->Controls->Add(this->bTextBox);
			this->Controls->Add(this->aTextBox);
			this->Controls->Add(this->resDGV);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"laba6Form";
			this->Text = L"Лабораторная работа 6";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resDGV))->EndInit();
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
	
	private: System::Void solveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = toDouble(aTextBox);
		double b = toDouble(bTextBox);
		double step = toDouble(stepTextBox);
		double max = laba6Func(a);
		resDGV->Rows->Clear();
		//resDGV->Refresh();
		resDGV->ColumnCount = 2;
		resDGV->Rows->Add("x", "y");
		resDGV->Rows[0]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		resDGV->Columns[0]->Width = 60;
		resDGV->Columns[1]->Width = 170;
		tabulation(a, b, step, resDGV, max);
		inTextBox(maxTextBox, max);
	}
};
}
