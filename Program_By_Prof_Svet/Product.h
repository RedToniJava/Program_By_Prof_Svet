#pragma once
#include"Detail.h"
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


public:String^ getArticle();

};