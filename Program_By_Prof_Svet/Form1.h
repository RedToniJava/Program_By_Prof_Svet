#pragma once
#include <iostream>
#include <string>
#include"Detail.h"

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
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ create_product;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ name_of_product;









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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->name_of_product = (gcnew System::Windows::Forms::TextBox());
			this->create_product = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
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
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->create_product);
			this->panel1->Controls->Add(this->checkedListBox1);
			this->panel1->Location = System::Drawing::Point(347, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(990, 782);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(19, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(333, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Добавьте необходимые эллементы";
			this->label3->Visible = false;
			// 
			// groupBox1
			// 
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
			// name_of_product
			// 
			this->name_of_product->Location = System::Drawing::Point(127, 50);
			this->name_of_product->Name = L"name_of_product";
			this->name_of_product->Size = System::Drawing::Size(288, 31);
			this->name_of_product->TabIndex = 0;
			this->name_of_product->Text = L"название";
			// 
			// create_product
			// 
			this->create_product->Location = System::Drawing::Point(189, 737);
			this->create_product->Name = L"create_product";
			this->create_product->Size = System::Drawing::Size(163, 23);
			this->create_product->TabIndex = 1;
			this->create_product->Text = L"Создать продукт";
			this->create_product->UseVisualStyleBackColor = true;
			this->create_product->Click += gcnew System::EventHandler(this, &Form1::create_P);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(23, 42);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(329, 679);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->Visible = false;
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
	int y = 50;
	cli::array<Label^, 1>^ lables;
private: System::Void load(System::Object^ sender, System::EventArgs^ e) {

	for (int i = 0; i < 100; i++) {
		String^ model;
		if (i % 2 == 0) {
			model = " Модель 1";
		}
		else { model = " Модель 2"; }

		Detail^det= (gcnew Detail("Имя " + (i + 1), model, i, i));
		details[i] = det;
		checkedListBox1->Items->Add(details[i]->getInfo());
	}
}

private: System::Void get_dataBase(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Visible = true;
}
	   
private: System::Void create_P(System::Object^ sender, System::EventArgs^ e) {
	lables = gcnew cli::array<Label^, 1>(checkedListBox1->CheckedItems->Count);
	for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
		y += 35;
		Label^ label4 = (gcnew System::Windows::Forms::Label());
		label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		label4->AutoSize = true;
		label4->Location = System::Drawing::Point(10, y);
		label4->Name = L"label4";
		label4->Size = System::Drawing::Size(70, 25);
		label4->TabIndex = 2;
		label4->Text =checkedListBox1->CheckedItems[i]->ToString();
		label4->Visible = true;
		lables[i] = label4;
		

	}
	for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
		groupBox1->Controls->Add(lables[i]);
	}
	//name_of_product->Visible = false;
		
	groupBox1->Visible = true;
}
};


}



