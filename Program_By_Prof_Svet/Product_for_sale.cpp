#include"pch.h"
#include"Product_for_sale.h"
#include"Detail.h"



Product_for_sale::Product_for_sale(String^ name,int assembly,String^article,int number) {
	this->name = name;
	this->assembly_price = assembly;
	this->article = article+"-"+number;

}


void Product_for_sale::setPrice() {
	for each (Detail ^ d in details.Keys) {
		details_price += (d->getPrice() * details[d]);
}

}
int Product_for_sale::getAssemblyPrice() {
	return assembly_price;
}
double Product_for_sale::getDetailsPrice() {
	return details_price;
}
double Product_for_sale::getFullPrice() {
	return assembly_price + details_price;
}