#pragma once
#include <iostream>
#include <string>
#include"Detail.h"
#include"Product_type.h"
#include"Product_for_sale.h"
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

	protected:

	protected:



	private: System::Windows::Forms::Button^ get_DB;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ get_products_db_btn;

	private: System::Windows::Forms::Button^ get_emploee_button;









	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::CheckedListBox^ all_elements;
	private: System::Windows::Forms::Button^ add_modul_btn;




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
	private: System::Windows::Forms::Button^ create_product_btn;

	private: System::Windows::Forms::CheckedListBox^ elements_of_product;
	private: System::Windows::Forms::Button^ cansel_button;
	private: System::Windows::Forms::Button^ find_button;
	private: System::Windows::Forms::TextBox^ find_textBox;
	private: System::Windows::Forms::GroupBox^ elements_GB;
	private: System::Windows::Forms::Button^ apply_btn;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ count_of_product;

	private: System::Windows::Forms::TreeView^ products_tree;



	private: System::Windows::Forms::GroupBox^ create_product_screen;

	private: System::Windows::Forms::NumericUpDown^ assambly_price_updown;
	private: System::Windows::Forms::Button^ create_score_btn;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Button^ score_db_btn;
	private: System::Windows::Forms::Button^ create_product_line_btn;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ info_label;
	private: System::Windows::Forms::Button^ save_score_btn;
	private: System::Windows::Forms::TextBox^ company_name_tb;
	private: System::Windows::Forms::TextBox^ score_number_tb;
	private: System::Windows::Forms::ListBox^ emploee_listBox;



























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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->company_name_tb = (gcnew System::Windows::Forms::TextBox());
			this->score_number_tb = (gcnew System::Windows::Forms::TextBox());
			this->save_score_btn = (gcnew System::Windows::Forms::Button());
			this->assambly_price_updown = (gcnew System::Windows::Forms::NumericUpDown());
			this->cansel_button = (gcnew System::Windows::Forms::Button());
			this->create_product_btn = (gcnew System::Windows::Forms::Button());
			this->create_product_screen = (gcnew System::Windows::Forms::GroupBox());
			this->info_label = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->count_of_product = (gcnew System::Windows::Forms::NumericUpDown());
			this->apply_btn = (gcnew System::Windows::Forms::Button());
			this->name_of_product = (gcnew System::Windows::Forms::TextBox());
			this->elements_of_product = (gcnew System::Windows::Forms::CheckedListBox());
			this->elements_GB = (gcnew System::Windows::Forms::GroupBox());
			this->create_product_line_btn = (gcnew System::Windows::Forms::Button());
			this->products_tree = (gcnew System::Windows::Forms::TreeView());
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
			this->add_modul_btn = (gcnew System::Windows::Forms::Button());
			this->corpuses_button = (gcnew System::Windows::Forms::Button());
			this->get_DB = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->get_products_db_btn = (gcnew System::Windows::Forms::Button());
			this->get_emploee_button = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->create_score_btn = (gcnew System::Windows::Forms::Button());
			this->score_db_btn = (gcnew System::Windows::Forms::Button());
			this->emploee_listBox = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->assambly_price_updown))->BeginInit();
			this->create_product_screen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_of_product))->BeginInit();
			this->elements_GB->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->elements_of_product);
			this->groupBox1->Controls->Add(this->company_name_tb);
			this->groupBox1->Controls->Add(this->score_number_tb);
			this->groupBox1->Controls->Add(this->save_score_btn);
			this->groupBox1->Controls->Add(this->assambly_price_updown);
			this->groupBox1->Controls->Add(this->cansel_button);
			this->groupBox1->Controls->Add(this->create_product_btn);
			this->groupBox1->Controls->Add(this->create_product_screen);
			this->groupBox1->Controls->Add(this->count_of_product);
			this->groupBox1->Controls->Add(this->apply_btn);
			this->groupBox1->Controls->Add(this->name_of_product);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(600, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(714, 783);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// company_name_tb
			// 
			this->company_name_tb->Location = System::Drawing::Point(118, 66);
			this->company_name_tb->Name = L"company_name_tb";
			this->company_name_tb->Size = System::Drawing::Size(229, 31);
			this->company_name_tb->TabIndex = 11;
			this->company_name_tb->Text = L"Название компании";
			this->company_name_tb->Visible = false;
			// 
			// score_number_tb
			// 
			this->score_number_tb->Location = System::Drawing::Point(7, 66);
			this->score_number_tb->Name = L"score_number_tb";
			this->score_number_tb->Size = System::Drawing::Size(105, 31);
			this->score_number_tb->TabIndex = 10;
			this->score_number_tb->Text = L"№Счета";
			this->score_number_tb->Visible = false;
			// 
			// save_score_btn
			// 
			this->save_score_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_score_btn->Location = System::Drawing::Point(521, 56);
			this->save_score_btn->Name = L"save_score_btn";
			this->save_score_btn->Size = System::Drawing::Size(144, 41);
			this->save_score_btn->TabIndex = 9;
			this->save_score_btn->Text = L"Сохранить документ txt.";
			this->save_score_btn->UseVisualStyleBackColor = true;
			this->save_score_btn->Visible = false;
			this->save_score_btn->Click += gcnew System::EventHandler(this, &Form1::save_score);
			// 
			// assambly_price_updown
			// 
			this->assambly_price_updown->Location = System::Drawing::Point(392, 18);
			this->assambly_price_updown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->assambly_price_updown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			this->assambly_price_updown->Name = L"assambly_price_updown";
			this->assambly_price_updown->Size = System::Drawing::Size(92, 31);
			this->assambly_price_updown->TabIndex = 8;
			this->assambly_price_updown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// cansel_button
			// 
			this->cansel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cansel_button->Location = System::Drawing::Point(33, 717);
			this->cansel_button->Name = L"cansel_button";
			this->cansel_button->Size = System::Drawing::Size(79, 26);
			this->cansel_button->TabIndex = 3;
			this->cansel_button->Text = L"Отмена";
			this->cansel_button->UseVisualStyleBackColor = true;
			this->cansel_button->Click += gcnew System::EventHandler(this, &Form1::back);
			// 
			// create_product_btn
			// 
			this->create_product_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->create_product_btn->Location = System::Drawing::Point(118, 714);
			this->create_product_btn->Name = L"create_product_btn";
			this->create_product_btn->Size = System::Drawing::Size(186, 29);
			this->create_product_btn->TabIndex = 2;
			this->create_product_btn->Text = L"Создать спецификацию";
			this->create_product_btn->UseVisualStyleBackColor = true;
			this->create_product_btn->Click += gcnew System::EventHandler(this, &Form1::create_new_product);
			// 
			// create_product_screen
			// 
			this->create_product_screen->Controls->Add(this->emploee_listBox);
			this->create_product_screen->Controls->Add(this->info_label);
			this->create_product_screen->Controls->Add(this->listBox1);
			this->create_product_screen->Controls->Add(this->vScrollBar1);
			this->create_product_screen->Location = System::Drawing::Point(33, 105);
			this->create_product_screen->Name = L"create_product_screen";
			this->create_product_screen->Size = System::Drawing::Size(635, 603);
			this->create_product_screen->TabIndex = 5;
			this->create_product_screen->TabStop = false;
			this->create_product_screen->Text = L"Создание продукта";
			this->create_product_screen->Visible = false;
			// 
			// info_label
			// 
			this->info_label->AutoSize = true;
			this->info_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_label->Location = System::Drawing::Point(285, 42);
			this->info_label->Name = L"info_label";
			this->info_label->Size = System::Drawing::Size(58, 15);
			this->info_label->TabIndex = 102;
			this->info_label->Text = L"infoLable";
			this->info_label->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(6, 30);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(180, 292);
			this->listBox1->TabIndex = 101;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::get_pfs_details_info);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->LargeChange = 100;
			this->vScrollBar1->Location = System::Drawing::Point(612, 14);
			this->vScrollBar1->Maximum = 1000000;
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(20, 586);
			this->vScrollBar1->SmallChange = 10;
			this->vScrollBar1->TabIndex = 100;
			// 
			// count_of_product
			// 
			this->count_of_product->Location = System::Drawing::Point(579, 17);
			this->count_of_product->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->count_of_product->Name = L"count_of_product";
			this->count_of_product->Size = System::Drawing::Size(57, 31);
			this->count_of_product->TabIndex = 6;
			this->count_of_product->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->count_of_product->Visible = false;
			// 
			// apply_btn
			// 
			this->apply_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->apply_btn->Location = System::Drawing::Point(561, 714);
			this->apply_btn->Name = L"apply_btn";
			this->apply_btn->Size = System::Drawing::Size(107, 29);
			this->apply_btn->TabIndex = 4;
			this->apply_btn->Text = L"Подтвердить";
			this->apply_btn->UseVisualStyleBackColor = true;
			this->apply_btn->Click += gcnew System::EventHandler(this, &Form1::apply);
			// 
			// name_of_product
			// 
			this->name_of_product->Location = System::Drawing::Point(7, 17);
			this->name_of_product->Name = L"name_of_product";
			this->name_of_product->Size = System::Drawing::Size(340, 31);
			this->name_of_product->TabIndex = 0;
			this->name_of_product->Click += gcnew System::EventHandler(this, &Form1::clear_this);
			// 
			// elements_of_product
			// 
			this->elements_of_product->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->elements_of_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->elements_of_product->FormattingEnabled = true;
			this->elements_of_product->Location = System::Drawing::Point(7, 135);
			this->elements_of_product->Name = L"elements_of_product";
			this->elements_of_product->Size = System::Drawing::Size(355, 565);
			this->elements_of_product->TabIndex = 1;
			// 
			// elements_GB
			// 
			this->elements_GB->Controls->Add(this->create_product_line_btn);
			this->elements_GB->Controls->Add(this->products_tree);
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
			this->elements_GB->Controls->Add(this->add_modul_btn);
			this->elements_GB->Controls->Add(this->corpuses_button);
			this->elements_GB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->elements_GB->Location = System::Drawing::Point(206, 55);
			this->elements_GB->Name = L"elements_GB";
			this->elements_GB->Size = System::Drawing::Size(372, 766);
			this->elements_GB->TabIndex = 14;
			this->elements_GB->TabStop = false;
			this->elements_GB->Text = L"Добавьте необходимые эллементы";
			this->elements_GB->Visible = false;
			// 
			// create_product_line_btn
			// 
			this->create_product_line_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->create_product_line_btn->Location = System::Drawing::Point(103, 689);
			this->create_product_line_btn->Name = L"create_product_line_btn";
			this->create_product_line_btn->Size = System::Drawing::Size(170, 23);
			this->create_product_line_btn->TabIndex = 14;
			this->create_product_line_btn->Text = L"Создать линейку продукции";
			this->create_product_line_btn->UseVisualStyleBackColor = true;
			this->create_product_line_btn->Visible = false;
			this->create_product_line_btn->Click += gcnew System::EventHandler(this, &Form1::cleate_new_line);
			// 
			// products_tree
			// 
			this->products_tree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->products_tree->Location = System::Drawing::Point(6, 74);
			this->products_tree->Name = L"products_tree";
			this->products_tree->Size = System::Drawing::Size(285, 577);
			this->products_tree->TabIndex = 0;
			this->products_tree->Visible = false;
			this->products_tree->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::select_product_type);
			// 
			// braisings_button
			// 
			this->braisings_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->braisings_button->Location = System::Drawing::Point(198, 718);
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
			this->covers_button->Location = System::Drawing::Point(291, 718);
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
			this->packeges_button->Location = System::Drawing::Point(6, 718);
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
			this->diffusers_button->Location = System::Drawing::Point(291, 689);
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
			this->linses_button->Location = System::Drawing::Point(103, 718);
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
			this->bloks_button->Location = System::Drawing::Point(198, 689);
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
			this->moduls_button->Location = System::Drawing::Point(103, 689);
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
			// add_modul_btn
			// 
			this->add_modul_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_modul_btn->Location = System::Drawing::Point(103, 660);
			this->add_modul_btn->Name = L"add_modul_btn";
			this->add_modul_btn->Size = System::Drawing::Size(170, 23);
			this->add_modul_btn->TabIndex = 1;
			this->add_modul_btn->Text = L"Добавить эллемент";
			this->add_modul_btn->UseVisualStyleBackColor = true;
			this->add_modul_btn->Click += gcnew System::EventHandler(this, &Form1::add_elements);
			// 
			// corpuses_button
			// 
			this->corpuses_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->corpuses_button->Location = System::Drawing::Point(6, 688);
			this->corpuses_button->Name = L"corpuses_button";
			this->corpuses_button->Size = System::Drawing::Size(75, 23);
			this->corpuses_button->TabIndex = 4;
			this->corpuses_button->Text = L"Крпуса";
			this->corpuses_button->UseVisualStyleBackColor = true;
			this->corpuses_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// get_DB
			// 
			this->get_DB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->get_DB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->get_DB->Location = System::Drawing::Point(12, 229);
			this->get_DB->Name = L"get_DB";
			this->get_DB->Size = System::Drawing::Size(183, 54);
			this->get_DB->TabIndex = 2;
			this->get_DB->Text = L"Комплектующие";
			this->get_DB->UseVisualStyleBackColor = true;
			this->get_DB->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(57, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Меню";
			// 
			// get_products_db_btn
			// 
			this->get_products_db_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->get_products_db_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->get_products_db_btn->Location = System::Drawing::Point(12, 160);
			this->get_products_db_btn->Name = L"get_products_db_btn";
			this->get_products_db_btn->Size = System::Drawing::Size(183, 63);
			this->get_products_db_btn->TabIndex = 4;
			this->get_products_db_btn->Text = L"Продукция";
			this->get_products_db_btn->UseVisualStyleBackColor = true;
			this->get_products_db_btn->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// get_emploee_button
			// 
			this->get_emploee_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->get_emploee_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->get_emploee_button->Location = System::Drawing::Point(12, 289);
			this->get_emploee_button->Name = L"get_emploee_button";
			this->get_emploee_button->Size = System::Drawing::Size(183, 51);
			this->get_emploee_button->TabIndex = 5;
			this->get_emploee_button->Text = L"Cборщики";
			this->get_emploee_button->UseVisualStyleBackColor = true;
			this->get_emploee_button->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(17, 702);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(183, 44);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Закрыть";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 459);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"label1";
			// 
			// create_score_btn
			// 
			this->create_score_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_score_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->create_score_btn->Location = System::Drawing::Point(12, 94);
			this->create_score_btn->Name = L"create_score_btn";
			this->create_score_btn->Size = System::Drawing::Size(183, 60);
			this->create_score_btn->TabIndex = 15;
			this->create_score_btn->Text = L"Сформировать счет";
			this->create_score_btn->UseVisualStyleBackColor = true;
			this->create_score_btn->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// score_db_btn
			// 
			this->score_db_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->score_db_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->score_db_btn->Location = System::Drawing::Point(12, 346);
			this->score_db_btn->Name = L"score_db_btn";
			this->score_db_btn->Size = System::Drawing::Size(183, 51);
			this->score_db_btn->TabIndex = 16;
			this->score_db_btn->Text = L"Cчета";
			this->score_db_btn->UseVisualStyleBackColor = true;
			this->score_db_btn->Click += gcnew System::EventHandler(this, &Form1::get_dataBase);
			// 
			// emploee_listBox
			// 
			this->emploee_listBox->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->emploee_listBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->emploee_listBox->FormattingEnabled = true;
			this->emploee_listBox->ItemHeight = 16;
			this->emploee_listBox->Location = System::Drawing::Point(6, 338);
			this->emploee_listBox->Name = L"emploee_listBox";
			this->emploee_listBox->Size = System::Drawing::Size(180, 260);
			this->emploee_listBox->TabIndex = 103;
			this->emploee_listBox->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1349, 829);
			this->Controls->Add(this->score_db_btn);
			this->Controls->Add(this->create_score_btn);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->elements_GB);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->get_emploee_button);
			this->Controls->Add(this->get_products_db_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->get_DB);
			this->Name = L"Form1";
			this->Text = L"Система_Профсвет";
			this->Load += gcnew System::EventHandler(this, &Form1::load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->assambly_price_updown))->EndInit();
			this->create_product_screen->ResumeLayout(false);
			this->create_product_screen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_of_product))->EndInit();
			this->elements_GB->ResumeLayout(false);
			this->elements_GB->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:int count_product = 1;
	//используемые массивы	
	
	cli::array<TreeNode^, 1>^ tree_nodes = gcnew cli::array<TreeNode^, 1>(1000000);	
	cli::array<Int32^, 1>^ ids_of_details = gcnew cli::array<Int32^, 1>(100000);	
	cli::array<Label^, 1>^ lables;
	cli::array<NumericUpDown^, 1>^ up_down_buttons;
	Generic::SortedDictionary<String^, Product_type^>product_types1;
	Generic::SortedDictionary<int, Detail^>details;
	Generic::SortedDictionary<String^, Product_for_sale^>sales_products;
	Generic::SortedDictionary<String^, String^>score_info;


	//данные координат
	private:int y = 30;	
		   /*переключатель кнопок управления на экранах
		   1 - создание линейки продукции
		   2 - добавление в линейку модели продукта
		   3 - добавление конечного продукта данной модели
		   4 - работа с созданием накладной на работу
		   5 - работа с базой сборщиков
		   6 - работа со статистикой
		   7 - работа с базой данных продукции, добавление и удаление продукции
		   8 - ?
		   9 - ?
		   10 - ?

		   */
		   
	private:int controll_button;
	private:String^ type_article;
	private:String^ product_article;
	private:bool add_element_to_line=false;
    private:Product_type^ product_type;
	private:Product^ product;
	private:String^ added_product;
	private:int full_price;
	private:String^ score;

	//загрузочный метод (загрузка информации из базы данных)
