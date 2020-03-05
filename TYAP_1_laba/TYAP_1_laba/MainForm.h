#pragma once

namespace TYAP1laba {

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
	protected:

	private: System::Windows::Forms::Button^ doBtn;
	private: System::Windows::Forms::TextBox^ outTextBox;
	private: System::Windows::Forms::DataGridView^ changeDGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvc;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->inTextBox = (gcnew System::Windows::Forms::TextBox());
			this->doBtn = (gcnew System::Windows::Forms::Button());
			this->outTextBox = (gcnew System::Windows::Forms::TextBox());
			this->changeDGV = (gcnew System::Windows::Forms::DataGridView());
			this->dgvc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->changeDGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// inTextBox
			// 
			this->inTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->inTextBox->Location = System::Drawing::Point(222, 47);
			this->inTextBox->Name = L"inTextBox";
			this->inTextBox->Size = System::Drawing::Size(1219, 32);
			this->inTextBox->TabIndex = 0;
			// 
			// doBtn
			// 
			this->doBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->doBtn->Location = System::Drawing::Point(222, 110);
			this->doBtn->Name = L"doBtn";
			this->doBtn->Size = System::Drawing::Size(1219, 88);
			this->doBtn->TabIndex = 1;
			this->doBtn->Text = L"Выполнить!";
			this->doBtn->UseVisualStyleBackColor = true;
			this->doBtn->Click += gcnew System::EventHandler(this, &MainForm::doBtn_Click);
			// 
			// outTextBox
			// 
			this->outTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->outTextBox->Location = System::Drawing::Point(222, 232);
			this->outTextBox->Name = L"outTextBox";
			this->outTextBox->Size = System::Drawing::Size(1219, 32);
			this->outTextBox->TabIndex = 2;
			// 
			// changeDGV
			// 
			this->changeDGV->AllowUserToAddRows = false;
			this->changeDGV->AllowUserToDeleteRows = false;
			this->changeDGV->AllowUserToResizeColumns = false;
			this->changeDGV->AllowUserToResizeRows = false;
			this->changeDGV->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->changeDGV->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->changeDGV->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->changeDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->changeDGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dgvc });
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->changeDGV->DefaultCellStyle = dataGridViewCellStyle3;
			this->changeDGV->Location = System::Drawing::Point(222, 340);
			this->changeDGV->Name = L"changeDGV";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->changeDGV->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->changeDGV->RowHeadersWidth = 40;
			this->changeDGV->RowTemplate->Height = 32;
			this->changeDGV->RowTemplate->ReadOnly = true;
			this->changeDGV->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->changeDGV->Size = System::Drawing::Size(556, 433);
			this->changeDGV->TabIndex = 3;
			// 
			// dgvc
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dgvc->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvc->HeaderText = L"Переходы:";
			this->dgvc->Name = L"dgvc";
			this->dgvc->ReadOnly = true;
			this->dgvc->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvc->Width = 358;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(845, 340);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(596, 433);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->changeDGV);
			this->Controls->Add(this->outTextBox);
			this->Controls->Add(this->doBtn);
			this->Controls->Add(this->inTextBox);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->changeDGV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void fillInDGVRowNumber(DataGridView^ DGV, int i)
		{
			DGV->Rows[i]->HeaderCell->Value = i + 1;
		}

		int scan_G(DataGridView^ DGV)
		{
			enum state { H, E, D, DS, ES, ERR };
			enum state CS = H;
			int i = 0, N = inTextBox->Text->Length;
			do {
				wchar_t c = inTextBox->Text[i];
				switch (CS)
				{
				case H:
					if (c == 'e')
					{
						DGV->Rows->Add("H -> E");
						fillInDGVRowNumber(DGV, i);
						CS = E;
						i++;
						continue;
					}
					else if (c == 'd')
					{
						DGV->Rows->Add("H -> D");
						fillInDGVRowNumber(DGV, i);
						CS = D;
						i++;
						continue;
					}
					else
					{
						CS = ERR;
						break;
					}
				case E:
					if (c == 'e')
					{
						DGV->Rows->Add("E -> DS");
						fillInDGVRowNumber(DGV, i);
						CS = DS;
						i++;
						continue;
					}
					else
					{
						CS = ERR;
						break;
					}
				case D:
					if (c == 'd')
					{
						DGV->Rows->Add("D -> ES");
						fillInDGVRowNumber(DGV, i);
						CS = ES;
						i++;
						continue;
					}
					else
					{
						CS = ERR;
						break;
					}
				case DS:
					if (c == 'd')
					{
						DGV->Rows->Add("DS -> ES");
						fillInDGVRowNumber(DGV, i);
						CS = ES;
						i++;
						continue;
					}
					else
					{
						CS = ERR;
						break;
					}
				case ES:
					if (c == 'e')
					{
						DGV->Rows->Add("ES -> DS");
						fillInDGVRowNumber(DGV, i);
						CS = DS;
						i++;
						continue;
					}
					else
					{
						CS = ERR;
						break;
					}
				}
			} while ((CS != ERR) && ((i != N) && ((CS != ES) || (CS != DS))));
			if (CS == ERR)
				return 1;
			else
				return 0;
		}

	private: System::Void doBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		changeDGV->Rows->Clear();
		if (scan_G(changeDGV) == 0)
			outTextBox->Text = "Цепочка принадлежит данному языку";
		else
			outTextBox->Text = "Цепочка не принадлежит данному языку";
	}
};
}
