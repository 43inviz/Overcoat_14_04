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

void Overcoat::operator=(const Overcoat& cloth)
{
	
	this->cost = cloth.cost;

	int size = strlen(cloth.type);
	this->type = new char[size + 1];
	this->type[size] = '\0';
	for (int i = 0; i < size; i++) {
		this->type[i] = cloth.type[i];
	}

	
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