private: System::Void load(System::Object^ sender, System::EventArgs^ e) {
	
	srand(time(0));
	controll_button = 1;
	name_of_product->Visible = false;
	listBox1->AutoSize = true;
	
	
	for (int i = 0; i < 2000; i++) {
		bool set_id = true;
		
		Detail^det= (gcnew Detail("Имя " + rand()%100,(rand()%8+1)," description", rand()%1000,  rand()%500));
				
		int id;
		for (int j = 0; j < 2000; j++) {
			id = rand() % 899+100;
			
			if (Int32::Parse((det->getModel() + id.ToString())) == ids_of_details[j]) {
				set_id = false;
				j = 0;
			}
		}
		if (set_id) {
		det->setId(det->getModel()+id.ToString());
		details[Convert::ToInt32(det->getModel() + id.ToString())] = det;
		
		}
		set_id = true;
		
	}
}
	   //показать список базу данных
	private: System::Void get_dataBase(System::Object^ sender, System::EventArgs^ e) {
		y = 30;
		assambly_price_updown->Visible = false;
		elements_of_product->Items->Clear();
		if (sender->Equals(get_DB)) {
			get_details_db();
		}
		else if (sender->Equals(get_products_db_btn)) {
			get_products_db();
			
	}
	else if (sender->Equals(create_score_btn)) {
			
			create_score();

		}
	
}

	  
	   //добавить эллемент в список возможных эллементов продукта
