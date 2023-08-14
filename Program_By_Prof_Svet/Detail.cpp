#include"pch.h"
#include "Detail.h"


Detail::Detail(String^ name, String^ model, int price, int count) {
	this->name = name;
	this->model = model;
	this->price = price;
	this->count = count;
}
String^Detail::getName() {
	return name;
}
String^ Detail::getModel() {
	return model;
}
int Detail::getPrice() {
	return price;
}
int Detail::getCount() {
	return count;
}
String^ Detail::getInfo() {
	return name + " " + model + " цена за ед - " + price + " остаток ед - " + count;
}