#pragma once
class Overcoat
{
	char* type;
	double cost;
public:
	Overcoat(char* type, double cost);
	Overcoat():Overcoat(nullptr,0.0) {}
	Overcoat(double cost):Overcoat(nullptr,cost){}
	Overcoat(char* type) :Overcoat(type, 0.0){}

	Overcoat(const Overcoat& type);

	void show();

	bool operator==(const Overcoat& coat);
	void operator=(const Overcoat& cloth);
	int operator>(const Overcoat& cloth);
	

	~Overcoat();
	
};