private: System::Void add_elements(System::Object^ sender, System::EventArgs^ e) {
	y = 30;
	
	if (!add_element_to_line) {
		add_detail_to_model();
	}
	else if(controll_button==2){
		add_model_to_line();

	}
	else if (controll_button == 0) {
		score_detailing();
	}
	

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
	   //сортировка по моделям (необходимо изменить под мар)////////////////////////////////////////////////////////////
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

	   //запись компонентов продукта на поле для создания//////////////////////////////////////////////////
private: System::Void create_new_product(System::Object^ sender, System::EventArgs^ e) {
	y = 30;
	lables = gcnew cli::array<Label^, 1>(elements_of_product->CheckedItems->Count);
	up_down_buttons = gcnew cli::array<NumericUpDown^, 1>(elements_of_product->CheckedItems->Count);
	//добавление сборщиков
	if (controll_button == 0) {

	}//создание модели продукции
	else if (controll_button == 2) {
		create_modul_of_product();

	}	//сщздание продукта модели	
	else if (controll_button=3) {		create_sale_product();
		
	}
	y = 30;
	label1->Text =  lables->Length+ " " +up_down_buttons->Length ;

}

		//найти детать по id
private: System::Void find_item(System::Object^ sender, System::EventArgs^ e) {
	
	if (find_textBox->Text->Length == 4) {	  
		all_elements->Items->Add(details[Convert::ToInt32(find_textBox->Text)]->getInfo());		
	}
	else find_textBox->Text = "ошибка ввода";
	
	
}


			//в разработке
private: System::Void back(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void close(System::Object^ sender, System::EventArgs^ e) {

}

			//добавление нового типа продукции (применить)////////////////////////////////////////////////////////////////////////////////
private: System::Void apply(System::Object^ sender, System::EventArgs^ e) {
	y = 30;
	
	if (controll_button == 0){

	}
	//добавление новой линейки продукции
	else if (controll_button == 1) {
		 add_new_line_apply();
	}
	 //добавление деталей в модель
	 else if (controll_button ==2) {
		 add_details_to_model_apply();
	 }
	 //создание продукта для продажи
	 else if (controll_button == 3) {
		 create_pfs_apply();		
	}
	 elements_of_product->Items->Clear();
	 label1->Text = controll_button + "";	
}

			//обновить базу данных деталей///////////////////////////////////////////////////////////////////////////////////////
	private:void updateDataBase() {
		   all_elements->Items->Clear();
		   for each (int key in details.Keys) {
			   all_elements->Items->Add(details[key]->getInfo());
		 }

		   all_elements->Visible = true;
		   buttons_sort_visible();
	   }
		   //показать/убрать кнопки сортировки базы деталей////////////////////////////////////////////////////////////////////////
	private:void buttons_sort_visible() {
	
			packeges_button->Visible = true;
			covers_button->Visible = true;
			corpuses_button->Visible = true;
			bloks_button->Visible = true;
			diffusers_button->Visible = true;
			moduls_button->Visible = true;
			linses_button->Visible = true;
			braisings_button->Visible = true;	
			add_modul_btn->Visible = true;
	}

	private:void buttons_sort_invisible() {
			packeges_button->Visible = false;
			covers_button->Visible = false;
			corpuses_button->Visible = false;
			bloks_button->Visible = false;
			diffusers_button->Visible = false;
			moduls_button->Visible = false;
			linses_button->Visible = false;
			braisings_button->Visible = false;
			add_modul_btn->Visible = false;
			
		   }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void work_with_db(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Visible = true;
	create_product_screen->Visible = true;
	elements_of_product->Visible = true;
	for (int i = 0; i < all_elements->CheckedItems->Count; i++) {
		if (!elements_of_product->Items->Contains(all_elements->CheckedItems[i]->ToString())) {
			elements_of_product->Items->Add(all_elements->CheckedItems[i]->ToString());
		}

	}
	groupBox1->Visible = true;
	create_product_screen->Controls->Clear();
	controll_button = 3;
	create_product_btn->Text = "Работать с базой";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	   //работа с деревом продукции
private: System::Void select_product_type(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	info_label->Visible = false;
	score_number_tb->Visible = false;
	company_name_tb->Visible = false;
	save_score_btn->Visible = false;
			if (controll_button == 0) {
				if (e->Node->Text->Length < 10) {
					added_product = e->Node->Text;
				}
				
			}
			else {
				if (e->Node->Text->Length == 10) {
					name_of_product->Visible = false;
					create_product_screen->Controls->Clear();
					product_type = product_types1[e->Node->Text];
					Label^ type = (gcnew System::Windows::Forms::Label());
					type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					type->AutoSize = true;
					type->Location = System::Drawing::Point(10, y);
					type->Name = L"label4";
					type->Size = System::Drawing::Size(70, 25);
					type->TabIndex = 2;
					type->Text = "серия - " + e->Node->Text;
					type->Visible = true;
					type_article = e->Node->Text;
					create_product_screen->Controls->Add(type);
					create_product_screen->Visible = true;
					groupBox1->Visible = true;
					elements_of_product->Visible = false;
					create_product_btn->Text = "Создать модель";
				}
				else if (e->Node->Text->Length > 10) {
					name_of_product->Visible = true;
					create_product_screen->Controls->Clear();
					type_article = e->Node->Text->Substring(0, 10);
					product_article = e->Node->Text;
					product_types1[type_article]->products[product_article]->getDetails();
					for each (Detail ^ d in product_types1[type_article]->products[e->Node->Text]->getDetails()) {
						if (d != nullptr && !elements_of_product->Items->Contains(d->getInfo())) {

							elements_of_product->Items->Add(d->getInfo());

						}
					}
					create_product_btn->Text = "Добавить деталь";
					create_product_screen->Visible = true;
					groupBox1->Visible = true;
					elements_of_product->Visible = true;
				
					controll_button = 3;
				}
				else if (e->Node->Text->Length < 10) {
					name_of_product->Visible = false;
					create_product_screen->Controls->Clear();
				
					create_product_screen->Visible = true;
					groupBox1->Visible = true;

					y = 30;


					for (int i = 0; i < sales_products[e->Node->Text]->getDetails()->Length; i++) {
						if (sales_products[e->Node->Text]->getDetails()[i] != nullptr) {
							Detail^ det = sales_products[e->Node->Text]->getDetails()[i];
							Label^ type = (gcnew System::Windows::Forms::Label());
							type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
								static_cast<System::Byte>(204)));
							type->AutoSize = true;
							type->Location = System::Drawing::Point(10, y);
							type->Name = L"label4";
							type->Size = System::Drawing::Size(70, 25);
							type->TabIndex = 2;
							type->Text = det->getId() + " : "
								+ det->getName() + " модель - " + det->getModel()
								+ " необходимо - " + det->getCount_for_create()
								+ " на складе - " + det->getCount();
							type->Visible = true;
							create_product_screen->Controls->Add(type);


							y += 25;
						}
						else break;
					}
					y = 25;
					Label^ type = (gcnew System::Windows::Forms::Label());
					type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					type->AutoSize = true;
					type->Location = System::Drawing::Point(400, y);
					type->Name = L"label4";
					type->Size = System::Drawing::Size(70, 25);
					type->TabIndex = 2;
					type->Text = "Стоимость деталей - " + sales_products[e->Node->Text]->getDetailsPrice() +
						"\n Стоимость сборки - " + sales_products[e->Node->Text]->getAssemblyPrice() +
						"\n Себестоимость - " + sales_products[e->Node->Text]->getFullPrice();
					type->Visible = true;

					create_product_screen->Controls->Add(type);
					label1->Text = "complete";
					y = 30;

				}
			}
						
			
					
}
//создание счета///////////////////////////////////////////////////////////////////////////////////////////////////////
private:void create_score() {
	score_number_tb->Visible = false;
	company_name_tb->Visible = false;
	save_score_btn->Visible = false;
	score_info.Clear();
	score = "";
	info_label->Visible = false;
	lables = gcnew cli::array<Label^, 1>(0);
	up_down_buttons = gcnew cli::array<NumericUpDown^, 1>(0);

	label1->Text = "score";
	controll_button = 0;
	elements_GB->Visible = false;
	products_tree->Visible = false;
	products_tree->Nodes->Clear();
	create_product_screen->Controls->Clear();
	controll_button = 0;
	buttons_sort_invisible();
	create_product_btn->Visible = true;
	groupBox1->Visible = false;
	label1->Text = "error";
	for each (String ^ key in product_types1.Keys)
	{
		TreeNode^ node = gcnew TreeNode(key);
		label1->Text = key;
		for each (Product ^ p in product_types1[key]->products.Values) {
			TreeNode^ sub_node = gcnew TreeNode(p->getArticle());
			label1->Text = p->getArticle();
			for each (String ^ pfs in p->sale_products.Keys) {
				TreeNode^ sub_sub_node = gcnew TreeNode(p->sale_products[pfs]->getName());
				sub_node->Nodes->Add(sub_sub_node);
				label1->Text = p->sale_products[pfs]->getName();
			}

			node->Nodes->Add(sub_node);
		}

		products_tree->Nodes->Add(node);

	}
	groupBox1->Visible = true;
	add_modul_btn->Visible = true;
	elements_GB->Visible = true;
	all_elements->Visible = false;
	elements_of_product->Visible = false;
	create_product_screen->Visible = true;
	products_tree->Visible = true;

}
	   //работа с базой данных продукции//////////////////////////////////////////////////////////////////////////////////////////////
private:void get_products_db() {
	score_number_tb->Visible = false;
	company_name_tb->Visible = false;
	save_score_btn->Visible = false;
	controll_button = 2;
	info_label->Visible = false;
	create_product_line_btn->Visible = true;
	products_tree->Nodes->Clear();	
	buttons_sort_invisible();
	create_product_btn->Visible = true;
	groupBox1->Visible = false;
	label1->Text = "error";

	for each (String ^ key in product_types1.Keys)
	{
		//product_types1[key]->products.Keys;
		TreeNode^ node = gcnew TreeNode(key);
		//int i = 0;
		label1->Text = key;
		for each (Product ^ p in product_types1[key]->products.Values) {
			TreeNode^ sub_node = gcnew TreeNode(p->getArticle());
			label1->Text = p->getArticle();
			for each (String ^ pfs in p->sale_products.Keys) {
				TreeNode^ sub_sub_node = gcnew TreeNode(p->sale_products[pfs]->getName());
				sub_node->Nodes->Add(sub_sub_node);
				label1->Text = p->sale_products[pfs]->getName();
			}

			node->Nodes->Add(sub_node);
		}

		products_tree->Nodes->Add(node);

	}

	elements_GB->Visible = true;
	all_elements->Visible = false;
	products_tree->Visible = true;

	   }
	   //работа с базой данных деталей//////////////////////////////////////////////////////////////////////////////////////////////////
private:void get_details_db() {
	updateDataBase();
	products_tree->Visible = false;

	elements_GB->Visible = true;

}
	   //работа с базой данных сборщиков/////////////////////////////////////////////////////////////////////////////////////
private:void get_assembler_db() {

}
	   //добавление новой линейки продукции/////////////////////////////////////////////////////////////////////////////////
private:void get_new_products_line() {
	
	info_label->Visible = false;
	controll_button = 1;
	name_of_product->Visible = true;
	elements_of_product->Visible = false;
	create_product_btn->Visible = false;
	elements_GB->Visible = false;
	name_of_product->Text = "Артикл";
	create_product_screen->Controls->Clear();
	create_product_screen->Visible = true;
	groupBox1->Visible = true;
	   }
	   //добавление модели в линейку продукции///////////////////////////////////////////////////////////////////////////////////
private:void add_model_to_line() {
	create_product_line_btn->Visible = false;
	String^ str;
	String^ substr;

	lables = gcnew cli::array<Label^, 1>(all_elements->CheckedItems->Count);
	Product^ product = (gcnew Product(Convert::ToString(product_types1[type_article]->products.Count + 1), name_of_product->Text->ToString(), type_article));

	for (int i = 0; i < all_elements->CheckedItems->Count; i++) {
		str = all_elements->CheckedItems[i]->ToString();
		y += 25;
		substr = str->Substring(0, 4);

		Label^ label = (gcnew System::Windows::Forms::Label());
		label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		label->AutoSize = true;
		label->Location = System::Drawing::Point(10, y);
		label->Name = L"label4";
		label->Size = System::Drawing::Size(70, 25);
		label->TabIndex = 2;
		if (details.ContainsKey(Convert::ToInt32(substr))) {
			label->Text = details[Convert::ToInt32(substr)]->getInfo();
		}
		else {
			label->Text = "Нет ключа";

		}

		label->Visible = true;

		if (lables[i] == nullptr) {
			lables[i] = label;

		}

	}
	product_types1[type_article]->products.Add(product->getArticle(), product);

	for (int i = 0; i < all_elements->CheckedItems->Count; i++) {
		if (lables[i] != nullptr) {
			create_product_screen->Controls->Add(lables[i]);

		}
	}

	y = 30;

}
//работа со счетом////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private:void score_detailing() {
	int x = 30;
	score_number_tb->Visible = true;
	company_name_tb->Visible = true;
	save_score_btn->Visible = false;
	info_label->Visible = false;
	create_product_screen->Controls->Clear();
	listBox1->Items->Clear();
	if (!score_info.ContainsKey(added_product)) {
		score_info.Add(added_product, sales_products[added_product]->getInfo());
		score += "\t" + added_product + "\n" + sales_products[added_product]->getInfo() + "\n";

	}

	lables = gcnew cli::array<Label^, 1>(score_info.Count);
	up_down_buttons = gcnew cli::array<NumericUpDown^, 1>(score_info.Count);
	int i = 0;
	listBox1->BeginUpdate();
	for each (String ^ key in score_info.Keys) {
		Label^ type = (gcnew System::Windows::Forms::Label());
		type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		type->AutoSize = true;
		type->Location = System::Drawing::Point(10, y);
		type->Name = L"label4";
		type->Size = System::Drawing::Size(70, 25);
		type->TabIndex = 2;
		type->Text = score_info[key];
		type->Visible = true;
		lables[i] = type;
		listBox1->Items->Add(String::Format("{0}",key ));

		

		NumericUpDown^ numemeric_up_down = (gcnew System::Windows::Forms::NumericUpDown());
		numemeric_up_down->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		numemeric_up_down->Location = System::Drawing::Point(200, x);
		numemeric_up_down->Name = L"set_count";
		numemeric_up_down->Size = System::Drawing::Size(50, 20);
		numemeric_up_down->TabIndex = 2;
		numemeric_up_down->Visible = true;
		numemeric_up_down->Maximum = 100000000;
		numemeric_up_down->Minimum = 1;
		up_down_buttons[i] = numemeric_up_down;

		for each (Detail ^ det in sales_products[added_product]->getDetails()) {
			if (det != nullptr) {
				y += 25;
			}

		}
		x += 20;
		i++;
	}
	label1->Text = score_info.Count + "";
	label1->Text = y + "";

	for (int j = 0; j < lables->Length; j++) {
		//create_product_screen->Controls->Add(lables[j]);
		create_product_screen->Controls->Add(up_down_buttons[j]);

	}
	create_product_screen->Controls->Add(listBox1);
	listBox1->EndUpdate();


}
	   //Добавление деталей в модель/////////////////////////////////////////////////////////////////////////////////////////////////////////
