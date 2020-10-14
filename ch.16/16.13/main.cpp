#include <iostream>
#include <cstdio>
#include <stdexcept>
#include "Invoice.h"

using namespace std;

int main(void)
{
    Invoice invoice1("1234" , "i" , 50 , 20);
    Invoice *invoice1R = &invoice1;
    cout << "size of invoice1 : " << sizeof(invoice1) << endl;
    cout << "size of string : " << sizeof(string) << endl; 
    cout << "size of integer : " << sizeof(int) << endl;
    Invoice invoice2("5678" , "copper" , 80 , 15);

    cout << "part number : " << invoice1R->getPartNumber() << " part name : " << invoice1R->getPartName() << endl;
    cout << "price per part : " << invoice1R->getPrice() << " Quantity : " << invoice1R->getQuantity() << endl;
    cout << "Invoice Amount " << invoice1R->getInvoiceAmount() <<endl;

    try{
        *invoice1R->setPrice(-20);
    }
    catch(invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}