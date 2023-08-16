#include"pch.h"
#include "Product.h"

Product::Product(String^ number, String^ name, String^ type) {
	this->number = number;
	this->name = name;
	article = type + "-" + number;
}


String^ Product::getArticle() {
	return article;

}