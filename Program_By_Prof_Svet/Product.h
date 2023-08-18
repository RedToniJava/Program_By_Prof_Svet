#pragma once
#include"Detail.h"
using namespace System;

public ref class Product {
private:String^ name;
private:String^ number;
private:String^ article;
private:String^ type;
private:int price_details;
private:int price_assembly;
public:Product(String^number,String^name,String^type);
public:Product(String^ number, String^ name, String^ type,int price_assembly);
private:cli::array<Detail^, 1>^ details=gcnew cli::array<Detail^, 1>(100000);
public:cli::array<Detail^, 1>^ getDetails();
public: void addDetail(Detail^ d);


public:String^ getArticle();

};