#pragma once
#include "Functions.h"
#include <algorithm>
#include <ctime>

namespace TYAP2Laba {

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
	private: System::Windows::Forms::TextBox^ inTextBox;
	private: System::Windows::Forms::Button^ cSortBtn;
	protected:

	private: System::Windows::Forms::TextBox^ outTextBox;
	private: System::Windows::Forms::Button^ qSortBtn;
	private: System::Windows::Forms::Button^ sSortBtn;
	private: System::Windows::Forms::Button^ clearBtn;
	private: System::Windows::Forms::Label^ workTimeLabel;



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
			this->inTextBox = (gcnew System::Windows::Forms::TextBox());
			this->cSortBtn = (gcnew System::Windows::Forms::Button());
			this->outTextBox = (gcnew System::Windows::Forms::TextBox());
			this->qSortBtn = (gcnew System::Windows::Forms::Button());
			this->sSortBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->workTimeLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// inTextBox
			// 
			this->inTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->inTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->inTextBox->Location = System::Drawing::Point(354, 233);
			this->inTextBox->Name = L"inTextBox";
			this->inTextBox->Size = System::Drawing::Size(870, 32);
			this->inTextBox->TabIndex = 0;
			// 
			// cSortBtn
			// 
			this->cSortBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cSortBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->cSortBtn->Location = System::Drawing::Point(354, 271);
			this->cSortBtn->Name = L"cSortBtn";
			this->cSortBtn->Size = System::Drawing::Size(286, 85);
			this->cSortBtn->TabIndex = 1;
			this->cSortBtn->Text = L"Сортировка выбором";
			this->cSortBtn->UseVisualStyleBackColor = true;
			this->cSortBtn->Click += gcnew System::EventHandler(this, &MainForm::cSortBtn_Click);
			// 
			// outTextBox
			// 
			this->outTextBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->outTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->outTextBox->Location = System::Drawing::Point(354, 362);
			this->outTextBox->Name = L"outTextBox";
			this->outTextBox->Size = System::Drawing::Size(870, 32);
			this->outTextBox->TabIndex = 2;
			// 
			// qSortBtn
			// 
			this->qSortBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->qSortBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->qSortBtn->Location = System::Drawing::Point(646, 271);
			this->qSortBtn->Name = L"qSortBtn";
			this->qSortBtn->Size = System::Drawing::Size(286, 85);
			this->qSortBtn->TabIndex = 3;
			this->qSortBtn->Text = L"Быстрая сортировка";
			this->qSortBtn->UseVisualStyleBackColor = true;
			this->qSortBtn->Click += gcnew System::EventHandler(this, &MainForm::qSortBtn_Click);
			// 
			// sSortBtn
			// 
			this->sSortBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->sSortBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->sSortBtn->Location = System::Drawing::Point(938, 271);
			this->sSortBtn->Name = L"sSortBtn";
			this->sSortBtn->Size = System::Drawing::Size(286, 85);
			this->sSortBtn->TabIndex = 4;
			this->sSortBtn->Text = L"Встроенная сортировка";
			this->sSortBtn->UseVisualStyleBackColor = true;
			this->sSortBtn->Click += gcnew System::EventHandler(this, &MainForm::sSortBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->clearBtn->Location = System::Drawing::Point(1230, 362);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(120, 32);
			this->clearBtn->TabIndex = 5;
			this->clearBtn->Text = L"Очистить";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainForm::clearBtn_Click);
			// 
			// workTimeLabel
			// 
			this->workTimeLabel->AutoSize = true;
			this->workTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->workTimeLabel->Location = System::Drawing::Point(358, 397);
			this->workTimeLabel->Name = L"workTimeLabel";
			this->workTimeLabel->Size = System::Drawing::Size(0, 26);
			this->workTimeLabel->TabIndex = 6;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->workTimeLabel);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->sSortBtn);
			this->Controls->Add(this->qSortBtn);
			this->Controls->Add(this->outTextBox);
			this->Controls->Add(this->cSortBtn);
			this->Controls->Add(this->inTextBox);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

	private: System::Void cSortBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		outTextBox->Text = "";
		int N = inTextBox->Text->Length, count = 0, len;
		getNumOfElements(count, N, inTextBox);
		int* arr = new int[count];
		fillArray(arr, N, len, inTextBox);
		clock_t t = clock();
		changeSort(arr, count);
		t = clock() - t;
		workTimeLabel->Text = "Время работы программы: " + t + "тактов";
		for (int i = 0; i < count; i++)
		{
			outTextBox->Text += arr[i] + " ";
		}
	}

	private: System::Void qSortBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		outTextBox->Text = "";
		int N = inTextBox->Text->Length, count = 0, len;
		getNumOfElements(count, N, inTextBox);
		int* arr = new int[count];
		fillArray(arr, N, len, inTextBox);
		clock_t t = clock();
		quickSort(arr, 0, count - 1);
		t = clock() - t;
		workTimeLabel->Text = "Время работы программы: " + t + "тактов";
		for (int i = 0; i < count; i++)
		{
			outTextBox->Text += arr[i] + " ";
		}
	}

	private: System::Void sSortBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		outTextBox->Text = "";
		int N = inTextBox->Text->Length, count = 0, len;
		getNumOfElements(count, N, inTextBox);
		int* arr = new int[count];
		fillArray(arr, N, len, inTextBox);
		clock_t t = clock();
		std::sort(arr, arr + count);
		t = clock() - t;
		workTimeLabel->Text = "Время работы программы: " + t + "тактов";
		for (int i = 0; i < count; i++)
		{
			outTextBox->Text += arr[i] + " ";
		}
	}


	private: System::Void clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		outTextBox->Text = "";
		workTimeLabel->Text = "";
	}
};
}
