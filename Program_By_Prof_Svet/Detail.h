#pragma once
using namespace System;


public ref class Detail {
private:String^ name;
private:int model;
private:String^ description;
private:String^ id;
private:double price;
private:int count;
private:int count_for_create;
public:Detail(String^name,int model, String^ description, double price, int count);


public:String^ getName();
public:int getModel();
public:String^ getDescription();
public:double getPrice();
public:int getCount();
public:void decreaseCount(int count);
public:String^ getInfo();
public:String^ getId();
public:void setId(String^id);
public:void changeCount(int count);
public:int getCount_for_create();
public:void setCount_for_create(int count);

};

