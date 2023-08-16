#pragma once
#include <iostream>
#include <string>
#include"Detail.h"
#include"Product.h"
#include"ctime"

using namespace std;



namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	/// 
	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ main_panel;
	protected:

	protected:



	private: System::Windows::Forms::Button^ get_DB;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ get_products_button;
	private: System::Windows::Forms::Button^ get_emploee_button;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::CheckedListBox^ all_elements;

	private: System::Windows::Forms::Button^ add_modul;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ name_of_product;
	private: System::Windows::Forms::Button^ braisings_button;

	private: System::Windows::Forms::Button^ linses_button;

	private: System::Windows::Forms::Button^ moduls_button;
	private: System::Windows::Forms::Button^ diffusers_button;


	private: System::Windows::Forms::Button^ bloks_button;


	private: System::Windows::Forms::Button^ corpuses_button;
	private: System::Windows::Forms::Button^ covers_button;



	private: System::Windows::Forms::Button^ packeges_button;
	private: System::Windows::Forms::Button^ create_product;
	private: System::Windows::Forms::CheckedListBox^ elements_of_product;
	private: System::Windows::Forms::Button^ cansel_button;
	private: System::Windows::Forms::Button^ find_button;
	private: System::Windows::Forms::TextBox^ find_textBox;
	private: System::Windows::Forms::GroupBox^ elements_GB;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ create_product_screen;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ count_of_product;
	private: System::Windows::Forms::TextBox^ description_of_product;


















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->main_panel = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->description_of_product = (gcnew System::Windows::Forms::TextBox());
			this->count_of_product = (gcnew System::Windows::Forms::NumericUpDown());
			this->elements_of_product = (gcnew System::Windows::Forms::CheckedListBox());
			this->create_product_screen = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cansel_button = (gcnew System::Windows::Forms::Button());
			this->create_product = (gcnew System::Windows::Forms::Button());
			this->name_of_product = (gcnew System::Windows::Forms::TextBox());
			this->elements_GB = (gcnew System::Windows::Forms::GroupBox());
			this->braisings_button = (gcnew System::Windows::Forms::Button());
			this->covers_button = (gcnew System::Windows::Forms::Button());
			this->all_elements = (gcnew System::Windows::Forms::CheckedListBox());
			this->packeges_button = (gcnew System::Windows::Forms::Button());
			this->diffusers_button = (gcnew System::Windows::Forms::Button());
			this->linses_button = (gcnew System::Windows::Forms::Button());
			this->bloks_button = (gcnew System::Windows::Forms::Button());
			this->find_button = (gcnew System::Windows::Forms::Button());
			this->moduls_button = (gcnew System::Windows::Forms::Button());
			this->find_textBox = (gcnew System::Windows::Forms::TextBox());
			this->add_modul = (gcnew System::Windows::Forms::Button());
			this->corpuses_button = (gcnew System::Windows::Forms::Button());
			this->get_DB = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->get_products_button = (gcnew System::Windows::Forms::Button());
			this->get_emploee_button = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->main_panel->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_of_product))->BeginInit();
			this->elements_GB->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_panel
			// 
			this->main_panel->Controls->Add(this->groupBox1);
			this->main_panel->Controls->Add(this->elements_GB);
			this->main_panel->Location = System::Drawing::Point(347, 35);
			this->main_panel->Name = L"main_panel";
			this->main_panel->Size = System::Drawing::Size(990, 782);
			this->main_panel->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->description_of_product);
			this->groupBox1->Controls->Add(this->count_of_product);
			this->groupBox1->Controls->Add(this->elements_of_product);
			this->groupBox1->Controls->Add(this->create_product_screen);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->cansel_button);
			this->groupBox1->Controls->Add(this->create_product);
			this->groupBox1->Controls->Add(this->name_of_product);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(376, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(596, 779);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// description_of_product
			// 
			this->description_of_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->description_of_product->Location = System::Drawing::Point(7, 57);
			this->description_of_product->Name = L"description_of_product";
			this->description_of_product->Size = System::Drawing::Size(519, 22);
			this->description_of_product->TabIndex = 7;
			this->description_of_product->Text = L"Описание";
			// 
			// count_of_product
			// 
			this->count_of_product->Location = System::Drawing::Point(533, 36);
			this->count_of_product->Name = L"count_of_product";
			this->count_of_product->Size = System::Drawing::Size(57, 31);
			this->count_of_product->TabIndex = 6;
			this->count_of_product->Visible = false;
			// 
			// elements_of_product
			// 
			this->elements_of_product->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->elements_of_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->elements_of_product->FormattingEnabled = true;
			this->elements_of_product->Location = System::Drawing::Point(6, 93);
			this->elements_of_product->Name = L"elements_of_product";
			this->elements_of_product->Size = System::Drawing::Size(314, 565);
			this->elements_of_product->TabIndex = 1;
			// 
			// create_product_screen
			// 
			this->create_product_screen->Location = System::Drawing::Point(24, 94);
			this->create_product_screen->Name = L"create_product_screen";
			this->create_product_screen->Size = System::Drawing::Size(545, 557);
			this->create_product_screen->TabIndex = 5;
			this->create_product_screen->TabStop = false;
			this->create_product_screen->Text = L"Создание продукта";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(483, 744);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Подтвердить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::add_new_product);
			// 
			// cansel_button
			// 
			this->cansel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cansel_button->Location = System::Drawing::Point(6, 664);
			this->cansel_button->Name = L"cansel_button";
			this->cansel_button->Size = System::Drawing::Size(75, 23);
			this->cansel_button->TabIndex = 3;
			this->cansel_button->Text = L"Отмена";
			this->cansel_button->UseVisualStyleBackColor = true;
			this->cansel_button->Click += gcnew System::EventHandler(this, &Form1::back);
			// 
			// create_product
			// 
			this->create_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_product->Location = System::Drawing::Point(148, 664);
			this->create_product->Name = L"create_product";
			this->create_product->Size = System::Drawing::Size(172, 23);
			this->create_product->TabIndex = 2;
			this->create_product->Text = L"Создать спецификацию";
			this->create_product->UseVisualStyleBackColor = true;
			this->create_product->Click += gcnew System::EventHandler(this, &Form1::create_new_product);
			// 
			// name_of_product
			// 
			this->name_of_product->Location = System::Drawing::Point(6, 17);
			this->name_of_product->Name = L"name_of_product";
			this->name_of_product->Size = System::Drawing::Size(520, 31);
			this->name_of_product->TabIndex = 0;
			this->name_of_product->Text = L"Название ";
			this->name_of_product->Click += gcnew System::EventHandler(this, &Form1::clear_this);
			// 
			// elements_GB
			// 
			this->elements_GB->Controls->Add(this->braisings_button);
			this->elements_GB->Controls->Add(this->covers_button);
			this->elements_GB->Controls->Add(this->all_elements);
			this->elements_GB->Controls->Add(this->packeges_button);
			this->elements_GB->Controls->Add(this->diffusers_button);
			this->elements_GB->Controls->Add(this->linses_button);
			this->elements_GB->Controls->Add(this->bloks_button);
			this->elements_GB->Controls->Add(this->find_button);
			this->elements_GB->Controls->Add(this->moduls_button);
			this->elements_GB->Controls->Add(this->find_textBox);
			this->elements_GB->Controls->Add(this->add_modul);
			this->elements_GB->Controls->Add(this->corpuses_button);
			this->elements_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->elements_GB->Location = System::Drawing::Point(0, 3);
			this->elements_GB->Name = L"elements_GB";
			this->elements_GB->Size = System::Drawing::Size(372, 783);
			this->elements_GB->TabIndex = 14;
			this->elements_GB->TabStop = false;
			this->elements_GB->Text = L"Добавьте необходимые эллементы";
			this->elements_GB->Visible = false;
			// 
			// braisings_button
			// 
			this->braisings_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->braisings_button->Location = System::Drawing::Point(198, 744);
			this->braisings_button->Name = L"braisings_button";
			this->braisings_button->Size = System::Drawing::Size(75, 23);
			this->braisings_button->TabIndex = 9;
			this->braisings_button->Text = L"Крепеж+";
			this->braisings_button->UseVisualStyleBackColor = true;
			this->braisings_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// covers_button
			// 
			this->covers_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->covers_button->Location = System::Drawing::Point(291, 744);
			this->covers_button->Name = L"covers_button";
			this->covers_button->Size = System::Drawing::Size(75, 23);
			this->covers_button->TabIndex = 11;
			this->covers_button->Text = L"Крышки";
			this->covers_button->UseVisualStyleBackColor = true;
			this->covers_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// all_elements
			// 
			this->all_elements->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->all_elements->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->all_elements->FormattingEnabled = true;
			this->all_elements->Location = System::Drawing::Point(6, 77);
			this->all_elements->Name = L"all_elements";
			this->all_elements->Size = System::Drawing::Size(367, 574);
			this->all_elements->TabIndex = 0;
			// 
			// packeges_button
			// 
			this->packeges_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->packeges_button->Location = System::Drawing::Point(6, 744);
			this->packeges_button->Name = L"packeges_button";
			this->packeges_button->Size = System::Drawing::Size(75, 23);
			this->packeges_button->TabIndex = 10;
			this->packeges_button->Text = L"Упаковки";
			this->packeges_button->UseVisualStyleBackColor = true;
			this->packeges_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// diffusers_button
			// 
			this->diffusers_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->diffusers_button->Location = System::Drawing::Point(291, 709);
			this->diffusers_button->Name = L"diffusers_button";
			this->diffusers_button->Size = System::Drawing::Size(75, 23);
			this->diffusers_button->TabIndex = 6;
			this->diffusers_button->Text = L"Рассеиватели";
			this->diffusers_button->UseVisualStyleBackColor = true;
			this->diffusers_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// linses_button
			// 
			this->linses_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linses_button->Location = System::Drawing::Point(103, 744);
			this->linses_button->Name = L"linses_button";
			this->linses_button->Size = System::Drawing::Size(75, 23);
			this->linses_button->TabIndex = 8;
			this->linses_button->Text = L"Линзы";
			this->linses_button->UseVisualStyleBackColor = true;
			this->linses_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// bloks_button
			// 
			this->bloks_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bloks_button->Location = System::Drawing::Point(198, 707);
			this->bloks_button->Name = L"bloks_button";
			this->bloks_button->Size = System::Drawing::Size(75, 23);
			this->bloks_button->TabIndex = 5;
			this->bloks_button->Text = L"Блоки";
			this->bloks_button->UseVisualStyleBackColor = true;
			this->bloks_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// find_button
			// 
			this->find_button->Location = System::Drawing::Point(212, 37);
			this->find_button->Name = L"find_button";
			this->find_button->Size = System::Drawing::Size(94, 31);
			this->find_button->TabIndex = 13;
			this->find_button->Text = L"найти";
			this->find_button->UseVisualStyleBackColor = true;
			this->find_button->Click += gcnew System::EventHandler(this, &Form1::find_item);
			// 
			// moduls_button
			// 
			this->moduls_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moduls_button->Location = System::Drawing::Point(103, 707);
			this->moduls_button->Name = L"moduls_button";
			this->moduls_button->Size = System::Drawing::Size(75, 23);
			this->moduls_button->TabIndex = 7;
			this->moduls_button->Text = L"Модули";
			this->moduls_button->UseVisualStyleBackColor = true;
			this->moduls_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// find_textBox
			// 
			this->find_textBox->Location = System::Drawing::Point(6, 39);
			this->find_textBox->Name = L"find_textBox";
			this->find_textBox->Size = System::Drawing::Size(200, 29);
			this->find_textBox->TabIndex = 12;
			this->find_textBox->Text = L"введите id (4 цифры)";
			this->find_textBox->Click += gcnew System::EventHandler(this, &Form1::clear_this);
			// 
			// add_modul
			// 
			this->add_modul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_modul->Location = System::Drawing::Point(119, 673);
			this->add_modul->Name = L"add_modul";
			this->add_modul->Size = System::Drawing::Size(163, 23);
			this->add_modul->TabIndex = 1;
			this->add_modul->Text = L"Добавить эллемент";
			this->add_modul->UseVisualStyleBackColor = true;
			this->add_modul->Click += gcnew System::EventHandler(this, &Form1::add_elements);
			// 
			// corpuses_button
			// 
			this->corpuses_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->corpuses_button->Location = System::Drawing::Point(6, 707);
			this->corpuses_button->Name = L"corpuses_button";
			this->corpuses_button->Size = System::Drawing::Size(75, 23);
			this->corpuses_button->TabIndex = 4;
			this->corpuses_button->Text = L"Крпуса";
			this->corpuses_button->UseVisualStyleBackColor = true;
			this->corpuses_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// get_DB
			// 
			this->get_DB->Location = System::Drawing::Point(17, 51);
			this->get_DB->Name = L"get_DB";
			this->get_DB->Size = System::Drawing::Size(272, 44);
			this->get_DB->TabIndex = 2;
			this->get_DB->Text = L"Показать базу данных эллементов";
			this->get_DB->UseVisualStyleBackColor = true;
			this->get_DB->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Меню";
			// 
			// get_products_button
			// 
			this->get_products_button->Location = System::Drawing::Point(17, 132);
			this->get_products_button->Name = L"get_products_button";
			this->get_products_button->Size = System::Drawing::Size(272, 44);
			this->get_products_button->TabIndex = 4;
			this->get_products_button->Text = L"Показать базу данных продукции";
			this->get_products_button->UseVisualStyleBackColor = true;
			this->get_products_button->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// get_emploee_button
			// 
			this->get_emploee_button->Location = System::Drawing::Point(17, 216);
			this->get_emploee_button->Name = L"get_emploee_button";
			this->get_emploee_button->Size = System::Drawing::Size(272, 44);
			this->get_emploee_button->TabIndex = 5;
			this->get_emploee_button->Text = L"Показать базу сборщиков";
			this->get_emploee_button->UseVisualStyleBackColor = true;
			this->get_emploee_button->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(17, 300);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(272, 44);
			this->button6->TabIndex = 6;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(17, 382);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(272, 44);
			this->button7->TabIndex = 7;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(17, 465);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(272, 44);
			this->button8->TabIndex = 8;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(17, 546);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(272, 44);
			this->button9->TabIndex = 9;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(17, 629);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(272, 44);
			this->button10->TabIndex = 10;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(17, 702);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(272, 44);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Закрыть";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"label1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1349, 829);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->get_emploee_button);
			this->Controls->Add(this->get_products_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->get_DB);
			this->Controls->Add(this->main_panel);
			this->Name = L"Form1";
			this->Text = L"Система_Профсвет";
			this->Load += gcnew System::EventHandler(this, &Form1::load);
			this->main_panel->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_of_product))->EndInit();
			this->elements_GB->ResumeLayout(false);
			this->elements_GB->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//используемые массивы
	cli::array<Detail^, 1>^ details=gcnew cli::array<Detail^, 1>(10000);
	cli::array<Product^, 1>^ products = gcnew cli::array<Product^, 1>(10000);
	cli::array<Int32^, 1>^ ids_of_details = gcnew cli::array<Int32^, 1>(10000);	
	cli::array<Label^, 1>^ lables = gcnew cli::array<Label^, 1>(50);
	cli::array<NumericUpDown^,1>^up_down_buttons= gcnew cli::array<NumericUpDown^, 1>(50);

	//данные координат
	int y = 25;

	//загрузочный метод (загрузка информации из базы данных)
