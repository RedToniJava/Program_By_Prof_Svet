#pragma once
#include"Product.h"



using namespace System;


public ref class Product_type{

private:String^ name;
private:String^ description;

public: Product_type(String^ name, String^ description);

public: Collections::Generic::SortedDictionary<String^, Product^> products;

//public: void addProduct(String^key,Product^ p);
//public: void removeProduct(String^ key);

public:String^ getName();
public:String^ getDescription();


};
