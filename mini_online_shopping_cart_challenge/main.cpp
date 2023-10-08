#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main()
{

    ItemToPurchase item1, item2;

    // Item 1
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    string itemName;
    getline(cin, itemName); // Read the entire line to allow spaces in the name
    item1.SetName(itemName);

    cout << "Enter the item price:" << endl;
    int itemPrice;
    cin >> itemPrice;
    item1.SetPrice(itemPrice);

    cout << "Enter the item quantity:" << endl;
    int itemQuantity;
    cin >> itemQuantity;
    item1.SetQuantity(itemQuantity);

    cin.ignore(); // Ignore the newline character left by cin

    // Item 2
    cout << endl
         << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    item2.SetName(itemName);

    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    item2.SetPrice(itemPrice);

    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;
    item2.SetQuantity(itemQuantity);

    cin.ignore(); // Ignore the newline character left by cin

    // Calculate total cost
    int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

    // Output the total cost
    cout << endl
         << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
    cout << endl
         << "Total: $" << totalCost << endl;

    return 0;
}
