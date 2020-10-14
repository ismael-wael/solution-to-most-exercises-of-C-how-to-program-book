#include <iostream>
#include <cstdlib>
#include <string>
#include "Inventory.h"
using namespace std;

int main(void)
{
	Inventory product1( "steel" , 25);
	Inventory product2("iron", 23);

	cout << "current stock is " << product1.getStock() << " of " << product1.getName() << endl;
	product1.purchase(13);
	cout << "current stock is " << product1.getStock() << " of " << product1.getName() << endl;
	product1.sell(17);
	cout << "current stock is " << product1.getStock() << " of " << product1.getName() << endl;

	cout << "current stock is " << product2.getStock() << " of " << product2.getName() << endl;
	product2.purchase(13);
	cout << "current stock is " << product2.getStock() << " of " << product2.getName() << endl;
	product2.sell(27);
	cout << "current stock is " << product2.getStock() << " of " << product2.getName() << endl;
	return 0;
}