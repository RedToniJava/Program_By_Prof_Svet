#pragma once
#include"Detail.h"
using namespace System;

public ref class Product_for_sale {
private:double details_price;
private:int assembly_price;
private:String^ article;
private:String^ name;

public: Product_for_sale(String^ name, int assembly, String^article,int number);
public: Collections::Generic::SortedDictionary<Detail^, int> details;


public:void setPrice();
public:double getDetailsPrice();
public: double getFullPrice();
public:int getAssemblyPrice();


};