private: System::Void load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));

	for (int i = 0; i < 8000; i++) {
		bool set_id = true;
		
		Detail^det= (gcnew Detail("Имя " + rand()%100,(rand()%8+1)," description", rand()%1000,  rand()%500));
				
		int id;
		for (int j = 0; j < 8000; j++) {
			id = rand() % 899+100;
			
			if (Int32::Parse((det->getModel() + id.ToString())) == ids_of_details[j]) {
				set_id = false;
				j = 0;
			}
		}
		if (set_id) {
		det->setId(det->getModel()+id.ToString());
		details[i] = det;
		
		}
		set_id = true;
		
	}
}
	   //показать список деталей
private: System::Void get_dataBase(System::Object^ sender, System::EventArgs^ e) {
	if (sender == get_DB) {
		updateDataBase();
	elements_GB->Visible = true;
	}
	else if (sender = get_products_button) {
		all_elements->Items->Clear();
		for (int i = 0; i < products->Length; i++) {
			all_elements->Items->Add(products[i]->getInfo());
		}
		
	}
	
}
	  
	   //добавить эллемент в список возможных эллементов продукта
private: System::Void add_elements(System::Object^ sender, System::EventArgs^ e) {
	elements_of_product->Visible = true;
	for (int i = 0; i < all_elements->CheckedItems->Count; i++) {
		if (!elements_of_product->Items->Contains(all_elements->CheckedItems[i]->ToString())) {
			elements_of_product->Items->Add(all_elements->CheckedItems[i]->ToString());
		}
		
	}		
	groupBox1->Visible = true;
	create_product_screen->Controls->Clear();
}
	  // очиска полей ввода
