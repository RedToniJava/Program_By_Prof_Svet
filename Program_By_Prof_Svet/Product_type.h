#pragma once


using namespace System;

public ref class Product_type{


private:String^ name;
private:String^ description;
public: Product_type(String^ name, String^ description);
public:String^ getName();
public:String^ getDescription();


};
