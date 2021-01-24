#pragma once
#pragma warning(disable : 4996)
#include "pch.h"
#include <chrono>
#include <ctime> 
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include "CalcForm.h"

namespace CppCLR_WinformsProjekt3 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace CppCLR_WinformsProjekt3;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::IO;

	public ref class CalcForm : public System::Windows::Forms::Form
	{
		Form^ CalcFormObj;
	public:
		CalcForm(void)
		{
			InitializeComponent();

		}
	public:
		CalcForm(Form^ CalcFormObj1)
		{
			CalcFormObj = CalcFormObj1;
			InitializeComponent();

		}


	protected:
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TreeView^ treeView2;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TreeView^ treeView3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TreeView^ treeView4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox16;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ конфигурацияToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьВИзбранноеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ свойстваToolStripMenuItem;

private: System::Diagnostics::EventLog^ eventLog1;
private: System::Windows::Forms::ToolStripMenuItem^ избранноеToolStripMenuItem;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 0.6mm Temperature 550C              250UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 1mm Temperature 550C                 300UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 3mm Temperature 550C                 850UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Kevlar 1mm Temperature 400C                                     960UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Iso Therm 800 2mm Temperature 800C                           800UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"TXG 2361 1.2mm Temperature 1050C                           1400UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"TKT 1000 1.2mm Temperature 1050C                             450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 2mm Temperature 550C                 450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"Ceramics HT 1000 3mm Temperature 1050C                450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Проверка"));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая термостойкая", gcnew cli::array< System::Windows::Forms::TreeNode^  >(10) {
				treeNode1,
					treeNode2, treeNode3, treeNode4, treeNode5, treeNode6, treeNode7, treeNode8, treeNode9, treeNode10
			}));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082442-1EJ1 0.6mm Temperature 180C            700UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082444-1EJ2 0.4mm Temperature 180C            460UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082444-1EJ1 0.4mm Temperature 180C            350UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082620-0EJ2 0.75mm Temperature 180C          800UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082930 1.2mm Temperature 180C                   1700UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082910 1.2mm Temperature 180C                   1200UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082930 1.2mm Temperature 180C                   1700UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082448 0.4mm Temperature 180C                     350UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Borolon 1.2mm Temperature 180C                              1200UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Oligocen 0.4mm Temperature 180C                               1200UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая термостойкая с силиконовым покрытием",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(10) {
				treeNode12, treeNode13, treeNode14, treeNode15, treeNode16, treeNode17,
					treeNode18, treeNode19, treeNode20, treeNode21
			}));
			System::Windows::Forms::TreeNode^ treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"Fibertex 500 0.4mm Temperature 310C                          1200UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"Fibertex 1000 0.9mm Temperature 310C                        1800UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"Chemiflex 14 0.4mm Temperature 310C                           980UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"440-1SC 0.4mm Temperature 310C                                  880UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"Fibertex 501 0.45mm Temperature 310C                        2000UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая термостойкая с PTFE покрытием",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) { treeNode23, treeNode24, treeNode25, treeNode26, treeNode27 }));
			System::Windows::Forms::TreeNode^ treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 12.5mm Temperature 550C                         200UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая иглопробивная термостойкая",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode29 }));
			System::Windows::Forms::TreeNode^ treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"Пленка PTFE 0.2mm               350UAH/m^2 "));
			System::Windows::Forms::TreeNode^ treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"Net/Сетка Н/Ж  0.4mm                  350UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"GlassFabric steel 0.3mm        2200UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode34 = (gcnew System::Windows::Forms::TreeNode(L"Прочее", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode31,
					treeNode32, treeNode33
			}));
			System::Windows::Forms::TreeNode^ treeNode35 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glass 550 12,5mm Temperature <500C  250UAH/m^3"));
			System::Windows::Forms::TreeNode^ treeNode36 = (gcnew System::Windows::Forms::TreeNode(L"Ceramics 12mm Temperature <1000C 15000UAH/m^3"));
			System::Windows::Forms::TreeNode^ treeNode37 = (gcnew System::Windows::Forms::TreeNode(L"Ceramics 25mm Temperature <1000C 9000UAH/m^3"));
			System::Windows::Forms::TreeNode^ treeNode38 = (gcnew System::Windows::Forms::TreeNode(L"Ceramics 50mm Temperature <1000C 7000UAH/m^3"));
			System::Windows::Forms::TreeNode^ treeNode39 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая иглопробивная термостойкая",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) { treeNode35, treeNode36, treeNode37, treeNode38 }));
			System::Windows::Forms::TreeNode^ treeNode40 = (gcnew System::Windows::Forms::TreeNode(L"Внтуренняя часть(м^3)", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode39 }));
			System::Windows::Forms::TreeNode^ treeNode41 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 1mm Temperature 550C                 300UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode42 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 2mm Temperature 550C                 450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode43 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 3mm Temperature 550C                 850UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode44 = (gcnew System::Windows::Forms::TreeNode(L"Iso Therm 800 2mm Temperature 800C                           800UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode45 = (gcnew System::Windows::Forms::TreeNode(L"Ceramics HT 1000 3mm Temperature 1050C                450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode46 = (gcnew System::Windows::Forms::TreeNode(L"TXG 2361 1.2mm Temperature 1050C                           1400UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode47 = (gcnew System::Windows::Forms::TreeNode(L"TKT 1000 1.2mm Temperature 1050C                             450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode48 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая термостойкая", gcnew cli::array< System::Windows::Forms::TreeNode^  >(7) {
				treeNode41,
					treeNode42, treeNode43, treeNode44, treeNode45, treeNode46, treeNode47
			}));
			System::Windows::Forms::TreeNode^ treeNode49 = (gcnew System::Windows::Forms::TreeNode(L"Внешняя часть(м^2)", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode48 }));
			System::Windows::Forms::TreeNode^ treeNode50 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 0.6mm Temperature 550C              250UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode51 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 1mm Temperature 550C                 300UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode52 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 2mm Temperature 550C                 450UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode53 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 550 W2000 3mm Temperature 550C                 850UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode54 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая термостойкая", gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode50,
					treeNode51, treeNode52, treeNode53
			}));
			System::Windows::Forms::TreeNode^ treeNode55 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082444-1EJ2 0.4mm Temperature 180C            460UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode56 = (gcnew System::Windows::Forms::TreeNode(L"Iso Glas 082444-1EJ1 0.4mm Temperature 180C            350UAH/m^2"));
			System::Windows::Forms::TreeNode^ treeNode57 = (gcnew System::Windows::Forms::TreeNode(L"Ткань техническая термостойкая с силиконовым покрытием",
				gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode55, treeNode56 }));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->treeView3 = (gcnew System::Windows::Forms::TreeView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->treeView4 = (gcnew System::Windows::Forms::TreeView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->свойстваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->конфигурацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьВИзбранноеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->избранноеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->checkBox1->FlatAppearance->BorderSize = 0;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(70, 78);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(94, 23);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Круглый";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::CheckBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->FlatAppearance->BorderSize = 0;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(70, 138);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(156, 23);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Прямоугольный";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::CheckBox2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(183, 221);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(25, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Форма :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(25, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Размер основной части :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(25, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Размер фланца:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(125, 355);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 20);
			this->textBox2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ImageKey = L"(none)";
			this->button1->Location = System::Drawing::Point(727, 634);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CalcForm::Button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Enabled = false;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(125, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Ширина";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Enabled = false;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(67, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Длина 1 стороны";
			this->label5->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(183, 252);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(92, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(465, 221);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(92, 20);
			this->textBox5->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Window;
			this->label8->Enabled = false;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label8->Location = System::Drawing::Point(349, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Длина 2 стороны";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(304, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 20);
			this->button2->TabIndex = 21;
			this->button2->Text = L"->";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CalcForm::Button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Window;
			this->label6->Enabled = false;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(117, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Диаметр";
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::Window;
			this->treeView1->CheckBoxes = true;
			this->treeView1->Enabled = false;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView1->HideSelection = false;
			this->treeView1->Location = System::Drawing::Point(606, 37);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node1";
			treeNode1->Tag = L"250";
			treeNode1->Text = L"Iso Glas 550 W2000 0.6mm Temperature 550C              250UAH/m^2";
			treeNode2->Name = L"Node2";
			treeNode2->Tag = L"300";
			treeNode2->Text = L"Iso Glas 550 W2000 1mm Temperature 550C                 300UAH/m^2";
			treeNode3->Name = L"Node4";
			treeNode3->Tag = L"850";
			treeNode3->Text = L"Iso Glas 550 W2000 3mm Temperature 550C                 850UAH/m^2";
			treeNode4->Name = L"Node5";
			treeNode4->Tag = L"960";
			treeNode4->Text = L"Kevlar 1mm Temperature 400C                                     960UAH/m^2";
			treeNode5->Name = L"Node6";
			treeNode5->Tag = L"800";
			treeNode5->Text = L"Iso Therm 800 2mm Temperature 800C                           800UAH/m^2";
			treeNode6->Name = L"Node8";
			treeNode6->Tag = L"1400";
			treeNode6->Text = L"TXG 2361 1.2mm Temperature 1050C                           1400UAH/m^2";
			treeNode7->Name = L"Node9";
			treeNode7->Tag = L"450";
			treeNode7->Text = L"TKT 1000 1.2mm Temperature 1050C                             450UAH/m^2";
			treeNode8->Name = L"Node3";
			treeNode8->Tag = L"450";
			treeNode8->Text = L"Iso Glas 550 W2000 2mm Temperature 550C                 450UAH/m^2";
			treeNode9->Name = L"Node7";
			treeNode9->Tag = L"450";
			treeNode9->Text = L"Ceramics HT 1000 3mm Temperature 1050C                450UAH/m^2";
			treeNode10->Name = L"Узел0";
			treeNode10->Text = L"Проверка";
			treeNode11->Name = L"Node1";
			treeNode11->Text = L"Ткань техническая термостойкая";
			treeNode12->Name = L"Node1";
			treeNode12->Tag = L"700";
			treeNode12->Text = L"Iso Glas 082442-1EJ1 0.6mm Temperature 180C            700UAH/m^2";
			treeNode13->Name = L"Node2";
			treeNode13->Tag = L"460";
			treeNode13->Text = L"Iso Glas 082444-1EJ2 0.4mm Temperature 180C            460UAH/m^2";
			treeNode14->Name = L"Node3";
			treeNode14->Tag = L"350";
			treeNode14->Text = L"Iso Glas 082444-1EJ1 0.4mm Temperature 180C            350UAH/m^2";
			treeNode15->Name = L"Node4";
			treeNode15->Tag = L"800";
			treeNode15->Text = L"Iso Glas 082620-0EJ2 0.75mm Temperature 180C          800UAH/m^2";
			treeNode16->Name = L"Node5";
			treeNode16->Tag = L"1700";
			treeNode16->Text = L"Iso Glas 082930 1.2mm Temperature 180C                   1700UAH/m^2";
			treeNode17->Name = L"Node6";
			treeNode17->Tag = L"1200";
			treeNode17->Text = L"Iso Glas 082910 1.2mm Temperature 180C                   1200UAH/m^2";
			treeNode18->Name = L"Node7";
			treeNode18->Tag = L"1700";
			treeNode18->Text = L"Iso Glas 082930 1.2mm Temperature 180C                   1700UAH/m^2";
			treeNode19->Name = L"Node8";
			treeNode19->Tag = L"350";
			treeNode19->Text = L"Iso Glas 082448 0.4mm Temperature 180C                     350UAH/m^2";
			treeNode20->Name = L"Node9";
			treeNode20->Tag = L"1200";
			treeNode20->Text = L"Borolon 1.2mm Temperature 180C                              1200UAH/m^2";
			treeNode21->Name = L"Node10";
			treeNode21->Tag = L"1200";
			treeNode21->Text = L"Oligocen 0.4mm Temperature 180C                               1200UAH/m^2";
			treeNode22->Name = L"Node6";
			treeNode22->Text = L"Ткань техническая термостойкая с силиконовым покрытием";
			treeNode23->Name = L"Node1";
			treeNode23->Tag = L"1200";
			treeNode23->Text = L"Fibertex 500 0.4mm Temperature 310C                          1200UAH/m^2";
			treeNode24->Name = L"Node2";
			treeNode24->Tag = L"1800";
			treeNode24->Text = L"Fibertex 1000 0.9mm Temperature 310C                        1800UAH/m^2";
			treeNode25->Name = L"Node3";
			treeNode25->Tag = L"980";
			treeNode25->Text = L"Chemiflex 14 0.4mm Temperature 310C                           980UAH/m^2";
			treeNode26->Name = L"Node4";
			treeNode26->Tag = L"880";
			treeNode26->Text = L"440-1SC 0.4mm Temperature 310C                                  880UAH/m^2";
			treeNode27->Name = L"Node5";
			treeNode27->Tag = L"2000";
			treeNode27->Text = L"Fibertex 501 0.45mm Temperature 310C                        2000UAH/m^2";
			treeNode28->Name = L"Node2";
			treeNode28->Text = L"Ткань техническая термостойкая с PTFE покрытием";
			treeNode29->Name = L"Node1";
			treeNode29->Tag = L"200";
			treeNode29->Text = L"Iso Glas 550 12.5mm Temperature 550C                         200UAH/m^2";
			treeNode30->Name = L"Node3";
			treeNode30->Text = L"Ткань техническая иглопробивная термостойкая";
			treeNode31->Name = L"Node5";
			treeNode31->Tag = L"350";
			treeNode31->Text = L"Пленка PTFE 0.2mm               350UAH/m^2 ";
			treeNode32->Name = L"Node4";
			treeNode32->Tag = L"350";
			treeNode32->Text = L"Net/Сетка Н/Ж  0.4mm                  350UAH/m^2";
			treeNode33->Name = L"Node0";
			treeNode33->Tag = L"2200";
			treeNode33->Text = L"GlassFabric steel 0.3mm        2200UAH/m^2";
			treeNode34->Name = L"Node1";
			treeNode34->Text = L"Прочее";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode11, treeNode22, treeNode28,
					treeNode30, treeNode34
			});
			this->treeView1->ShowLines = false;
			this->treeView1->ShowNodeToolTips = true;
			this->treeView1->ShowPlusMinus = false;
			this->treeView1->Size = System::Drawing::Size(412, 124);
			this->treeView1->TabIndex = 23;
			this->treeView1->AfterCheck += gcnew System::Windows::Forms::TreeViewEventHandler(this, &CalcForm::TreeView1_AfterCheck);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Enabled = false;
			this->checkBox3->FlatAppearance->BorderSize = 0;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(295, 78);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(118, 23);
			this->checkBox3->TabIndex = 24;
			this->checkBox3->Text = L"Фланцевый";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::CheckBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Enabled = false;
			this->checkBox4->FlatAppearance->BorderSize = 0;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(295, 138);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(116, 23);
			this->checkBox4->TabIndex = 25;
			this->checkBox4->Text = L"Ленточный";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::CheckBox4_CheckedChanged);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Enabled = false;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->Location = System::Drawing::Point(67, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Ширина";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Window;
			this->label10->Enabled = false;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label10->Location = System::Drawing::Point(314, 309);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Коэффициент";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(430, 306);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(92, 20);
			this->textBox4->TabIndex = 27;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold));
			this->textBox7->Location = System::Drawing::Point(894, 634);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(124, 51);
			this->textBox7->TabIndex = 28;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox5->Enabled = false;
			this->checkBox5->FlatAppearance->BorderSize = 0;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(408, 309);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(12, 11);
			this->checkBox5->TabIndex = 29;
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::CheckBox5_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(430, 341);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(56, 20);
			this->textBox6->TabIndex = 30;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Window;
			this->label9->Enabled = false;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label9->Location = System::Drawing::Point(367, 344);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Силикон";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox6->Enabled = false;
			this->checkBox6->FlatAppearance->BorderSize = 0;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(465, 113);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(100, 23);
			this->checkBox6->TabIndex = 32;
			this->checkBox6->Text = L"Вкладыш";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::CheckBox6_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->Enabled = false;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(25, 523);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(162, 19);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Размер вкладыша :";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Window;
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(206, 571);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(92, 20);
			this->textBox8->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Enabled = false;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label12->Location = System::Drawing::Point(431, 574);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 13);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Высота";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Window;
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(206, 602);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(92, 20);
			this->textBox9->TabIndex = 37;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Window;
			this->label13->Enabled = false;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label13->Location = System::Drawing::Point(90, 574);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 13);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Длина 1 стороны";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Window;
			this->label14->Enabled = false;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label14->Location = System::Drawing::Point(148, 605);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 13);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Ширина";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(488, 571);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(92, 20);
			this->textBox10->TabIndex = 34;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(488, 606);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(92, 20);
			this->textBox11->TabIndex = 41;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Window;
			this->label15->Enabled = false;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label15->Location = System::Drawing::Point(362, 609);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 13);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Ширина Крепления";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Window;
			this->label16->Enabled = false;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(25, 403);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(228, 19);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Работа за  основную часть :";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Window;
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold));
			this->textBox12->Location = System::Drawing::Point(269, 398);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(130, 33);
			this->textBox12->TabIndex = 43;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Window;
			this->textBox13->Enabled = false;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold));
			this->textBox13->Location = System::Drawing::Point(247, 652);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(130, 33);
			this->textBox13->TabIndex = 45;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Window;
			this->label17->Enabled = false;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(25, 653);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(171, 19);
			this->label17->TabIndex = 44;
			this->label17->Text = L"Работа за вкладыш :";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Window;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(430, 653);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 33);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Создать файл на печать";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CalcForm::Button3_Click);
			// 
			// treeView2
			// 
			this->treeView2->BackColor = System::Drawing::SystemColors::Window;
			this->treeView2->CheckBoxes = true;
			this->treeView2->Enabled = false;
			this->treeView2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView2->Location = System::Drawing::Point(606, 423);
			this->treeView2->Name = L"treeView2";
			treeNode35->Name = L"Node1";
			treeNode35->Tag = L"250";
			treeNode35->Text = L"Iso Glass 550 12,5mm Temperature <500C  250UAH/m^3";
			treeNode36->Name = L"Node3";
			treeNode36->Tag = L"15000";
			treeNode36->Text = L"Ceramics 12mm Temperature <1000C 15000UAH/m^3";
			treeNode37->Name = L"Node4";
			treeNode37->Tag = L"9000";
			treeNode37->Text = L"Ceramics 25mm Temperature <1000C 9000UAH/m^3";
			treeNode38->Name = L"Node5";
			treeNode38->Tag = L"7000";
			treeNode38->Text = L"Ceramics 50mm Temperature <1000C 7000UAH/m^3";
			treeNode39->Checked = true;
			treeNode39->Name = L"Node2";
			treeNode39->Text = L"Ткань техническая иглопробивная термостойкая";
			treeNode40->Name = L"Node0";
			treeNode40->Text = L"Внтуренняя часть(м^3)";
			treeNode41->Name = L"Node6";
			treeNode41->Tag = L"300";
			treeNode41->Text = L"Iso Glas 550 W2000 1mm Temperature 550C                 300UAH/m^2";
			treeNode42->Name = L"Node7";
			treeNode42->Tag = L"450";
			treeNode42->Text = L"Iso Glas 550 W2000 2mm Temperature 550C                 450UAH/m^2";
			treeNode43->Name = L"Node8";
			treeNode43->Tag = L"850";
			treeNode43->Text = L"Iso Glas 550 W2000 3mm Temperature 550C                 850UAH/m^2";
			treeNode44->Name = L"Node7";
			treeNode44->Tag = L"800";
			treeNode44->Text = L"Iso Therm 800 2mm Temperature 800C                           800UAH/m^2";
			treeNode45->Name = L"Node9";
			treeNode45->Tag = L"450";
			treeNode45->Text = L"Ceramics HT 1000 3mm Temperature 1050C                450UAH/m^2";
			treeNode46->Name = L"Node10";
			treeNode46->Tag = L"1400";
			treeNode46->Text = L"TXG 2361 1.2mm Temperature 1050C                           1400UAH/m^2";
			treeNode47->Name = L"Node11";
			treeNode47->Tag = L"450";
			treeNode47->Text = L"TKT 1000 1.2mm Temperature 1050C                             450UAH/m^2";
			treeNode48->Checked = true;
			treeNode48->Name = L"Node5";
			treeNode48->Text = L"Ткань техническая термостойкая";
			treeNode49->Name = L"Node0";
			treeNode49->Text = L"Внешняя часть(м^2)";
			this->treeView2->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode40, treeNode49 });
			this->treeView2->ShowLines = false;
			this->treeView2->ShowPlusMinus = false;
			this->treeView2->ShowRootLines = false;
			this->treeView2->Size = System::Drawing::Size(412, 176);
			this->treeView2->TabIndex = 48;
			this->treeView2->AfterCheck += gcnew System::Windows::Forms::TreeViewEventHandler(this, &CalcForm::TreeView2_AfterCheck);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Window;
			this->label19->Enabled = false;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label19->Location = System::Drawing::Point(27, 453);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(85, 13);
			this->label19->TabIndex = 50;
			this->label19->Text = L"Температура";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Window;
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(125, 450);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(39, 20);
			this->textBox14->TabIndex = 51;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Window;
			this->label20->Enabled = false;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label20->Location = System::Drawing::Point(27, 486);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(92, 13);
			this->label20->TabIndex = 52;
			this->label20->Text = L"Номер заказа";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::Window;
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(125, 483);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(39, 20);
			this->textBox15->TabIndex = 53;
			// 
			// treeView3
			// 
			this->treeView3->BackColor = System::Drawing::SystemColors::Window;
			this->treeView3->CheckBoxes = true;
			this->treeView3->Enabled = false;
			this->treeView3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView3->Location = System::Drawing::Point(606, 252);
			this->treeView3->Name = L"treeView3";
			treeNode50->Name = L"Node1";
			treeNode50->Tag = L"250";
			treeNode50->Text = L"Iso Glas 550 W2000 0.6mm Temperature 550C              250UAH/m^2";
			treeNode51->Name = L"Node2";
			treeNode51->Tag = L"300";
			treeNode51->Text = L"Iso Glas 550 W2000 1mm Temperature 550C                 300UAH/m^2";
			treeNode52->Name = L"Node3";
			treeNode52->Tag = L"450";
			treeNode52->Text = L"Iso Glas 550 W2000 2mm Temperature 550C                 450UAH/m^2";
			treeNode53->Name = L"Node4";
			treeNode53->Tag = L"850";
			treeNode53->Text = L"Iso Glas 550 W2000 3mm Temperature 550C                 850UAH/m^2";
			treeNode54->Name = L"Node0";
			treeNode54->Text = L"Ткань техническая термостойкая";
			treeNode55->Name = L"Node6";
			treeNode55->Tag = L"460";
			treeNode55->Text = L"Iso Glas 082444-1EJ2 0.4mm Temperature 180C            460UAH/m^2";
			treeNode56->Name = L"Node7";
			treeNode56->Tag = L"350";
			treeNode56->Text = L"Iso Glas 082444-1EJ1 0.4mm Temperature 180C            350UAH/m^2";
			treeNode57->Name = L"Node5";
			treeNode57->Text = L"Ткань техническая термостойкая с силиконовым покрытием";
			this->treeView3->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode54, treeNode57 });
			this->treeView3->ShowLines = false;
			this->treeView3->ShowPlusMinus = false;
			this->treeView3->ShowRootLines = false;
			this->treeView3->Size = System::Drawing::Size(412, 149);
			this->treeView3->TabIndex = 54;
			this->treeView3->AfterCheck += gcnew System::Windows::Forms::TreeViewEventHandler(this, &CalcForm::TreeView3_AfterCheck);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Window;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(606, 190);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button4->Size = System::Drawing::Size(100, 48);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Выбор количества слоев";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CalcForm::Button4_Click);
			// 
			// treeView4
			// 
			this->treeView4->BackColor = System::Drawing::SystemColors::Window;
			this->treeView4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->treeView4->Location = System::Drawing::Point(606, 37);
			this->treeView4->Name = L"treeView4";
			this->treeView4->ShowPlusMinus = false;
			this->treeView4->ShowRootLines = false;
			this->treeView4->Size = System::Drawing::Size(412, 124);
			this->treeView4->TabIndex = 56;
			this->treeView4->Visible = false;
			this->treeView4->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &CalcForm::TreeView4_AfterSelect);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Window;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(606, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 48);
			this->button5->TabIndex = 57;
			this->button5->Text = L"Выбор материалов";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &CalcForm::Button5_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Window;
			this->label22->Enabled = false;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label22->Location = System::Drawing::Point(849, 210);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(72, 13);
			this->label22->TabIndex = 59;
			this->label22->Text = L"Кол. слоев";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::Window;
			this->textBox16->Enabled = false;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->textBox16->Location = System::Drawing::Point(936, 207);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(26, 20);
			this->textBox16->TabIndex = 60;
			this->textBox16->Enter += gcnew System::EventHandler(this, &CalcForm::TextBox16_Enter);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Window;
			this->button6->Enabled = false;
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(968, 207);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 20);
			this->button6->TabIndex = 62;
			this->button6->Text = L"Ввод";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &CalcForm::TextBox16_Enter);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Window;
			this->button7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(584, 652);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 34);
			this->button7->TabIndex = 63;
			this->button7->Text = L"На стартовую";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &CalcForm::button7_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::Window;
			this->label21->Location = System::Drawing::Point(803, 184);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 64;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Window;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->settingsToolStripMenuItem,
					this->конфигурацияToolStripMenuItem, this->избранноеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1068, 24);
			this->menuStrip1->TabIndex = 65;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->свойстваToolStripMenuItem });
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->settingsToolStripMenuItem->Text = L"Настройки";
			// 
			// свойстваToolStripMenuItem
			// 
			this->свойстваToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->свойстваToolStripMenuItem->Name = L"свойстваToolStripMenuItem";
			this->свойстваToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->свойстваToolStripMenuItem->Text = L"Свойства";
			this->свойстваToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::свойстваToolStripMenuItem_Click);
			// 
			// конфигурацияToolStripMenuItem
			// 
			this->конфигурацияToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->конфигурацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->загрузитьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->добавитьВИзбранноеToolStripMenuItem
			});
			this->конфигурацияToolStripMenuItem->Name = L"конфигурацияToolStripMenuItem";
			this->конфигурацияToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->конфигурацияToolStripMenuItem->Text = L"Конфигурация";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::загрузитьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// добавитьВИзбранноеToolStripMenuItem
			// 
			this->добавитьВИзбранноеToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->добавитьВИзбранноеToolStripMenuItem->Name = L"добавитьВИзбранноеToolStripMenuItem";
			this->добавитьВИзбранноеToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->добавитьВИзбранноеToolStripMenuItem->Text = L"Добавить в \"Избранное\"";
			// 
			// избранноеToolStripMenuItem
			// 
			this->избранноеToolStripMenuItem->Name = L"избранноеToolStripMenuItem";
			this->избранноеToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->избранноеToolStripMenuItem->Text = L"Избранное";
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Tag = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1068, 723);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->treeView3);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->treeView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->treeView4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CalcForm";
			this->Text = L"New Config - Calculator ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}




