#include <iostream>
#include <cstdlib>
#include "Inventory.h"

using namespace std;

Inventory:: Inventory(string name, int value)
{
	if(value >= 20)
	{
		product = name;
		balance = value;
	}
	else
	{
		cerr << "value is less than the minimum value specified." 
		     << "which is 20. " << endl;
	}
}

void Inventory:: purchase(int quantity)
{
	for(int i = 0 ; i < quantity ; i++)
	{
		balance++;
	}
}

void Inventory::sell(int quantity)
{
	for(int i = 0 ; i < quantity ; i++)
	{
		if(balance > 20)
		{
			balance--;
		}
		else
		{
			cerr << "value is less than the minimum value specified. which is 20.\n" 
		         << i << " items are sold." << endl;

		    return;
		}
	}
}

int Inventory::getStock(void) const
{
	return balance;
}

string Inventory::getName(void) const
{
	return product;
}
