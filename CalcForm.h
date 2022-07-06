#pragma once
#pragma warning(disable : 4996)
#include "pch.h"
#include <chrono>
#include <ctime> 
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>


namespace CostCalculator {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace CostCalculator;
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
	private: System::Windows::Forms::CheckBox^ Circle_Check_box;
	private: System::Windows::Forms::CheckBox^ Rectangle_Check_box;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ Length1_textBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Flange_width_textBox;

	private: System::Windows::Forms::Button^ Calculate_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ Width_textBox;

	private: System::Windows::Forms::TextBox^ Length2_textBox;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ Set_second_length_same_button;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::CheckBox^ Flange_Check_box;
	private: System::Windows::Forms::CheckBox^ Tape_Check_box;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ coefficient_textBox;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::CheckBox^ Index_Check_box;
	private: System::Windows::Forms::TextBox^ Silicone_textBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ Insert_Check_box;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Insert_Length1_textBox;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ Insert_width_textBox;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Insert_height_textBox;
	private: System::Windows::Forms::TextBox^ Length1_textBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Work_cost_main_part_textBox;

	private: System::Windows::Forms::TextBox^ Length1_Width_textBox;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Button^ Create_print_file_button;
	private: System::Windows::Forms::TreeView^ treeView2;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ Temperature_textBox;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ Order_number_textBox;
	private: System::Windows::Forms::TreeView^ treeView3;
	private: System::Windows::Forms::Button^ Select_layer_count_button;
	private: System::Windows::Forms::TreeView^ treeView4;
	private: System::Windows::Forms::Button^ Select_layer_button;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ Length1_Silicone_textBox;