#pragma endregion
		double  S1, Sflange, pi, index, silicone, work, workadd, material, CountPNodes, CountNodes, i, n, iAdd, iAdd2, TotalSpendingMaterials, TotalSpendingMaterialsAdd, cost;
		int tvN, p, a, ArrN, ArrN1, ArrN2, ArrNAdd;

		String^ result;
		String^ outputSize;

	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->Checked == true)
		{
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;

			textBox4->Text = "";

			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox5->Enabled = true;
			textBox5->Visible = false;
			textBox6->Enabled = true;
			textBox14->Enabled = true;
			textBox15->Enabled = true;

			button2->Enabled = true;
			button2->Visible = false;

			label2->Enabled = true;
			label3->Enabled = true;
			label4->Enabled = true;
			label5->Enabled = true;
			label5->Visible = false;
			label6->Enabled = true;
			label6->Visible = true;
			label7->Enabled = true;
			label8->Enabled = true;
			label8->Visible = false;
			label9->Enabled = true;
			label10->Enabled = true;
			label19->Enabled = true;
			label20->Enabled = true;

			checkBox3->Enabled = true;
			checkBox4->Enabled = true;
			checkBox5->Enabled = true;
		}
		else if (checkBox1->Checked == false)
		{
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;

			textBox4->Text = "";

			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			textBox5->Visible = true;
			textBox6->Enabled = false;
			textBox14->Enabled = false;
			textBox15->Enabled = false;

			button2->Enabled = false;
			button2->Visible = true;

			label2->Enabled = false;
			label3->Enabled = false;
			label4->Enabled = false;
			label5->Enabled = false;
			label5->Visible = true;
			label6->Enabled = false;
			label6->Visible = false;
			label7->Enabled = false;
			label8->Enabled = false;
			label8->Visible = true;
			label9->Enabled = false;
			label10->Enabled = false;
			label19->Enabled = false;
			label20->Enabled = false;

			checkBox3->Enabled = false;
			checkBox4->Enabled = false;
			checkBox5->Enabled = false;






		}
	}
	private: System::Void CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox2->Checked == true)
		{
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;

			textBox4->Text = "";

			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox5->Enabled = true;
			textBox5->Visible = true;
			textBox6->Enabled = true;
			textBox14->Enabled = true;
			textBox15->Enabled = true;

			label2->Enabled = true;
			label3->Enabled = true;
			label4->Enabled = true;
			label4->Visible = true;
			label5->Enabled = true;
			label5->Visible = true;
			label6->Enabled = false;
			label6->Visible = false;
			label7->Enabled = true;
			label8->Enabled = true;
			label8->Visible = true;
			label9->Enabled = true;
			label10->Enabled = true;
			label19->Enabled = true;
			label20->Enabled = true;

			button2->Enabled = true;
			button2->Visible = true;


			checkBox3->Enabled = true;
			checkBox4->Enabled = true;
			checkBox5->Enabled = true;
		}
		else if (checkBox2->Checked == false)
		{
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;

			textBox4->Text = "";

			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			textBox5->Visible = false;
			textBox6->Enabled = false;
			textBox14->Enabled = false;
			textBox15->Enabled = false;

			label2->Enabled = false;
			label3->Enabled = false;
			label4->Enabled = false;
			label4->Visible = true;
			label5->Enabled = false;
			label5->Visible = false;
			label6->Enabled = false;
			label6->Visible = true;
			label7->Enabled = false;
			label8->Enabled = false;
			label8->Visible = false;
			label9->Enabled = false;
			label10->Enabled = false;
			label19->Enabled = false;
			label20->Enabled = false;

			button2->Enabled = false;
			button2->Visible = false;


			checkBox3->Enabled = false;
			checkBox4->Enabled = false;
			checkBox5->Enabled = false;



		}
	}

	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double length;


		try
		{
			length = System::Convert::ToDouble(textBox1->Text);
		}
		catch (FormatException^)
		{
			textBox1->BackColor = Color::FromArgb(255, 192, 192);
		}

		textBox5->Text = System::Convert::ToString(length);

	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		cost = 0;

		try
		{
			index = System::Convert::ToDouble(textBox4->Text);
		}
		catch (FormatException^)
		{
			textBox4->BackColor = Color::FromArgb(255, 192, 192);
		}



		const double pi = 3.14159;
		ArrN1 = 0;
		ArrNAdd = 0;
		double materials[30] = {};
		double materialsFlange[30] = {};
		double materialsAddOutside[15] = {};
		double materialsAddInside[15] = {};
		TotalSpendingMaterials = 0;
		TotalSpendingMaterialsAdd = 0;


		CountPNodes = treeView1->GetNodeCount(false);
		for (i = 0; i < CountPNodes; ++i)
		{
			if (treeView1->Nodes[i]->Checked == true)
			{
				CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
				for (n = 0; n < CountNodes; ++n)
				{
					if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
					{

						if (treeView1->Nodes[i]->Nodes[n]->ToolTipText != "")
						{

							materials[ArrN1] = System::Convert::ToDouble(treeView1->Nodes[i]->Nodes[n]->Tag) * System::Convert::ToDouble(treeView1->Nodes[i]->Nodes[n]->ToolTipText);

							++ArrN1;


						}
						else if (treeView1->Nodes[i]->Nodes[n]->ToolTipText == "")
						{

							materials[ArrN1] = System::Convert::ToDouble(treeView1->Nodes[i]->Nodes[n]->Tag);

							++ArrN1;

						}

					}


				}


			}

		}
		ArrN2 = 0;
		CountPNodes = treeView3->GetNodeCount(false);
		for (i = 0; i < CountPNodes; ++i)
		{
			if (treeView3->Nodes[i]->Checked == true)
			{
				CountNodes = treeView3->Nodes[i]->GetNodeCount(true);
				for (n = 0; n < CountNodes; ++n)
				{
					if (treeView3->Nodes[i]->Nodes[n]->Checked == true)
					{
						if (treeView3->Nodes[i]->Nodes[n]->ToolTipText != "")
						{
							materialsFlange[ArrN2] = System::Convert::ToDouble(treeView3->Nodes[i]->Nodes[n]->Tag);


						}
						else
						{
							materialsFlange[ArrN2] = System::Convert::ToDouble(treeView3->Nodes[i]->Nodes[n]->Tag);


						}
						++ArrN2;
					}


				}


			}

		}



		if (checkBox1->Checked == true)
		{



			double  diameter, width, widthflange;

			try
			{
				diameter = System::Convert::ToDouble(textBox1->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox1->BackColor = Color::FromArgb(255, 192, 192);
			}

			try
			{
				width = System::Convert::ToDouble(textBox3->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox3->BackColor = Color::FromArgb(255, 192, 192);
			}

			try
			{
				widthflange = System::Convert::ToDouble(textBox2->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox2->BackColor = Color::FromArgb(255, 192, 192);
			}











			if (checkBox3->Checked == true)
			{

				S1 = diameter * pi * (width + 2 * widthflange);
				Sflange = diameter * pi * 2 * 2 * widthflange;

			}
			if (checkBox4->Checked == true)
			{
				S1 = diameter * pi * width;
				Sflange = diameter * pi * 2 * 2 * widthflange;
			}





			for (a = 0; a < ArrN1; ++a)
			{
				TotalSpendingMaterials += materials[a] * S1 * index;

			}
			for (p = 0; p < ArrN2; ++p)
			{
				TotalSpendingMaterials += Sflange * materialsFlange[p];
			}
			outputSize = System::Convert::ToString(diameter + "*" + width);
		}
		//  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//																														//						
		//																														//
		//																														//
		//																														//
		//																														//
		//  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (checkBox2->Checked == true)
		{



			double  length1, length2, width, widthflange;
			try
			{
				length1 = System::Convert::ToDouble(textBox1->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox1->BackColor = Color::FromArgb(255, 192, 192);
			}

			try
			{
				length2 = System::Convert::ToDouble(textBox5->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox5->BackColor = Color::FromArgb(255, 192, 192);
			}

			try
			{
				width = System::Convert::ToDouble(textBox3->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox3->BackColor = Color::FromArgb(255, 192, 192);
			}

			try
			{
				widthflange = System::Convert::ToDouble(textBox2->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox2->BackColor = Color::FromArgb(255, 192, 192);
			}



			if (checkBox3->Checked == true)
			{
				S1 = (length1 + length2) * 2 * (width + 2 * widthflange);
				Sflange = ((length1 + 2 * widthflange) + length2) * 2 * 2 * widthflange;
			}
			if (checkBox4->Checked == true)
			{
				S1 = (length1 + length2) * 2 * width;
				Sflange = ((length1 + 2 * widthflange) + length2) * 2 * 2 * widthflange;
			}
			for (a = 0; a < ArrN1; ++a)
			{
				TotalSpendingMaterials += materials[a] * S1 * index;

			}
			for (p = 0; p < ArrN2; ++p)
			{
				TotalSpendingMaterials += Sflange * materialsFlange[p];
			}
			outputSize = System::Convert::ToString(length1 + "*"+ length2 + "*" + width);

		};


		if (checkBox6->Checked == true)

		{
			double workadd, widthadd, lengthadd1, height, lengthAddEars, SAdd, VAdd;

			try
			{
				lengthadd1 = System::Convert::ToDouble(textBox8->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox8->BackColor = Color::FromArgb(255, 192, 192);
			}


			try
			{
				height = System::Convert::ToDouble(textBox10->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox10->BackColor = Color::FromArgb(255, 192, 192);
			}


			try
			{
				widthadd = System::Convert::ToDouble(textBox9->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox9->BackColor = Color::FromArgb(255, 192, 192);
			}


			try
			{
				workadd = System::Convert::ToDouble(textBox13->Text);
			}
			catch (FormatException^)
			{
				textBox13->BackColor = Color::FromArgb(255, 192, 192);;
			}



			try
			{
				lengthAddEars = System::Convert::ToDouble(textBox11->Text) / 1000;
			}
			catch (FormatException^)
			{
				textBox11->BackColor = Color::FromArgb(255, 224, 192);
				lengthAddEars = 0;
			}

			ArrNAdd = 0;
			SAdd = (lengthadd1 * 2 + height * 2 + lengthAddEars * 4) * widthadd;
			VAdd = lengthadd1 * height * widthadd;

			CountNodes = treeView2->Nodes[0]->Nodes[0]->GetNodeCount(false);
			for (iAdd = 0; iAdd < CountNodes; ++iAdd)
			{
				if (treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Checked == true)
				{
					materialsAddInside[ArrNAdd] = System::Convert::ToDouble(treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Tag);
					++ArrNAdd;
				}
			}

			ArrNAdd = 0;
			CountNodes = treeView2->Nodes[1]->Nodes[0]->GetNodeCount(false);
			for (iAdd2 = 0; iAdd2 < CountNodes; ++iAdd2)
			{
				if (treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd2]->Checked == true)
				{
					materialsAddOutside[ArrNAdd] = System::Convert::ToDouble(treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd2]->Tag);

					++ArrNAdd;
				}
			}



			for (a = 0; a < ArrNAdd; ++a)
			{
				TotalSpendingMaterialsAdd += materialsAddInside[a] * SAdd + VAdd * materialsAddOutside[a];
			}


		}
		else if (checkBox6->Checked == false)
		{
			TotalSpendingMaterialsAdd = 0;
			workadd = 0;
		}



		try
		{
			silicone = System::Convert::ToDouble(textBox6->Text) * 130;
		}
		catch (FormatException^)
		{
			textBox6->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			work = System::Convert::ToDouble(textBox12->Text);
		}
		catch (FormatException^)
		{
			textBox12->BackColor = Color::FromArgb(255, 192, 192);
		}

		if (textBox1->Text != "")
		{
			textBox1->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox2->Text != "")
		{
			textBox2->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox3->Text != "")
		{
			textBox3->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox4->Text != "")
		{
			textBox4->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox5->Text != "")
		{
			textBox5->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox6->Text != "")
		{
			textBox6->BackColor = Color::FromArgb(192, 255, 192);
		}

		if (textBox8->Text != "")
		{
			textBox8->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox9->Text != "")
		{
			textBox9->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox10->Text != "")
		{
			textBox10->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox11->Text != "")
		{
			textBox11->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox12->Text != "")
		{
			textBox12->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox13->Text != "")
		{
			textBox13->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox14->Text != "")
		{
			textBox14->BackColor = Color::FromArgb(192, 255, 192);
		}
		if (textBox15->Text != "")
		{
			textBox15->BackColor = Color::FromArgb(192, 255, 192);
		}







		cost = work + silicone + TotalSpendingMaterials + TotalSpendingMaterialsAdd + workadd;
		cost = (ceil(cost / 100)) * 100;

		textBox7->Text = System::Convert::ToString(cost);
	};



		   //  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   //																														//						
		   //																														//
		   //																														//
		   //																														//
		   //																														//
		   //  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void CheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox5->Checked == true)
		{
			textBox4->Enabled = true;
		}
		else if (checkBox5->Checked == false)
		{
			textBox4->Enabled = false;
		}
	}

		   ///////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void CheckBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{

		if (checkBox3->Checked == true)
		{

			double index;

			checkBox4->Checked = false;
			checkBox6->Enabled = false;
			checkBox6->Checked = false;

			label16->Enabled = true;
			label19->Enabled = true;
			label20->Enabled = true;
			label22->Enabled = true;

			textBox12->Enabled = true;
			textBox14->Enabled = true;
			textBox15->Enabled = true;
			textBox16->Enabled = true;

			button4->Enabled = true;
			button6->Enabled = true;

			treeView1->Enabled = true;
			treeView3->Enabled = true;

			if (checkBox1->Checked == true)
			{
				index = 1.2;
				textBox4->Text = System::Convert::ToString(index);
			}
			else if (checkBox2->Checked == true)
			{
				index = 1.1;
				textBox4->Text = System::Convert::ToString(index);
			}
		}
		else if (checkBox3->Checked == false)
		{

			label19->Enabled = false;
			label20->Enabled = false;
			label22->Enabled = false;

			textBox12->Enabled = false;
			textBox14->Enabled = false;
			textBox15->Enabled = false;
			textBox16->Enabled = false;

			button4->Enabled = false;
			button6->Enabled = false;

			treeView1->Enabled = false;
			treeView3->Enabled = false;
		}




	}

	private: System::Void CheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{

		if (checkBox4->Checked == true)
		{

			double index;

			checkBox3->Checked = false;

			checkBox6->Enabled = true;

			label16->Enabled = true;
			label19->Enabled = true;
			label20->Enabled = true;
			label22->Enabled = true;

			textBox12->Enabled = true;
			textBox14->Enabled = true;
			textBox15->Enabled = true;
			textBox16->Enabled = true;

			button4->Enabled = true;
			button6->Enabled = true;

			treeView1->Enabled = true;
			treeView3->Enabled = true;

			if (checkBox1->Checked == true)
			{
				index = 1.15;
				textBox4->Text = System::Convert::ToString(index);
			}
			else if (checkBox2->Checked == true)
			{
				index = 1.15;
				textBox4->Text = System::Convert::ToString(index);
			}
		}
		else if (checkBox4->Checked == false)
		{


			label19->Enabled = false;
			label20->Enabled = false;
			label22->Enabled = false;

			textBox12->Enabled = false;
			textBox14->Enabled = false;
			textBox15->Enabled = false;
			textBox16->Enabled = false;

			button4->Enabled = false;
			button6->Enabled = false;

			treeView1->Enabled = false;
			treeView3->Enabled = false;


		}


	}
		   /////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void CheckBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox6->Checked == true)
		{

			label11->Enabled = true;
			label12->Enabled = true;
			label13->Enabled = true;
			label14->Enabled = true;
			label15->Enabled = true;
			label17->Enabled = true;

			textBox8->Enabled = true;
			textBox9->Enabled = true;
			textBox10->Enabled = true;
			textBox11->Enabled = true;
			textBox13->Enabled = true;

			treeView2->Enabled = true;
		}
		else if (checkBox6->Checked == false)
		{
			label11->Enabled = false;
			label12->Enabled = false;
			label13->Enabled = false;
			label14->Enabled = false;
			label15->Enabled = false;
			label17->Enabled = false;

			textBox8->Enabled = false;
			textBox9->Enabled = false;
			textBox10->Enabled = false;
			textBox11->Enabled = false;
			textBox13->Enabled = false;
			treeView2->Enabled = false;
		}
	}





	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//system("mspaint");
		String^ temperature = textBox14->Text;
		string temperatureNew = msclr::interop::marshal_as<std::string>(temperature);


		String^ Onumber = textBox15->Text;
		string OnumberNew = msclr::interop::marshal_as<std::string>(Onumber);

		String^ outputSize = outputSize;
		string outputSizeNew = msclr::interop::marshal_as<std::string>(outputSize);

		ofstream wordpass;
		time_t t = time(0);
		tm* now = localtime(&t);

		String^ currentDesktop = System::Environment::GetEnvironmentVariable("USERPROFILE") + "\\Desktop" + "\\" + (now->tm_year + 1900) + "." + (now->tm_mon + 1) + "." + Onumber + ".txt";
		string currentDesktopNew = msclr::interop::marshal_as<std::string>(currentDesktop);

		wordpass.open(currentDesktopNew, ios::out, ios_base::binary);
		wordpass << "Order/Заказ  #" << (now->tm_year + 1900) << "/" << (now->tm_mon + 1) << "/" << OnumberNew << endl;
		wordpass << "_________________________________________________________________" << endl;
		wordpass << "Teperature/Температура: " << temperatureNew << "С" << endl;
		wordpass << "_________________________________________________________________" << endl;
		wordpass << "Size/Размеры " << outputSizeNew <<endl;

		int ArrN;
		ArrN = 1;
		wordpass << "Main Part Materials/Материалы основной части:" << endl;
		CountPNodes = treeView1->GetNodeCount(false);
		for (i = 0; i < CountPNodes; ++i)
		{
			if (treeView1->Nodes[i]->Checked == true)
			{
				CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
				for (n = 0; n < CountNodes; ++n)
				{
					if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
					{

						String^ material = treeView1->Nodes[i]->Nodes[n]->Text;
						string newMaterials = msclr::interop::marshal_as<std::string>(material);
						if (treeView1->Nodes[i]->Nodes[n]->ToolTipText != "")
						{

							String^ layer = treeView1->Nodes[i]->Nodes[n]->ToolTipText;
							string newlayer = msclr::interop::marshal_as<std::string>(layer);
							wordpass << " " << ArrN << ". " << newMaterials << "    Number of layers/Количество слоёв: " << newlayer << endl;
						}
						else
						{
							string newlayer = "1";
							wordpass << " " << ArrN << ". " << newMaterials << "    Number of layers/Количество слоёв: " << newlayer << endl;
						}
						++ArrN;




					}
				}
			}
		}

		wordpass << "Flange Materials/Материалы Фланца:" << endl;
		ArrN = 1;
		CountPNodes = treeView3->GetNodeCount(false);
		for (i = 0; i < CountPNodes; ++i)
		{
			if (treeView3->Nodes[i]->Checked == true)
			{
				CountNodes = treeView3->Nodes[i]->GetNodeCount(true);
				for (n = 0; n < CountNodes; ++n)
				{
					if (treeView3->Nodes[i]->Nodes[n]->Checked == true)
					{

						String^ material = treeView3->Nodes[i]->Nodes[n]->Text;
						string newMaterials = msclr::interop::marshal_as<std::string>(material);
						wordpass << " " << ArrN << ". " << newMaterials << endl;
						++ArrN;




					}
				}
			}
		}

		if (checkBox6->Checked == true)
		{
			ArrN = 1;
			wordpass << "Inner side materials/Материалы внутренней части:" << endl;
			CountNodes = treeView2->Nodes[0]->Nodes[0]->GetNodeCount(false);
			for (iAdd = 0; iAdd < CountNodes; ++iAdd)
			{
				if (treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Checked == true)
				{
					String^ materialAdd = treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Text;
					string newMaterialsAdd = msclr::interop::marshal_as<std::string>(materialAdd);
					wordpass << " " << ArrN << ". " << newMaterialsAdd << endl;
					++ArrN;
				}
			}
			wordpass << "External side materials/Материалы внешней части:" << endl;
			ArrN = 1;
			CountNodes = treeView2->Nodes[1]->Nodes[0]->GetNodeCount(false);
			for (iAdd2 = 0; iAdd2 < CountNodes; ++iAdd2)
			{
				if (treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd2]->Checked == true)
				{
					String^ materialAdd = treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd]->Text;
					string newMaterialsAdd = msclr::interop::marshal_as<std::string>(materialAdd);
					wordpass << " " << ArrN << ". " << newMaterialsAdd << endl;
					++ArrN;
				}
			}
		}
		String^ WorkMain = textBox12->Text;
		string WorkMainNew = msclr::interop::marshal_as<std::string>(WorkMain);
		String^ WorkAdd = textBox13->Text;
		string WorkAddNew = msclr::interop::marshal_as<std::string>(WorkAdd);
		wordpass << "_______________________________________________________________________" << endl;
		if (checkBox6->Checked == true)
		{
			wordpass << "Work/Работа\n" << "					 Main part: " << WorkMainNew << " UAH\n" << "					     Insert part: " << WorkAddNew << " UAH\n" << endl;
		}
		else
		{
			wordpass << "Work/Работа\n" << "					 Main part: " << WorkMainNew << " UAH\n" << endl;
		}
		wordpass << "					_____________________________________" << endl;
		String^ Total = textBox7->Text;
		string TotalNew = msclr::interop::marshal_as<std::string>(Total);
		wordpass << "					Total cost/Общая стоимость: " << TotalNew << " UAH\n" << endl;






		wordpass.close();


	}





	private: System::Void TreeView1_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
	{
		for (tvN = 0; tvN < 5; ++tvN)
		{
			treeView1->BeginUpdate();
			if (treeView1->Nodes[tvN]->Checked == true)
			{

				treeView1->Nodes[tvN]->Expand();

			}
			else if (treeView1->Nodes[tvN]->Checked == false)
			{
				treeView1->Nodes[tvN]->Collapse();
			}
			treeView1->EndUpdate();
		}


	}
	private: System::Void TreeView2_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
	{
		for (tvN = 0; tvN < 2; ++tvN)
		{
			treeView2->BeginUpdate();
			if (treeView2->Nodes[tvN]->Checked == true)
			{

				treeView2->Nodes[tvN]->Expand();

				treeView2->Nodes[tvN]->Nodes[0]->Expand();

			}
			else if (treeView1->Nodes[tvN]->Checked == false)
			{
				treeView2->Nodes[tvN]->Collapse();
				treeView2->Nodes[tvN]->Nodes[0]->Collapse();

			}
			treeView2->EndUpdate();
		}
	}

	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		treeView4->Nodes->Clear();
		treeView1->Visible = false;
		treeView4->Visible = true;
		button4->Visible = false;
		button5->Visible = true;

		int ArrN = 0;
		String^ materials;

		CountPNodes = treeView1->GetNodeCount(false);
		for (i = 0; i < CountPNodes; ++i)
		{
			if (treeView1->Nodes[i]->Checked == true)
			{
				CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
				for (n = 0; n < CountNodes; ++n)
				{
					if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
					{

						materials = treeView1->Nodes[i]->Nodes[n]->Text;


						TreeNode^ newNode = gcnew TreeNode(materials);
						treeView4->Nodes->Add(newNode);

					}


				}


			}

		}

	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		treeView1->Visible = true;
		treeView4->Visible = false;
		button4->Visible = true;
		button5->Visible = false;
	}


	private: System::Void TreeView4_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
	{

		label21->Text = treeView4->SelectedNode->Text;
	}




	private: System::Void TextBox16_Enter(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Layoutname = label21->Text;
		CountPNodes = treeView1->GetNodeCount(false);
		for (i = 0; i < CountPNodes; ++i)
		{
			if (treeView1->Nodes[i]->Checked == true)
			{
				CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
				for (n = 0; n < CountNodes; ++n)
				{
					if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
					{
						if (treeView1->Nodes[i]->Nodes[n]->Text == Layoutname)
						{
							treeView1->Nodes[i]->Nodes[n]->ToolTipText = System::Convert::ToString(textBox16->Text);

						}
					}
				}

			}
		}
	}
	private: System::Void TreeView3_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
	{
		for (tvN = 0; tvN < 2; ++tvN)
		{
			treeView3->BeginUpdate();
			if (treeView3->Nodes[tvN]->Checked == true)
			{

				treeView3->Nodes[tvN]->Expand();



			}
			else if (treeView3->Nodes[tvN]->Checked == false)
			{
				treeView3->Nodes[tvN]->Collapse();

			}
			treeView3->EndUpdate();
		}
	}
	private: System::Void label21_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		textBox16->Text = "";
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		CalcFormObj->Show();
	}

private: System::Void свойстваToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	
};
private: System::Void загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->Filter = "Config File|*.cfg";
	openFileDialog1->Title = "Open Config";
	openFileDialog1->ShowDialog();
	this->Text = openFileDialog1->FileName + " - Calculator";
}
private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveFileDialog1->CreatePrompt = true;
	saveFileDialog1->OverwritePrompt = true;
	saveFileDialog1->Filter ="Config File|*.cfg";
	saveFileDialog1->Title = "Save New Config";
	


	if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
		String^ filename = saveFileDialog1->FileName;
		StreamWriter^ sw = gcnew StreamWriter(filename);
		sw->WriteLine("");
		sw->Close();
		this->Text = saveFileDialog1->FileName + " - Calculator";
	
	}
}
};
};
