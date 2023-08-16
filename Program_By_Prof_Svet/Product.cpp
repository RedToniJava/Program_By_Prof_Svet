#include"pch.h"
#include "Product.h"
#include"Detail.h"

Product::Product(String^ name, String^ description) {
	this -> name = name;
	this->description = description;
	
}

String^ Product::getName() {
	return name;
}

String^ Product::getDescription() {
	return description;
}
int Product::getPrice() {
	return price;
}

void Product::add_detail(Detail^ det) {
	for (int i = 0; i < 50; i++) {
		if (details[i] == nullptr) {
			details[i] = det;
			break;
		}
	}
}
String^Product:: getInfo() {
	String^ info;
	
	return info;
	
}
void Product::setPrice(int price) {
	this->price = price;
}