private: System::Void clear_this(System::Object^ sender, System::EventArgs^ e) {
	if (sender->Equals(name_of_product)) {
		name_of_product->Text = "";
	}
	else if (sender->Equals(find_textBox)) {
		find_textBox->Text = "";
	}
}
	   //сортировка по моделям
private: System::Void choose_type_product(System::Object^ sender, System::EventArgs^ e) {
	all_elements->Items->Clear();
	if (sender == corpuses_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i]!=nullptr&&details[i]->getModel()==1) {
				
				all_elements->Items->Add( details[i]->getInfo());
			}
		}

	}
	else if (sender == bloks_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 2) {
				
				all_elements->Items->Add(details[i]->getInfo());
			}
		}

	}
	else if (sender == diffusers_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 3) {
				
				all_elements->Items->Add(details[i]->getInfo());
			}
		}

	}
	else if (sender == moduls_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 4) {
				
				all_elements->Items->Add(details[i]->getInfo());
			}
		}

	}
	else if (sender == linses_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 5) {
				
				all_elements->Items->Add( details[i]->getInfo());
			}
		}

	}
	else if (sender == braisings_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 6) {
				
				all_elements->Items->Add(details[i]->getInfo());
			}
		}

	}
	else if (sender == packeges_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 7) {
				
				all_elements->Items->Add(details[i]->getInfo());
			}
		}

	}
	else if (sender == covers_button) {
		
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 8) {
				
				all_elements->Items->Add(details[i]->getInfo());
			}
		}

	}
}

	   //запись компонентов продукта на поле для создания