private:void add_detail_to_model() {
	
	create_product_btn->Text = "Создать спецификацию";
	controll_button = 1;
	elements_of_product->Visible = true;
	for (int i = 0; i < all_elements->CheckedItems->Count; i++) {
		if (!elements_of_product->Items->Contains(all_elements->CheckedItems[i]->ToString())) {
			elements_of_product->Items->Add(all_elements->CheckedItems[i]->ToString());
		}

	}
	groupBox1->Visible = true;
	create_product_screen->Controls->Clear();

}
	   private:void create_modul_of_product() {
		   buttons_sort_visible(); create_product_line_btn->Visible = false;

		   products_tree->Visible = false;
		   add_element_to_line = true;

		   updateDataBase();

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

			   if (lables[i] == nullptr) {
				   lables[i] = label4;
			   }
		   }

		   for (int i = 0; i < elements_of_product->CheckedItems->Count; i++) {
			   if (lables[i] != nullptr) {
				   create_product_screen->Controls->Add(lables[i]);

			   }
		   }

		   y = 25;
		   elements_of_product->Visible = false;

	   }
//создание продукта модели/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private:void create_sale_product() {
		info_label->Visible = false;
		assambly_price_updown->Value = assambly_price_updown->Minimum;
		assambly_price_updown->Visible = true;
		create_product_line_btn->Visible = false;
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

			if (lables[i] == nullptr) {
				lables[i] = label4;
			}


			NumericUpDown^ numemeric_up_down = (gcnew System::Windows::Forms::NumericUpDown());
			numemeric_up_down->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			numemeric_up_down->Location = System::Drawing::Point(450, y);
			numemeric_up_down->Name = L"set_count";
			numemeric_up_down->Size = System::Drawing::Size(50, 25);
			numemeric_up_down->TabIndex = 0;
			numemeric_up_down->Visible = true;
			numemeric_up_down->Maximum = 100000000;
			numemeric_up_down->Minimum = 1;

			if (up_down_buttons[i] == nullptr) {
				up_down_buttons[i] = numemeric_up_down;
			}

		}
		for (int i = 0; i < elements_of_product->CheckedItems->Count; i++) {
			if (up_down_buttons[i] != nullptr) {
				create_product_screen->Controls->Add(up_down_buttons[i]);
				create_product_screen->Controls->Add(lables[i]);

			}

		}
		elements_of_product->Visible = false;
	}

		   ///применить////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		   //новую линейку
