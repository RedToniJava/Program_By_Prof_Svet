#pragma once
#include "Product_type.h"
using namespace System;

public ref class Product {
private:String^ name;
private:String^ number;
private:String^ article;
private:int price_details;
private:int price_assembly;
public:Product(String^number,String^name,String^type);


private:String^ getArticle();

};