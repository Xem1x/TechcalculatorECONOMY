#pragma once

#include <windows.h>
#include "AreaSource.h"
#include "AddInOrder.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
namespace CppCLR_WinformsProjekt3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for CountForm
	/// </summary>
	public ref class CountForm : public System::Windows::Forms::Form
	{

	public:
		
		Form^ CountFormObj;
		CountForm(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		CountForm(Form^ CountFormObj1)
		{

			CountFormObj = CountFormObj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::ComponentModel::IContainer^ components;








	public:






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CountForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1275, 762);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 90);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CountForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Внешний диаметр";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(293, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Внутренний диаметр";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(293, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 20);
			this->textBox2->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1m*1m", L"1.5m*1.5m", L"1.5m*2m", L"" });
			this->comboBox1->Location = System::Drawing::Point(293, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Размер листа";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Количество";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(293, 199);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 20);
			this->textBox3->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(525, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 24);
			this->button2->TabIndex = 12;
			this->button2->Text = L"✓";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CountForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(36, 318);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 298);
			this->dataGridView1->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Внешний Диаметр(мм)";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Внутрений Диаметр(мм)";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Площадь";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Количество";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// CountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1571, 913);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(2560, 1440);
			this->MinimumSize = System::Drawing::Size(1366, 768);
			this->Name = L"CountForm";
			this->Text = L"CountForm";
			this->Load += gcnew System::EventHandler(this, &CountForm::CountForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		};
		
		String^ queuename;
		String^ matname ;
		
		int n;
		double square;
#pragma endregion


	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		CountFormObj->Show();
	};
	
public: System::Void CountForm_Load(System::Object^ sender, System::EventArgs^ e)
{

};



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->Rows->Add();
	Area area;
	AddInOrder order;
	//if ();
	try
	{

		matname = System::Convert::ToString(comboBox1->Text);
		if (matname == "1m*1m")
		{
			area.materialsheetsquare = 1;

		}
		else if (matname == "1.5m*1.5m")
		{
			area.materialsheetsquare = 2.25;
		}
		else if (matname == "1.5m*2m")
		{
			area.materialsheetsquare = 3;
		}

		area.outerdiameter = System::Convert::ToDouble(textBox1->Text) / 1000;
		area.innerdiameter = System::Convert::ToDouble(textBox2->Text) / 1000;
		area.productcount = System::Convert::ToInt16(textBox3->Text);


		String^ outerdiameter = textBox1->Text;
		order.outerdiameter = msclr::interop::marshal_as<std::string>(outerdiameter);
		String^ innerdiameter = textBox2->Text;
		order.innerdiameter = msclr::interop::marshal_as<std::string>(innerdiameter);
		String^ productcount = textBox3->Text;
		order.productcount = msclr::interop::marshal_as<std::string>(productcount);
		order.GetRequest();

		area.roundarea();
		dataGridView1[0, n]->Value = msclr::interop::marshal_as<String^>(order.line[0]);
		dataGridView1[1, n]->Value = msclr::interop::marshal_as<String^>(order.line[1]);
		dataGridView1[2, n]->Value = Convert::ToString(area.productArea);

		dataGridView1[3, n]->Value = msclr::interop::marshal_as<String^>(order.line[2]);

		n++;
		textBox1->Text = "";
		textBox1->BackColor = Color::FromArgb(255, 255, 255);

		textBox2->Text = "";
		textBox2->BackColor = Color::FromArgb(255, 255, 255);

		textBox3->Text = "";
		textBox3->BackColor = Color::FromArgb(255, 255, 255);

	}
	catch (FormatException^)
	{
		if (comboBox1->Text == "")
		{
			comboBox1->BackColor = Color::FromArgb(255, 192, 192);
		}
		else
		{
			comboBox1->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox1->Text == "")
		{
			textBox1->BackColor = Color::FromArgb(255, 192, 192);
		}
		else
		{
			textBox1->BackColor = Color::FromArgb(192, 255, 192);
		}

		if (textBox2->Text == "")
		{
			textBox2->BackColor = Color::FromArgb(255, 192, 192);
		}
		else
		{
			textBox2->BackColor = Color::FromArgb(192, 255, 192);
		}

		if (textBox3->Text == "")
		{
			textBox3->BackColor = Color::FromArgb(255, 192, 192);
		}
		else
		{
			textBox3->BackColor = Color::FromArgb(192, 255, 192);
		}
	}
	//


}


};
}
