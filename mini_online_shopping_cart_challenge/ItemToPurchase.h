#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase
{
public:
    // Default constructor
    ItemToPurchase();

    // Mutators and Accessors for itemName
    void SetName(const string &name);
    string GetName() const;

    // Mutators and Accessors for itemPrice
    void SetPrice(int price);
    int GetPrice() const;

    // Mutators and Accessors for itemQuantity
    void SetQuantity(int quantity);
    int GetQuantity() const;

private:
    string itemName;  // Initialized in default constructor to "none"
    int itemPrice;    // Initialized in default constructor to 0
    int itemQuantity; // Initialized in default constructor to 0
};

#endif
