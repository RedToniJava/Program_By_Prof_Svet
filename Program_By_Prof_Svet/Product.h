#pragma once
#include"Detail.h"

using namespace System;

public ref class Product{
private:int price;
private:String^ article;
private:String^ name;
private:String^ description;
public: Product(String^ name, String^ description);
public:cli::array<Detail^, 1>^ details= gcnew cli::array<Detail^, 1>(50);;
public:void add_detail(Detail^ det);
public:String^ getInfo();

public:int getPrice();
public:String^ getName();
public:String^ getDescription();


};
