#include"pch.h"
#include "Product.h"
#include"Detail.h"

Product::Product(String^ number, String^ name, String^ type) {
	this->number = number;
	this->name = name;
	article = type + "-" + number;
	this->type = type;
}
Product::Product(String^ number, String^ name, String^ type,int price_assembly) {
	this->number = number;
	this->name = name;
	this->price_assembly = price_assembly;
	article = type + "-" + number;
}


String^ Product::getArticle() {
	return article;

}
void Product::addDetail(Detail^ d) {
	for (int i = 0; i < details->Length; i++) {
		if (details[i] != nullptr) {
			if (d->getId()->Equals(details[i]->getId())) {
				break;
			}
		}
		else {
			details[i] = d;
			break;
		}
	}
}
cli::array<Detail^, 1>^ Product::getDetails() {
	return details;
}