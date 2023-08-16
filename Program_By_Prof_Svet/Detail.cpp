#include"pch.h"
#include "Detail.h"


Detail::Detail(String^ name, int model, String^ description, int price, int count) {
	this->name = name;
	this->model = model;
	this-> description = description;
	this->price = price;
	this->count = count;
	
}
String^Detail::getName() {
	return name;
}
int Detail::getModel() {
	return model;
}
String^ Detail::getDescription() {
	return description;
}
int Detail::getPrice() {
	return price;
}
int Detail::getCount() {
	return count;
}
String^ Detail::getInfo() {
	return id+" "+name + " " + model + " цена за ед - " + price + " остаток ед - " + count;
}
String^ Detail::getId() {
	return id;
}
void Detail::setId(String^id) {
	this->id = id;

}
void Detail::decreaseCount(int count) {
	this->count -= count;
}