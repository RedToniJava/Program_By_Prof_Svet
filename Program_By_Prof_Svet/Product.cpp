#include"pch.h"
#include "Product.h"
#include"Detail.h"

Product::Product(String^ number, String^ name, String^ type) {
	this->number = number;
	this->name = name;
	article = type + "-" + number;
	this->type = type;
}



String^ Product::getArticle() {
	return article;

}
void Product::addDetail(Detail^ d) {
	for (int i = 0; i < details->Length; i++) {
		if (details[i] == nullptr) {
			details[i] = d;
				break;			
		}
		
	}
}
cli::array<Detail^, 1>^ Product::getDetails() {
	return details;
}