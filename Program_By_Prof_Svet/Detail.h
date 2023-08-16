#pragma once
using namespace System;


public ref class Detail {
private:String^ name;
private:int model;
private:String^ description;
private:String^ id;
private:int price;
private:int count;
public:Detail(String^name,int model, String^ description, int price, int count);


public:String^ getName();
public:int getModel();
public:String^ getDescription();
public:int getPrice();
public:int getCount();
public:void decreaseCount(int count);
public:String^ getInfo();
public:String^ getId();
public:void setId(String^id);
};

