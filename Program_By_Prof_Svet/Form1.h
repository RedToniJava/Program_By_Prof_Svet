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
	private: System::Windows::Forms::Panel^ panel1;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ get_DB;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::CheckedListBox^ all_elements;

	private: System::Windows::Forms::Button^ add_modul;

	private: System::Windows::Forms::Label^ label3;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->find_button = (gcnew System::Windows::Forms::Button());
			this->find_textBox = (gcnew System::Windows::Forms::TextBox());
			this->covers_button = (gcnew System::Windows::Forms::Button());
			this->packeges_button = (gcnew System::Windows::Forms::Button());
			this->braisings_button = (gcnew System::Windows::Forms::Button());
			this->linses_button = (gcnew System::Windows::Forms::Button());
			this->moduls_button = (gcnew System::Windows::Forms::Button());
			this->diffusers_button = (gcnew System::Windows::Forms::Button());
			this->bloks_button = (gcnew System::Windows::Forms::Button());
			this->corpuses_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cansel_button = (gcnew System::Windows::Forms::Button());
			this->create_product = (gcnew System::Windows::Forms::Button());
			this->elements_of_product = (gcnew System::Windows::Forms::CheckedListBox());
			this->name_of_product = (gcnew System::Windows::Forms::TextBox());
			this->add_modul = (gcnew System::Windows::Forms::Button());
			this->all_elements = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->get_DB = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->find_button);
			this->panel1->Controls->Add(this->find_textBox);
			this->panel1->Controls->Add(this->covers_button);
			this->panel1->Controls->Add(this->packeges_button);
			this->panel1->Controls->Add(this->braisings_button);
			this->panel1->Controls->Add(this->linses_button);
			this->panel1->Controls->Add(this->moduls_button);
			this->panel1->Controls->Add(this->diffusers_button);
			this->panel1->Controls->Add(this->bloks_button);
			this->panel1->Controls->Add(this->corpuses_button);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->add_modul);
			this->panel1->Controls->Add(this->all_elements);
			this->panel1->Location = System::Drawing::Point(347, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(990, 782);
			this->panel1->TabIndex = 0;
			// 
			// find_button
			// 
			this->find_button->Location = System::Drawing::Point(125, 58);
			this->find_button->Name = L"find_button";
			this->find_button->Size = System::Drawing::Size(75, 23);
			this->find_button->TabIndex = 13;
			this->find_button->Text = L"найти";
			this->find_button->UseVisualStyleBackColor = true;
			this->find_button->Click += gcnew System::EventHandler(this, &Form1::find_item);
			// 
			// find_textBox
			// 
			this->find_textBox->Location = System::Drawing::Point(4, 58);
			this->find_textBox->Name = L"find_textBox";
			this->find_textBox->Size = System::Drawing::Size(114, 20);
			this->find_textBox->TabIndex = 12;
			this->find_textBox->Text = L"введите id (4 цифры)";
			this->find_textBox->Click += gcnew System::EventHandler(this, &Form1::clear_this);
			// 
			// covers_button
			// 
			this->covers_button->Location = System::Drawing::Point(295, 740);
			this->covers_button->Name = L"covers_button";
			this->covers_button->Size = System::Drawing::Size(75, 23);
			this->covers_button->TabIndex = 11;
			this->covers_button->Text = L"Крышки";
			this->covers_button->UseVisualStyleBackColor = true;
			this->covers_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// packeges_button
			// 
			this->packeges_button->Location = System::Drawing::Point(3, 739);
			this->packeges_button->Name = L"packeges_button";
			this->packeges_button->Size = System::Drawing::Size(75, 23);
			this->packeges_button->TabIndex = 10;
			this->packeges_button->Text = L"Упаковки";
			this->packeges_button->UseVisualStyleBackColor = true;
			this->packeges_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// braisings_button
			// 
			this->braisings_button->Location = System::Drawing::Point(196, 739);
			this->braisings_button->Name = L"braisings_button";
			this->braisings_button->Size = System::Drawing::Size(75, 23);
			this->braisings_button->TabIndex = 9;
			this->braisings_button->Text = L"Крепеж+";
			this->braisings_button->UseVisualStyleBackColor = true;
			this->braisings_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// linses_button
			// 
			this->linses_button->Location = System::Drawing::Point(103, 739);
			this->linses_button->Name = L"linses_button";
			this->linses_button->Size = System::Drawing::Size(75, 23);
			this->linses_button->TabIndex = 8;
			this->linses_button->Text = L"Линзы";
			this->linses_button->UseVisualStyleBackColor = true;
			this->linses_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// moduls_button
			// 
			this->moduls_button->Location = System::Drawing::Point(103, 710);
			this->moduls_button->Name = L"moduls_button";
			this->moduls_button->Size = System::Drawing::Size(75, 23);
			this->moduls_button->TabIndex = 7;
			this->moduls_button->Text = L"Модули";
			this->moduls_button->UseVisualStyleBackColor = true;
			this->moduls_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// diffusers_button
			// 
			this->diffusers_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->diffusers_button->Location = System::Drawing::Point(295, 711);
			this->diffusers_button->Name = L"diffusers_button";
			this->diffusers_button->Size = System::Drawing::Size(75, 23);
			this->diffusers_button->TabIndex = 6;
			this->diffusers_button->Text = L"Рассеиватели";
			this->diffusers_button->UseVisualStyleBackColor = true;
			this->diffusers_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// bloks_button
			// 
			this->bloks_button->Location = System::Drawing::Point(196, 710);
			this->bloks_button->Name = L"bloks_button";
			this->bloks_button->Size = System::Drawing::Size(75, 23);
			this->bloks_button->TabIndex = 5;
			this->bloks_button->Text = L"Блоки";
			this->bloks_button->UseVisualStyleBackColor = true;
			this->bloks_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// corpuses_button
			// 
			this->corpuses_button->Location = System::Drawing::Point(3, 710);
			this->corpuses_button->Name = L"corpuses_button";
			this->corpuses_button->Size = System::Drawing::Size(75, 23);
			this->corpuses_button->TabIndex = 4;
			this->corpuses_button->Text = L"Крпуса";
			this->corpuses_button->UseVisualStyleBackColor = true;
			this->corpuses_button->Click += gcnew System::EventHandler(this, &Form1::choose_type_product);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(333, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Добавьте необходимые эллементы";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cansel_button);
			this->groupBox1->Controls->Add(this->create_product);
			this->groupBox1->Controls->Add(this->elements_of_product);
			this->groupBox1->Controls->Add(this->name_of_product);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(376, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(532, 666);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Создание продукта";
			this->groupBox1->Visible = false;
			// 
			// cansel_button
			// 
			this->cansel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cansel_button->Location = System::Drawing::Point(7, 631);
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
			this->create_product->Location = System::Drawing::Point(148, 633);
			this->create_product->Name = L"create_product";
			this->create_product->Size = System::Drawing::Size(172, 23);
			this->create_product->TabIndex = 2;
			this->create_product->Text = L"Создать спецификацию";
			this->create_product->UseVisualStyleBackColor = true;
			this->create_product->Click += gcnew System::EventHandler(this, &Form1::create_new_product);
			// 
			// elements_of_product
			// 
			this->elements_of_product->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->elements_of_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->elements_of_product->FormattingEnabled = true;
			this->elements_of_product->Location = System::Drawing::Point(6, 96);
			this->elements_of_product->Name = L"elements_of_product";
			this->elements_of_product->Size = System::Drawing::Size(314, 531);
			this->elements_of_product->TabIndex = 1;
			// 
			// name_of_product
			// 
			this->name_of_product->Location = System::Drawing::Point(6, 39);
			this->name_of_product->Name = L"name_of_product";
			this->name_of_product->Size = System::Drawing::Size(520, 31);
			this->name_of_product->TabIndex = 0;
			this->name_of_product->Text = L"Название ";
			this->name_of_product->Click += gcnew System::EventHandler(this, &Form1::clear_this);
			// 
			// add_modul
			// 
			this->add_modul->Location = System::Drawing::Point(103, 679);
			this->add_modul->Name = L"add_modul";
			this->add_modul->Size = System::Drawing::Size(163, 23);
			this->add_modul->TabIndex = 1;
			this->add_modul->Text = L"Добавить эллемент";
			this->add_modul->UseVisualStyleBackColor = true;
			this->add_modul->Click += gcnew System::EventHandler(this, &Form1::add_elements);
			// 
			// all_elements
			// 
			this->all_elements->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->all_elements->FormattingEnabled = true;
			this->all_elements->Location = System::Drawing::Point(0, 84);
			this->all_elements->Name = L"all_elements";
			this->all_elements->Size = System::Drawing::Size(367, 589);
			this->all_elements->TabIndex = 0;
			this->all_elements->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(802, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Рабочий экран";
			// 
			// get_DB
			// 
			this->get_DB->Location = System::Drawing::Point(17, 51);
			this->get_DB->Name = L"get_DB";
			this->get_DB->Size = System::Drawing::Size(272, 44);
			this->get_DB->TabIndex = 2;
			this->get_DB->Text = L"Показать базу данных";
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(17, 132);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(272, 44);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(17, 216);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(272, 44);
			this->button5->TabIndex = 5;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1349, 829);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->get_DB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Система_Профсвет";
			this->Load += gcnew System::EventHandler(this, &Form1::load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	cli::array<Detail^, 1>^ details=gcnew cli::array<Detail^, 1>(10000);
	cli::array<Product^, 1>^ products = gcnew cli::array<Product^, 1>(10000);
	cli::array<Int32^, 1>^ ids_of_details = gcnew cli::array<Int32^, 1>(10000);

	int y = 50;
	cli::array<Label^, 1>^ lables;
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
		all_elements->Items->Add(details[i]->getInfo());
		}
		set_id = true;
		
	}
}

private: System::Void get_dataBase(System::Object^ sender, System::EventArgs^ e) {
	all_elements->Visible = true;
}
	   
private: System::Void add_elements(System::Object^ sender, System::EventArgs^ e) {
	elements_of_product->Visible = true;
	for (int i = 0; i < all_elements->CheckedItems->Count; i++) {
		elements_of_product->Items->Add(all_elements->CheckedItems[i]->ToString());
	}		
	groupBox1->Visible = true;
}
private: System::Void clear_this(System::Object^ sender, System::EventArgs^ e) {
	if (sender->Equals(name_of_product)) {
		name_of_product->Text = "";
	}
	else if (sender->Equals(find_textBox)) {
		find_textBox->Text = "";
	}
}
private: System::Void choose_type_product(System::Object^ sender, System::EventArgs^ e) {
	all_elements->Items->Clear();
	if (sender == corpuses_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i]!=nullptr&&details[i]->getModel()==1) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == bloks_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 2) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == diffusers_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 3) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == moduls_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 4) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == linses_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 5) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == braisings_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 6) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == packeges_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 7) {
				j++;
				all_elements->Items->Add(j + " " + details[i]->getInfo());
			}
		}

	}
	else if (sender == covers_button) {
		int j = 0;
		for (int i = 0; i < 10000; i++) {
			if (details[i] != nullptr && details[i]->getModel() == 8) {
				j++;
				all_elements->Items->Add(j+" "+details[i]->getInfo());
			}
		}

	}
}

