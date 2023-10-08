# Online Shopping Cart Challenge (Part 1)

This is Part 1 of the Online Shopping Cart challenge, which involves creating a C++ program to manage items in an online shopping cart.

## Challenge Description

In this part of the challenge, you will be building a ItemToPurchase class with specific specifications. You will also create a main() function to interact with this class.

#### Files to Submit

- I needed to create and submit the following three files:

1. `ItemToPurchase.h`: This file contains the class declaration for `ItemToPurchase`.

2. `ItemToPurchase.cpp`: This file contains the class definition for `ItemToPurchase`.

3. `main.cpp`: This file contains the `main()` function, where you will prompt the user for item details and calculate the total cost.

#### Specifications for ItemToPurchase Class

- The ItemToPurchase class should have the following specifications:

- Default constructor that initializes the following private data members:

- itemName (string) initialized to "none"
- itemPrice (int) initialized to 0
- itemQuantity (int) initialized to 0
- Public class functions (mutators & accessors) for the following attributes:

- SetName() & GetName()
- SetPrice() & GetPrice()
- SetQuantity() & GetQuantity()

#### Instructions for main() Function

- In the main() function, you need to:

1. Prompt the user for two items and create two objects of the ItemToPurchase class. Make sure to use cin.ignore() to allow the user to input a new string for the second item.

2. Calculate the total cost by adding the costs of the two items together.

3. Output the total cost along with the details of each item.

#### Example Input and Output

- Here's an example of the expected user interaction and output:

```
Item 1
Enter the item name:
Chocolate Chips
Enter the item price:
3
Enter the item quantity:
1

Item 2
Enter the item name:
Bottled Water
Enter the item price:
1
Enter the item quantity:
10

TOTAL COST
Chocolate Chips 1 @ $3 = $3
Bottled Water 10 @ $1 = $10

Total: $13

```

## Files

- main.cpp: This file contains the implementation of the main() function, which interacts with the ItemToPurchase class.

- ItemToPurchase.cpp: This file contains the implementation of the ItemToPurchase class functions.

- ItemToPurchase.h: This file contains the class declaration for the ItemToPurchase class.

## How to Run

To run this program, you can compile the source files using a C++ compiler, such as g++, and then execute the resulting binary.

```
g++ main.cpp ItemToPurchase.cpp -o shopping_cart
./shopping_cart

```
