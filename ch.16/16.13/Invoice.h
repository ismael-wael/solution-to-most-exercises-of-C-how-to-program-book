#include <iostream>
#include <cstdio>

class Invoice{
    std::string partNumber;
    std::string partName;
    int quantity;
    int pricePerItem;

public :
    Invoice(std::string itemNumber, std::string itemName, int Q, int price);

    void setPartName(std::string name);
    std::string getPartName(void) const;
    void setPartNumber(std::string name);
    std::string getPartNumber(void) const;
    void setQuantity(int q);
    int getQuantity(void) const;
    void setPrice(int price);
    int getPrice(void) const;

    int getInvoiceAmount(void) const;
};