private:void add_new_line_apply() {
	info_label->Visible = false;
	
	if (name_of_product->Text->Length != 10) {
		name_of_product->Text = "Артикул должен содержать не менее 10 символов";
	}
	else {
		Product_type^ new_type = (gcnew Product_type(name_of_product->Text->ToString()));
		if (!product_types1.ContainsKey(name_of_product->Text->ToString())) {
			product_types1.Add(name_of_product->Text->ToString(), new_type);
		}
		groupBox1->Visible = false;
	}
	get_products_db();
}
	   //новую модель
private:void add_details_to_model_apply() {
	String^ str;
	String^ subString;
	for (int i = 0; i < lables->Length; i++) {
		str = lables[i]->Text;

		subString = str->Substring(0, 4);
		int count = product_types1[type_article]->products.Count;
		product_types1[type_article]->products[type_article + "-" + count]->addDetail(details[Convert::ToInt32(subString)]);
	}
	get_products_db();
}
	   // новый продукт
private:void create_pfs_apply() {
	info_label->Visible = false;
	if (name_of_product->Text->Length < 10) {
		Product_for_sale^ product_for_sale = gcnew Product_for_sale(name_of_product->Text, Convert::ToInt32(assambly_price_updown->Value), product_types1[type_article]->products[product_article]->getArticle(), product_types1[type_article]->products[product_article]->sale_products.Count + 1);

		for (int i = 0; i < lables->Length; i++) {
			String^ substr = lables[i]->Text->Substring(0, 4);
			cout << i << endl;
			product_for_sale->addDetail(details[Convert::ToInt32(substr)], Convert::ToInt32(up_down_buttons[i]->Value));
		}
		product_for_sale->setPrice();

		if (!product_types1[type_article]->products[product_article]->sale_products.ContainsKey(product_for_sale->getName())) {
			product_types1[type_article]->products[product_article]->sale_products.Add(product_for_sale->getName(), product_for_sale);
		}
		else { name_of_product->Text = "Продукт с таким именем уже существует"; }

		if (!sales_products.ContainsKey(product_for_sale->getName())) {
			sales_products.Add(product_for_sale->getName(), product_for_sale);
		}
		else name_of_product->Text = "Продукт с таким именем уже существует";

	}
	else { name_of_product->Text = "Имя модели должно быть меньше 10 симворлов"; }
	get_products_db();

}
//создание новой линейки////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void cleate_new_line(System::Object^ sender, System::EventArgs^ e) {
	get_new_products_line();
}
	   //подробный показдеталей в счете

