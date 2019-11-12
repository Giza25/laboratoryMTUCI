#pragma once
#include "Func.h"
#include "cmath"

namespace LabaForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� laba5Form
	/// </summary>
	public ref class laba5Form : public System::Windows::Forms::Form
	{
	public:
		laba5Form(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~laba5Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backBtn;
	protected:

	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::Label^ labaTitle;

	private: System::Windows::Forms::Label^ taskLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ aLabel;
	private: System::Windows::Forms::Label^ bLabel;
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Label^ yLabel;




	private: System::Windows::Forms::TextBox^ aTextBox;
	private: System::Windows::Forms::TextBox^ bTextBox;
	private: System::Windows::Forms::TextBox^ xTextBox;
	private: System::Windows::Forms::TextBox^ yTextBox;
	private: System::Windows::Forms::TextBox^ resultTextBox;





	private: System::Windows::Forms::Button^ solveBtn;




	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(laba5Form::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->labaTitle = (gcnew System::Windows::Forms::Label());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->aLabel = (gcnew System::Windows::Forms::Label());
			this->bLabel = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->aTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bTextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->backBtn->Text = L"�����";
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &laba5Form::backBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitBtn->Location = System::Drawing::Point(1142, 709);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(414, 105);
			this->exitBtn->TabIndex = 1;
			this->exitBtn->Text = L"�����";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &laba5Form::exitBtn_Click);
			// 
			// labaTitle
			// 
			this->labaTitle->AutoSize = true;
			this->labaTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labaTitle->Location = System::Drawing::Point(274, 9);
			this->labaTitle->Name = L"labaTitle";
			this->labaTitle->Size = System::Drawing::Size(976, 117);
			this->labaTitle->TabIndex = 2;
			this->labaTitle->Text = L"������������ ������ �5\r\n���������������� ���������� ��������������� �������� \r\n� "
				L"����������� ������������� � ������������ ��������";
			this->labaTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// taskLabel
			// 
			this->taskLabel->AutoSize = true;
			this->taskLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taskLabel->Location = System::Drawing::Point(37, 186);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(715, 78);
			this->taskLabel->TabIndex = 3;
			this->taskLabel->Text = L"���������� �������� ������� \r\n� ����������� ��������������� ��������:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(746, 129);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(826, 243);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// aLabel
			// 
			this->aLabel->AutoSize = true;
			this->aLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aLabel->Location = System::Drawing::Point(233, 433);
			this->aLabel->Name = L"aLabel";
			this->aLabel->Size = System::Drawing::Size(65, 39);
			this->aLabel->TabIndex = 5;
			this->aLabel->Text = L"a =";
			// 
			// bLabel
			// 
			this->bLabel->AutoSize = true;
			this->bLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bLabel->Location = System::Drawing::Point(233, 530);
			this->bLabel->Name = L"bLabel";
			this->bLabel->Size = System::Drawing::Size(65, 39);
			this->bLabel->TabIndex = 6;
			this->bLabel->Text = L"b =";
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(677, 433);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(63, 39);
			this->xLabel->TabIndex = 7;
			this->xLabel->Text = L"x =";
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yLabel->Location = System::Drawing::Point(677, 530);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(72, 39);
			this->yLabel->TabIndex = 8;
			this->yLabel->Text = L"y  =";
			// 
			// aTextBox
			// 
			this->aTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aTextBox->Location = System::Drawing::Point(304, 430);
			this->aTextBox->Name = L"aTextBox";
			this->aTextBox->Size = System::Drawing::Size(154, 45);
			this->aTextBox->TabIndex = 9;
			// 
			// bTextBox
			// 
			this->bTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bTextBox->Location = System::Drawing::Point(304, 527);
			this->bTextBox->Name = L"bTextBox";
			this->bTextBox->Size = System::Drawing::Size(154, 45);
			this->bTextBox->TabIndex = 10;
			// 
			// xTextBox
			// 
			this->xTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xTextBox->Location = System::Drawing::Point(746, 430);
			this->xTextBox->Name = L"xTextBox";
			this->xTextBox->Size = System::Drawing::Size(154, 45);
			this->xTextBox->TabIndex = 11;
			// 
			// yTextBox
			// 
			this->yTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yTextBox->Location = System::Drawing::Point(746, 527);
			this->yTextBox->Name = L"yTextBox";
			this->yTextBox->Size = System::Drawing::Size(154, 45);
			this->yTextBox->TabIndex = 12;
			// 
			// resultTextBox
			// 
			this->resultTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultTextBox->Location = System::Drawing::Point(363, 629);
			this->resultTextBox->Name = L"resultTextBox";
			this->resultTextBox->Size = System::Drawing::Size(905, 45);
			this->resultTextBox->TabIndex = 13;
			// 
			// solveBtn
			// 
			this->solveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solveBtn->Location = System::Drawing::Point(1051, 454);
			this->solveBtn->Name = L"solveBtn";
			this->solveBtn->Size = System::Drawing::Size(414, 105);
			this->solveBtn->TabIndex = 14;
			this->solveBtn->Text = L"���������";
			this->solveBtn->UseVisualStyleBackColor = true;
			this->solveBtn->Click += gcnew System::EventHandler(this, &laba5Form::solveBtn_Click);
			// 
			// laba5Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->solveBtn);
			this->Controls->Add(this->resultTextBox);
			this->Controls->Add(this->yTextBox);
			this->Controls->Add(this->xTextBox);
			this->Controls->Add(this->bTextBox);
			this->Controls->Add(this->aTextBox);
			this->Controls->Add(this->yLabel);
			this->Controls->Add(this->xLabel);
			this->Controls->Add(this->bLabel);
			this->Controls->Add(this->aLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->taskLabel);
			this->Controls->Add(this->labaTitle);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->backBtn);
			this->Name = L"laba5Form";
			this->Text = L"laba5Form";
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

	double laba5Func(double a, double b, double x, double y)
	{
		if (x < y)
		{
			return fmin(fmin(a - cos(x), a / (b + y)), pow(sin(x), 2));
		}
		else if (x < y + 5)
		{
			return fmax(pow(a, 3), log(pow(x, 2) + pow(y, 2)));
		}
		else
		{
			return a + pow(cos(x - y), 3);
		}
	}

	private: System::Void solveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, x, y;
		a = Convert::ToDouble(aTextBox->Text);
		b = Convert::ToDouble(bTextBox->Text);
		x = Convert::ToDouble(xTextBox->Text);
		y = Convert::ToDouble(yTextBox->Text);
		resultTextBox->Text = Convert::ToString(laba5Func(a, b, x, y));
	}
};
}
