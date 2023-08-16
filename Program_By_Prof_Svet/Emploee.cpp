#include"pch.h"
#include"Emploee.h"

Emploee::Emploee(String^ name, String^ description) {
	this->name = name;
	this->description = description;
}

String^ Emploee::getInfo() {
	return name + "\n" + description;
}
