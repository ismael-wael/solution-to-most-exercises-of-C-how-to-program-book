#include <iostream>
#include <cstdlib>
#include <string>

class Inventory{
	std::string product;
	int balance;
public :
	Inventory(std::string name, int value);
	void purchase(int quantity);
	void sell(int quantity);
	int getStock(void) const;
	std::string getName(void) const;
};