private: System::Void get_pfs_details_info(System::Object^ sender, System::EventArgs^ e) {
	
	info_label->Text = sales_products[listBox1->Text]->getInfo();
	create_product_screen->Controls->Add(info_label);
	info_label->Visible = true;
	
	label1->Text = sales_products[listBox1->Text]->getInfo();
	
	
}


private: System::Void save_score(System::Object^ sender, System::EventArgs^ e) {
	if (!score_number_tb->Text->Equals("№Счета") && !company_name_tb->Text->Equals("Название компании") &&
		score_number_tb->Text->Length > 0 && company_name_tb->Text->Length > 0) {
		RichTextBox^ richTextBox1 = gcnew RichTextBox();
		richTextBox1->AppendText("\tСчет №"+score_number_tb->Text+"\t к компании "+company_name_tb->Text+"\n"+ score);
		//richTextBox1->AppendText();
		// Create a SaveFileDialog to request a path and file name to save to.
		SaveFileDialog^ saveFile1 = gcnew SaveFileDialog;

		// Initialize the SaveFileDialog to specify the RTF extension for the file.
		saveFile1->DefaultExt = "*.txt";
		saveFile1->Filter = "txt files|*.txt";

		// Determine if the user selected a file name from the saveFileDialog.
		if (saveFile1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			saveFile1->FileName->Length > 0)
		{
			// Save the contents of the RichTextBox into the file.
			richTextBox1->SaveFile(saveFile1->FileName, RichTextBoxStreamType::PlainText);
		}
	}
	
	
}
	   private:void save_score_to_db() {
		   save_score_btn->Visible = true;


	   }
};


}
