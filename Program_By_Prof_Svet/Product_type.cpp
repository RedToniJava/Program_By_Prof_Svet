#include"pch.h"
#include "Product_type.h"
#include "Product.h"


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
 
void Product_type::addProduct(Product^ p) {
	for (int i = 0; i < products->Length; i++) {
		if (products[i] != nullptr) {
			if (p->getArticle()->Equals(products[i]->getArticle())) {
				break;
			}
		}
		else {
			products[i] = p;
			break;
		}
	}
}

cli::array<Product^, 1>^ Product_type:: getProducts() {
	return products;
}