private: System::Void create_new_product(System::Object^ sender, System::EventArgs^ e) {
	
	lables = gcnew cli::array<Label^, 1>(elements_of_product->CheckedItems->Count);
	for (int i = 0; i < elements_of_product->CheckedItems->Count; i++) {
		y += 25;
		Label^ label4 = (gcnew System::Windows::Forms::Label());
		label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		label4->AutoSize = true;
		label4->Location = System::Drawing::Point(10, y);
		label4->Name = L"label4";
		label4->Size = System::Drawing::Size(70, 25);
		label4->TabIndex = 2;
		label4->Text = elements_of_product->CheckedItems[i]->ToString();
		label4->Visible = true;
		
		if (lables[i]==nullptr) {
			lables[i] = label4;
		}

	/*	NumericUpDown^ numemeric_up_down = (gcnew System::Windows::Forms::NumericUpDown());
		numemeric_up_down->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		numemeric_up_down->Location = System::Drawing::Point(450, y);
		numemeric_up_down->Name = L"set_count";
		numemeric_up_down->Size = System::Drawing::Size(50, 22);
		numemeric_up_down->TabIndex = 0;
		numemeric_up_down->Visible = true;
		numemeric_up_down->Maximum = 100;
		numemeric_up_down->Minimum = 1;


		
		if (up_down_buttons[i] == nullptr) {
			up_down_buttons[i] = numemeric_up_down;
		}*/

	}
	
	

	for (int i = 0; i < elements_of_product->CheckedItems->Count; i++) {
	//	String^ lable = lables[i]->Text;
	//	String^ id = lable->Substring(0, 4);
		
		if (lables[i]!=nullptr) {
			create_product_screen->Controls->Add(lables[i]);
			//create_product_screen->Controls->Add(up_down_buttons[i]);
		}
		
		
	}
	/*for (int i = 0; i < lables->Length; i++) {
		lables[i] = nullptr;
	}*/
	y = 25;
	elements_of_product->Visible = false;
	label1->Text =  lables->Length+ " " +up_down_buttons->Length ;
}
	   //найти детать по id
