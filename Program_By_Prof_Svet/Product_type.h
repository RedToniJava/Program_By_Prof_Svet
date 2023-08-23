#pragma once
#include"Product.h"



using namespace System;


public ref class Product_type{

private:String^ name;


public: Product_type(String^ name);

public: Collections::Generic::SortedDictionary<String^, Product^> products;

public:String^ getName();



};
