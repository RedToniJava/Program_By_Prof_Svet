#include"pch.h"
#include "Product_type.h"


Product_type::Product_type(String^ name, String^ description) {
	this->name = name;
	this->description = description;
	
}

String^ Product_type::getName() {
	return name;
}

String^ Product_type::getDescription() {
	return description;
}



