#include"pch.h"
#include"Product_for_sale.h"
#include"Detail.h"



Product_for_sale::Product_for_sale(String^ name,int assembly,String^article,int number) {
	this->name = name;
	this->assembly_price = assembly;
	this->article = article+"-"+number;

}


void Product_for_sale::setPrice() {
	for (int i = 0; i < details->Length; i++) {
		if (details[i] != nullptr) {
			details_price += (details[i]->getPrice()* details[i]->getCount_for_create());
		}
		else if (details[i] == nullptr) {
			break;
		}
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
String^ Product_for_sale::getArticle() {
	return article;
}
String^ Product_for_sale::getName() {
	return name;
}
void Product_for_sale::addDetail(Detail^ d,int count) {
	for (int i = 0; i < details->Length; i++) {
		if (details[i] == nullptr) {
			d->setCount_for_create(count);
			details[i] = d;
			break;
		}
	}

}
cli::array<Detail^, 1>^ Product_for_sale::getDetails() {
	return details;
}
String^ Product_for_sale::getInfo() {
	info = "";
	for (int i = 0; i < details->Length; i++) {
		if (details[i] != nullptr) {
			
			info += details[i]->getId() + " : "
				+ details[i]->getName() + " модель - " + details[i]->getModel()
				+ " необходимо - " + details[i]->getCount_for_create()
				+ " на складе - " + details[i]->getCount()+"\n";
			
		}
		
		else break;
	}
	info += "Стоимость деталей - " + details_price + "\n Cтоимость сборки - " + assembly_price + "\n Себестоимость - " + (assembly_price + details_price);
	return info;
}