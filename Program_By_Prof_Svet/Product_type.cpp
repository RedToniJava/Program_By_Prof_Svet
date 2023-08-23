#include"pch.h"
#include "Product_type.h"
#include "Product.h"


Product_type::Product_type(String^ name) {
	this->name = name;

	
}

String^ Product_type::getName() {
	return name;
}









