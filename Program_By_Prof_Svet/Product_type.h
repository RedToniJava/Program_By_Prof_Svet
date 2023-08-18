#pragma once
#include"Product.h"



using namespace System;


public ref class Product_type{


private:String^ name;
private:String^ description;
public: Product_type(String^ name, String^ description);
private: Collections::Generic::SortedDictionary<String^, Product^> products;

public:Collections::Generic::SortedDictionary<String^, Product^>  getProducts();
public: void addProduct(Product^ p);
public:String^ getName();
public:String^ getDescription();


};
