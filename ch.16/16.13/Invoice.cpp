#include <iostream>
#include <cstdio>
#include <stdexcept>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string itemNumber, string itemName, int Q, int price)
{
    setPartNumber(itemNumber);
    setPartName(itemName);
    setQuantity(Q);
    setPrice(price);
}

void Invoice::setPartName(string name)
{
    partName = name;
}

string Invoice::getPartName(void) const
{
    return partName;
}

void Invoice::setPartNumber(string name)
{
    partNumber = name;
}

string Invoice::getPartNumber(void) const
{
    return partNumber;
}

void Invoice::setQuantity(int q)
{
    q > 0 ? quantity = q : quantity = 0;
}

int Invoice::getQuantity(void) const
{
    return quantity;
}

void Invoice::setPrice(int price)
{
    if(price > 0)
    {
        pricePerItem = price;
    }
    else
    {
        throw  invalid_argument("price should be a positive value. pricePerItem equals to 0.");
    }
}

int Invoice::getPrice(void) const
{
    return pricePerItem;
}

int Invoice::getInvoiceAmount(void) const
{
    return quantity * pricePerItem;
}