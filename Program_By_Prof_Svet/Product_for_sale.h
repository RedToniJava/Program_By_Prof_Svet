#pragma once
#include"Detail.h"
using namespace System;

public ref class Product_for_sale {
private:double details_price;
private:int assembly_price;
private:String^ article;
private:String^ name;
private:String^ info;

public: Product_for_sale(String^ name, int assembly, String^article,int number);
private:cli::array<Detail^, 1>^ details = gcnew cli::array<Detail^, 1>(100000);
public:void addDetail(Detail^ d,int count);

public:cli::array<Detail^, 1>^ getDetails();

public:void setPrice();
public:double getDetailsPrice();
public: double getFullPrice();
public:int getAssemblyPrice();
public:String^ getArticle();
public:String^ getName();
public:String^ getInfo();
};