private: System::Void create_new_product(System::Object^ sender, System::EventArgs^ e) {
	elements_of_product->Visible = false;
	lables = gcnew cli::array<Label^, 1>(elements_of_product->CheckedItems->Count);
	for (int i = 0; i < elements_of_product->CheckedItems->Count; i++) {
		y += 35;
		Label^ label4 = (gcnew System::Windows::Forms::Label());
		label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
		else if (!lables[i]->Text->Equals(label4->Text)) {
			lables[i] = label4;
		}
		


	}
	for (int i = 0; i < elements_of_product->CheckedItems->Count; i++) {
		
		if (!groupBox1->Controls->Contains(lables[i])) {
		groupBox1->Controls->Add(lables[i]);
		}
		
		
	}
	


}
private: System::Void find_item(System::Object^ sender, System::EventArgs^ e) {

	if (find_textBox->Text->Length == 4) {
		all_elements->Visible = true;
	for (int i = 0; i < details->Length; i++) {
		if (details[i]!=nullptr&&find_textBox->Text->Equals(details[i]->getId())) {
			all_elements->Items->Clear();
			all_elements->Items->Add(details[i]->getInfo());
			break;
	}
	}
	}
	
	
}
private: System::Void back(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void close(System::Object^ sender, System::EventArgs^ e) {

}

};


}



