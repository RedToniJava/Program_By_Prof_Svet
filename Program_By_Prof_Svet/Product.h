#pragma once
#include"Detail.h"
#include"Product_for_sale.h"
using namespace System;

public ref class Product {
private:String^ name;
private:String^ number;
private:String^ article;
private:String^ type;

public:Product(String^number,String^name,String^type);

private:cli::array<Detail^, 1>^ details=gcnew cli::array<Detail^, 1>(100000);
public:cli::array<Detail^, 1>^ getDetails();
public: void addDetail(Detail^ d);

public:Collections::Generic::SortedDictionary<String^, Product_for_sale^> sale_products;


public:String^ getArticle();

};