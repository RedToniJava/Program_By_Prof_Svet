#pragma once
using namespace System;


public ref class Detail {
private:String^ name;
private:String^ model;
private:int price;
private:int count;
public:Detail(String^name,String^model, int price, int count);


public:String^ getName();
public:String^ getModel();
public:int getPrice();
public:int getCount();
public:String^ getInfo();
};

