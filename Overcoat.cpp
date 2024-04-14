#include "Overcoat.h"
#include "cstring"
#include <iostream>


Overcoat::Overcoat(char* type, double cost)
{
	this->cost = cost;
	

	int size = strlen(type);
	this->type = new char[size+1];
	this->type[size] = '\0';
	for (int i = 0; i < size; i++) {
		this->type[i] = type[i];
		
	}
}

Overcoat::Overcoat(const Overcoat& type)//конструктор копирования
{
	this->cost = type.cost;

	int size = strlen(type.type);
	this->type = new char[size+1];

	this->type[size] = '\0';

	for (int i = 0; i < size; i++) {
		this->type[i] = type.type[i];
		
	}
}

void Overcoat::show()
{

	std::cout << "Type: " << this->type << "\n";
	std::cout << "Cost: " << this->cost;
	std::cout << "\n";
}

bool Overcoat::operator==(const Overcoat& coat)
{
	if (strcmp(this->type, coat.type) == 0) {
		return true;
	}
	else {
		return false;
	}
	
	
}

Overcoat Overcoat::operator=(const Overcoat& cloth)
{
	Overcoat clth;
	clth.cost = cloth.cost;

	int size = strlen(cloth.type);
	clth.type = new char[size + 1];
	clth.type[size] = '\0';
	for (int i = 0; i < size; i++) {
		clth.type[i] = cloth.type[i];
	}

	return clth;
}

int  Overcoat::operator>(const Overcoat& cloth)
{
	if (this->cost > cloth.cost) {
		return 1;
	}
	else if (this->cost < cloth.cost) {
		return -1;
	}
	
	return 0;

}

Overcoat::~Overcoat()
{
	if (this->type != nullptr) {
		delete[] type;
	}
	
	
}
