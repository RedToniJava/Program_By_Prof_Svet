#include"pch.h"
#include "Detail.h"


Detail::Detail(String^ name, int model, String^ description, double price, int count) {
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
double Detail::getPrice() {
	return price;
}
int Detail::getCount() {
	return count;
}
String^ Detail::getInfo() {
	return id+" "+name + " " + model + " ���� �� �� - " + price + " ������� �� - " + count;
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
void Detail::changeCount(int count) {
	this->count +=count;
}
int Detail::getCount_for_create() {
	return count_for_create;
}
void Detail::setCount_for_create(int count) {
	count_for_create = count;
}