private: System::Void find_item(System::Object^ sender, System::EventArgs^ e) {

	if (find_textBox->Text->Length == 4) {
		
	for (int i = 0; i < details->Length; i++) {
		if (details[i]!=nullptr&&find_textBox->Text->Equals(details[i]->getId())) {
			all_elements->Items->Clear();
			all_elements->Items->Add(details[i]->getInfo());
			break;
	}
	}
	}
	
	
}


//в разработке
private: System::Void back(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void close(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void add_new_product(System::Object^ sender, System::EventArgs^ e) {
	String^ str; 
	String^ id;
	Product^ product = (gcnew Product(name_of_product->Text, description_of_product->Text));
	
//int cooficent = Convert::ToInt32(count_of_product->Value);
	for (int i = 0; i < lables->Length; i++) {
		if (lables[i] != nullptr) {
			str = lables[i]->Text;
			id = str->Substring(0, 4);
		for (int j = 0; j < details->Length; j++) {
			if (details[j] != nullptr && details[j]->getId()->Equals(id)) {
				product->add_detail(details[j]);
			}
		}
		}
		
	}
	if (products->LastIndexOf(products, product) < 0) {
		products[products->Length] = product;
	}
	

	/*for (int i = 0; i < lables->Length; i++) {
		up_down_buttons[i] = nullptr;
		
	}*/
	int langht_array = lables->Length;
	for (int i = 0; i < langht_array; i++) {
				lables[i] = nullptr;
	}
	elements_of_product->Items->Clear();
	updateDataBase();
}


	   private:void updateDataBase() {
		   all_elements->Items->Clear();
		   for (int i = 0; i < 8000; i++) {
			   all_elements->Items->Add(details[i]->getInfo());
		   }
	   }
};


}



