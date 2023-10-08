#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Default constructor
ItemToPurchase::ItemToPurchase()
{
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

// Mutators and Accessors for itemName
void ItemToPurchase::SetName(const string &name)
{
    itemName = name;
}

string ItemToPurchase::GetName() const
{
    return itemName;
}

// Mutators and Accessors for itemPrice
void ItemToPurchase::SetPrice(int price)
{
    itemPrice = price;
}

int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}

// Mutators and Accessors for itemQuantity
void ItemToPurchase::SetQuantity(int quantity)
{
    itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}
