#include <iostream>
#include "Overcoat.h"
using namespace std;

int main() {
	
	const int SIZE = 20;
	char* fName = new char[SIZE];
	cout << "Enter 1 name: ";
	cin.getline(fName, SIZE);
	int fCost;
	cout << "Enter first cost: ";
	cin >> fCost;

	cin.ignore();
	cout << "-----\n";
	char* sName = new char[SIZE];
	cout << "Enter 2 name: ";
	cin.getline(sName, SIZE);
	cout << "Enter 2 cost: ";
	int sCost;
	cin >> sCost;
	

	Overcoat clth1(fName, fCost);
	Overcoat clth2(sName, sCost);
	Overcoat clth3 = clth1;
	
	int choice;
	do {
		cout << "1 - Compare types\n2 - copying an object\n3 - Compare cost by equal types\n0 - Exit\nEnter choice: ";
		cin >> choice;
		
		switch (choice) {
		case 1:
			if (clth1 == clth2) {
				cout << "type of clothes EQUAL\n";

			}
			else {
				cout << "type of clothes defferrent\n";
			}
			break;
		case 2:
			cout << "Result:\n";
			clth3.show();
			cout << "\n";
			break;
		case 3:
			if (clth1 == clth2) {
				if ((clth1 > clth2 )==1) {
					clth1.show();
					cout << endl;
					cout << "is Expensive\n";

				}
				else if ((clth1 > clth2) == 0) {
					cout << "Cost EQUAl\n";
				}
				else {
					clth2.show();
					cout << endl;
					cout << "is Expensive\n";
				}
			}
			break;
		default:
			break;
		}
	} while (choice != 0);
	
	

	delete[] fName;
	delete[] sName;
	return 0;
}