	private: System::Windows::Forms::Button^ Input_count_button;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ конфигурацияToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;


private: System::Diagnostics::EventLog^ eventLog1;

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
			this->Circle_Check_box = (gcnew System::Windows::Forms::CheckBox());
			this->Rectangle_Check_box = (gcnew System::Windows::Forms::CheckBox());
			this->Length1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Flange_width_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Calculate_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Width_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Length2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Set_second_length_same_button = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->Flange_Check_box = (gcnew System::Windows::Forms::CheckBox());
			this->Tape_Check_box = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->coefficient_textBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Index_Check_box = (gcnew System::Windows::Forms::CheckBox());
			this->Silicone_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Insert_Check_box = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Insert_Length1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Insert_width_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Insert_height_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Length1_textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Work_cost_main_part_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Length1_Width_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Create_print_file_button = (gcnew System::Windows::Forms::Button());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Temperature_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Order_number_textBox = (gcnew System::Windows::Forms::TextBox());
			this->treeView3 = (gcnew System::Windows::Forms::TreeView());
			this->Select_layer_count_button = (gcnew System::Windows::Forms::Button());
			this->treeView4 = (gcnew System::Windows::Forms::TreeView());
			this->Select_layer_button = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Length1_Silicone_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Input_count_button = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->конфигурацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// Circle_Check_box
			// 
			this->Circle_Check_box->AutoSize = true;
			this->Circle_Check_box->BackColor = System::Drawing::SystemColors::Window;
			this->Circle_Check_box->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Circle_Check_box->FlatAppearance->BorderSize = 0;
			this->Circle_Check_box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Circle_Check_box->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Circle_Check_box->Location = System::Drawing::Point(70, 78);
			this->Circle_Check_box->Name = L"Circle_Check_box";
			this->Circle_Check_box->Size = System::Drawing::Size(94, 23);
			this->Circle_Check_box->TabIndex = 0;
			this->Circle_Check_box->Text = L"Круглый";
			this->Circle_Check_box->UseVisualStyleBackColor = false;
			this->Circle_Check_box->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::Circle_Check_box_CheckedChanged);
			// 
			// Rectangle_Check_box
			// 
			this->Rectangle_Check_box->AutoSize = true;
			this->Rectangle_Check_box->BackColor = System::Drawing::SystemColors::Window;
			this->Rectangle_Check_box->FlatAppearance->BorderSize = 0;
			this->Rectangle_Check_box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Rectangle_Check_box->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Rectangle_Check_box->Location = System::Drawing::Point(70, 138);
			this->Rectangle_Check_box->Name = L"Rectangle_Check_box";
			this->Rectangle_Check_box->Size = System::Drawing::Size(156, 23);
			this->Rectangle_Check_box->TabIndex = 1;
			this->Rectangle_Check_box->Text = L"Прямоугольный";
			this->Rectangle_Check_box->UseVisualStyleBackColor = false;
			this->Rectangle_Check_box->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::Rectangle_Check_box_CheckedChanged);
			// 
			// Length1_textBox
			// 
			this->Length1_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Length1_textBox->Enabled = false;
			this->Length1_textBox->Location = System::Drawing::Point(183, 221);
			this->Length1_textBox->Name = L"Length1_textBox";
			this->Length1_textBox->Size = System::Drawing::Size(92, 20);
			this->Length1_textBox->TabIndex = 3;
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
			// Flange_width_textBox
			// 
			this->Flange_width_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Flange_width_textBox->Enabled = false;
			this->Flange_width_textBox->Location = System::Drawing::Point(125, 355);
			this->Flange_width_textBox->Name = L"Flange_width_textBox";
			this->Flange_width_textBox->Size = System::Drawing::Size(92, 20);
			this->Flange_width_textBox->TabIndex = 7;
			// 
			// Calculate_button
			// 
			this->Calculate_button->BackColor = System::Drawing::SystemColors::Window;
			this->Calculate_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Calculate_button->FlatAppearance->BorderSize = 0;
			this->Calculate_button->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Calculate_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Calculate_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Calculate_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Calculate_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Calculate_button->ImageKey = L"(none)";
			this->Calculate_button->Location = System::Drawing::Point(727, 634);
			this->Calculate_button->Name = L"Calculate_button";
			this->Calculate_button->Size = System::Drawing::Size(149, 52);
			this->Calculate_button->TabIndex = 9;
			this->Calculate_button->Text = L"Рассчитать";
			this->Calculate_button->UseVisualStyleBackColor = false;
			this->Calculate_button->Click += gcnew System::EventHandler(this, &CalcForm::Calculate_button_Click);
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
			// Width_textBox
			// 
			this->Width_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Width_textBox->Enabled = false;
			this->Width_textBox->Location = System::Drawing::Point(183, 252);
			this->Width_textBox->Name = L"Width_textBox";
			this->Width_textBox->Size = System::Drawing::Size(92, 20);
			this->Width_textBox->TabIndex = 13;
			// 
			// Length2_textBox
			// 
			this->Length2_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Length2_textBox->Enabled = false;
			this->Length2_textBox->Location = System::Drawing::Point(465, 221);
			this->Length2_textBox->Name = L"Length2_textBox";
			this->Length2_textBox->Size = System::Drawing::Size(92, 20);
			this->Length2_textBox->TabIndex = 20;
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
			// Set_second_length_same_button
			// 
			this->Set_second_length_same_button->BackColor = System::Drawing::SystemColors::Window;
			this->Set_second_length_same_button->Enabled = false;
			this->Set_second_length_same_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->Set_second_length_same_button->FlatAppearance->BorderSize = 0;
			this->Set_second_length_same_button->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Set_second_length_same_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Set_second_length_same_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Set_second_length_same_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Set_second_length_same_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Set_second_length_same_button->Location = System::Drawing::Point(304, 221);
			this->Set_second_length_same_button->Name = L"Set_second_length_same_button";
			this->Set_second_length_same_button->Size = System::Drawing::Size(29, 20);
			this->Set_second_length_same_button->TabIndex = 21;
			this->Set_second_length_same_button->Text = L"->";
			this->Set_second_length_same_button->UseVisualStyleBackColor = false;
			this->Set_second_length_same_button->Click += gcnew System::EventHandler(this, &CalcForm::Set_second_length_same_button_Click);
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
			// Flange_Check_box
			// 
			this->Flange_Check_box->AutoSize = true;
			this->Flange_Check_box->BackColor = System::Drawing::SystemColors::Window;
			this->Flange_Check_box->Enabled = false;
			this->Flange_Check_box->FlatAppearance->BorderSize = 0;
			this->Flange_Check_box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Flange_Check_box->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Flange_Check_box->Location = System::Drawing::Point(295, 78);
			this->Flange_Check_box->Name = L"Flange_Check_box";
			this->Flange_Check_box->Size = System::Drawing::Size(118, 23);
			this->Flange_Check_box->TabIndex = 24;
			this->Flange_Check_box->Text = L"Фланцевый";
			this->Flange_Check_box->UseVisualStyleBackColor = false;
			this->Flange_Check_box->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::Flange_Check_box_CheckedChanged);
			// 
			// Tape_Check_box
			// 
			this->Tape_Check_box->AutoSize = true;
			this->Tape_Check_box->BackColor = System::Drawing::SystemColors::Window;
			this->Tape_Check_box->Enabled = false;
			this->Tape_Check_box->FlatAppearance->BorderSize = 0;
			this->Tape_Check_box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Tape_Check_box->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Tape_Check_box->Location = System::Drawing::Point(295, 138);
			this->Tape_Check_box->Name = L"Tape_Check_box";
			this->Tape_Check_box->Size = System::Drawing::Size(116, 23);
			this->Tape_Check_box->TabIndex = 25;
			this->Tape_Check_box->Text = L"Ленточный";
			this->Tape_Check_box->UseVisualStyleBackColor = false;
			this->Tape_Check_box->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::Tape_Check_box_CheckedChanged);
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
			// coefficient_textBox
			// 
			this->coefficient_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->coefficient_textBox->Enabled = false;
			this->coefficient_textBox->Location = System::Drawing::Point(430, 306);
			this->coefficient_textBox->Name = L"coefficient_textBox";
			this->coefficient_textBox->Size = System::Drawing::Size(92, 20);
			this->coefficient_textBox->TabIndex = 27;
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
			// Index_Check_box
			// 
			this->Index_Check_box->AutoSize = true;
			this->Index_Check_box->BackColor = System::Drawing::SystemColors::Window;
			this->Index_Check_box->Enabled = false;
			this->Index_Check_box->FlatAppearance->BorderSize = 0;
			this->Index_Check_box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Index_Check_box->Location = System::Drawing::Point(408, 309);
			this->Index_Check_box->Name = L"Index_Check_box";
			this->Index_Check_box->Size = System::Drawing::Size(12, 11);
			this->Index_Check_box->TabIndex = 29;
			this->Index_Check_box->UseVisualStyleBackColor = false;
			this->Index_Check_box->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::Index_Check_box_CheckedChanged);
			// 
			// Silicone_textBox
			// 
			this->Silicone_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Silicone_textBox->Enabled = false;
			this->Silicone_textBox->Location = System::Drawing::Point(430, 341);
			this->Silicone_textBox->Name = L"Silicone_textBox";
			this->Silicone_textBox->Size = System::Drawing::Size(56, 20);
			this->Silicone_textBox->TabIndex = 30;
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
			// Insert_Check_box
			// 
			this->Insert_Check_box->AutoSize = true;
			this->Insert_Check_box->BackColor = System::Drawing::SystemColors::Window;
			this->Insert_Check_box->Enabled = false;
			this->Insert_Check_box->FlatAppearance->BorderSize = 0;
			this->Insert_Check_box->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Insert_Check_box->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Insert_Check_box->Location = System::Drawing::Point(465, 113);
			this->Insert_Check_box->Name = L"Insert_Check_box";
			this->Insert_Check_box->Size = System::Drawing::Size(100, 23);
			this->Insert_Check_box->TabIndex = 32;
			this->Insert_Check_box->Text = L"Вкладыш";
			this->Insert_Check_box->UseVisualStyleBackColor = false;
			this->Insert_Check_box->CheckedChanged += gcnew System::EventHandler(this, &CalcForm::Insert_Check_box_CheckedChanged);
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
			// Insert_Length1_textBox
			// 
			this->Insert_Length1_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Insert_Length1_textBox->Enabled = false;
			this->Insert_Length1_textBox->Location = System::Drawing::Point(206, 571);
			this->Insert_Length1_textBox->Name = L"Insert_Length1_textBox";
			this->Insert_Length1_textBox->Size = System::Drawing::Size(92, 20);
			this->Insert_Length1_textBox->TabIndex = 39;
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
			// Insert_width_textBox
			// 
			this->Insert_width_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Insert_width_textBox->Enabled = false;
			this->Insert_width_textBox->Location = System::Drawing::Point(206, 602);
			this->Insert_width_textBox->Name = L"Insert_width_textBox";
			this->Insert_width_textBox->Size = System::Drawing::Size(92, 20);
			this->Insert_width_textBox->TabIndex = 37;
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
			// Insert_height_textBox
			// 
			this->Insert_height_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Insert_height_textBox->Enabled = false;
			this->Insert_height_textBox->Location = System::Drawing::Point(488, 571);
			this->Insert_height_textBox->Name = L"Insert_height_textBox";
			this->Insert_height_textBox->Size = System::Drawing::Size(92, 20);
			this->Insert_height_textBox->TabIndex = 34;
			// 
			// Length1_textBox1
			// 
			this->Length1_textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->Length1_textBox1->Enabled = false;
			this->Length1_textBox1->Location = System::Drawing::Point(488, 606);
			this->Length1_textBox1->Name = L"Length1_textBox1";
			this->Length1_textBox1->Size = System::Drawing::Size(92, 20);
			this->Length1_textBox1->TabIndex = 41;
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
			// Work_cost_main_part_textBox
			// 
			this->Work_cost_main_part_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Work_cost_main_part_textBox->Enabled = false;
			this->Work_cost_main_part_textBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold));
			this->Work_cost_main_part_textBox->Location = System::Drawing::Point(269, 398);
			this->Work_cost_main_part_textBox->Multiline = true;
			this->Work_cost_main_part_textBox->Name = L"Work_cost_main_part_textBox";
			this->Work_cost_main_part_textBox->Size = System::Drawing::Size(130, 33);
			this->Work_cost_main_part_textBox->TabIndex = 43;
			// 
			// Length1_Width_textBox
			// 
			this->Length1_Width_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Length1_Width_textBox->Enabled = false;
			this->Length1_Width_textBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold));
			this->Length1_Width_textBox->Location = System::Drawing::Point(247, 652);
			this->Length1_Width_textBox->Multiline = true;
			this->Length1_Width_textBox->Name = L"Length1_Width_textBox";
			this->Length1_Width_textBox->Size = System::Drawing::Size(130, 33);
			this->Length1_Width_textBox->TabIndex = 45;
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
			// Create_print_file_button
			// 
			this->Create_print_file_button->BackColor = System::Drawing::SystemColors::Window;
			this->Create_print_file_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->Create_print_file_button->FlatAppearance->BorderSize = 0;
			this->Create_print_file_button->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Create_print_file_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Create_print_file_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Create_print_file_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Create_print_file_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Create_print_file_button->Location = System::Drawing::Point(430, 653);
			this->Create_print_file_button->Name = L"Create_print_file_button";
			this->Create_print_file_button->Size = System::Drawing::Size(138, 33);
			this->Create_print_file_button->TabIndex = 47;
			this->Create_print_file_button->Text = L"Создать файл на печать";
			this->Create_print_file_button->UseVisualStyleBackColor = false;
			this->Create_print_file_button->Click += gcnew System::EventHandler(this, &CalcForm::Create_print_file_button_Click);
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
			// Temperature_textBox
			// 
			this->Temperature_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Temperature_textBox->Enabled = false;
			this->Temperature_textBox->Location = System::Drawing::Point(125, 450);
			this->Temperature_textBox->Name = L"Temperature_textBox";
			this->Temperature_textBox->Size = System::Drawing::Size(39, 20);
			this->Temperature_textBox->TabIndex = 51;
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
			// Order_number_textBox
			// 
			this->Order_number_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Order_number_textBox->Enabled = false;
			this->Order_number_textBox->Location = System::Drawing::Point(125, 483);
			this->Order_number_textBox->Name = L"Order_number_textBox";
			this->Order_number_textBox->Size = System::Drawing::Size(39, 20);
			this->Order_number_textBox->TabIndex = 53;
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
			// Select_layer_count_button
			// 
			this->Select_layer_count_button->BackColor = System::Drawing::SystemColors::Window;
			this->Select_layer_count_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->Select_layer_count_button->FlatAppearance->BorderSize = 0;
			this->Select_layer_count_button->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Select_layer_count_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Select_layer_count_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Select_layer_count_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Select_layer_count_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Select_layer_count_button->Location = System::Drawing::Point(606, 190);
			this->Select_layer_count_button->Name = L"Select_layer_count_button";
			this->Select_layer_count_button->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Select_layer_count_button->Size = System::Drawing::Size(100, 48);
			this->Select_layer_count_button->TabIndex = 55;
			this->Select_layer_count_button->Text = L"Выбор количества слоев";
			this->Select_layer_count_button->UseVisualStyleBackColor = false;
			this->Select_layer_count_button->Click += gcnew System::EventHandler(this, &CalcForm::Select_layer_count_button_Click);
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
			// Select_layer_button
			// 
			this->Select_layer_button->BackColor = System::Drawing::SystemColors::Window;
			this->Select_layer_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->Select_layer_button->FlatAppearance->BorderSize = 0;
			this->Select_layer_button->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Select_layer_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Select_layer_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Select_layer_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Select_layer_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Select_layer_button->Location = System::Drawing::Point(606, 190);
			this->Select_layer_button->Name = L"Select_layer_button";
			this->Select_layer_button->Size = System::Drawing::Size(100, 48);
			this->Select_layer_button->TabIndex = 57;
			this->Select_layer_button->Text = L"Выбор материалов";
			this->Select_layer_button->UseVisualStyleBackColor = false;
			this->Select_layer_button->Visible = false;
			this->Select_layer_button->Click += gcnew System::EventHandler(this, &CalcForm::Select_layer_button_Click);
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
			// Length1_Silicone_textBox
			// 
			this->Length1_Silicone_textBox->BackColor = System::Drawing::SystemColors::Window;
			this->Length1_Silicone_textBox->Enabled = false;
			this->Length1_Silicone_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Length1_Silicone_textBox->Location = System::Drawing::Point(936, 207);
			this->Length1_Silicone_textBox->Name = L"Length1_Silicone_textBox";
			this->Length1_Silicone_textBox->Size = System::Drawing::Size(26, 20);
			this->Length1_Silicone_textBox->TabIndex = 60;
			this->Length1_Silicone_textBox->Enter += gcnew System::EventHandler(this, &CalcForm::Length1_Silicone_textBox_Enter);
			// 
			// Input_count_button
			// 
			this->Input_count_button->BackColor = System::Drawing::SystemColors::Window;
			this->Input_count_button->Enabled = false;
			this->Input_count_button->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonFace;
			this->Input_count_button->FlatAppearance->BorderSize = 0;
			this->Input_count_button->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Input_count_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Input_count_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Input_count_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Input_count_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Input_count_button->Location = System::Drawing::Point(968, 207);
			this->Input_count_button->Name = L"Input_count_button";
			this->Input_count_button->Size = System::Drawing::Size(50, 20);
			this->Input_count_button->TabIndex = 62;
			this->Input_count_button->Text = L"Ввод";
			this->Input_count_button->UseVisualStyleBackColor = false;
			this->Input_count_button->Click += gcnew System::EventHandler(this, &CalcForm::Length1_Silicone_textBox_Enter);
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->конфигурацияToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1068, 24);
			this->menuStrip1->TabIndex = 65;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// конфигурацияToolStripMenuItem
			// 
			this->конфигурацияToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->конфигурацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->загрузитьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem
			});
			this->конфигурацияToolStripMenuItem->Name = L"конфигурацияToolStripMenuItem";
			this->конфигурацияToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->конфигурацияToolStripMenuItem->Text = L"Конфигурация";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::загрузитьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::сохранитьКакToolStripMenuItem_Click);
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
			this->Controls->Add(this->Input_count_button);
			this->Controls->Add(this->Length1_Silicone_textBox);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Select_layer_count_button);
			this->Controls->Add(this->treeView3);
			this->Controls->Add(this->Order_number_textBox);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->Temperature_textBox);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->treeView2);
			this->Controls->Add(this->Create_print_file_button);
			this->Controls->Add(this->Length1_Width_textBox);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->Work_cost_main_part_textBox);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Length1_textBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Insert_Length1_textBox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->Insert_width_textBox);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Insert_height_textBox);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Insert_Check_box);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Silicone_textBox);
			this->Controls->Add(this->Index_Check_box);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->coefficient_textBox);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Tape_Check_box);
			this->Controls->Add(this->Flange_Check_box);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Set_second_length_same_button);
			this->Controls->Add(this->Length2_textBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Width_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Calculate_button);
			this->Controls->Add(this->Flange_width_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Length1_textBox);
			this->Controls->Add(this->Rectangle_Check_box);
			this->Controls->Add(this->Circle_Check_box);
			this->Controls->Add(this->treeView4);
			this->Controls->Add(this->Select_layer_button);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CalcForm";
			this->Text = L"New Config - Calculator ";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
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

	private: System::Void Circle_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
			 System::Void Rectangle_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
			 System::Void Set_second_length_same_button_Click(System::Object^ sender, System::EventArgs^ e);
			 System::Void Calculate_button_Click(System::Object^ sender, System::EventArgs^ e);

			 System::Void Index_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

			 System::Void Flange_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

			 System::Void Tape_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

			 System::Void Insert_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

			 System::Void Create_print_file_button_Click(System::Object^ sender, System::EventArgs^ e);

			 System::Void TreeView1_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e);
			 System::Void TreeView2_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e);

			 System::Void Select_layer_count_button_Click(System::Object^ sender, System::EventArgs^ e);
			 System::Void Select_layer_button_Click(System::Object^ sender, System::EventArgs^ e);


			 System::Void TreeView4_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e);



			 System::Void Length1_Silicone_textBox_Enter(System::Object^ sender, System::EventArgs^ e);
			 System::Void TreeView3_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e);

			 System::Void label21_TextChanged(System::Object^ sender, System::EventArgs^ e);


			 System::Void загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
			 System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CalcForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
};
