# 🚗 Car Value (Classes) 🚖

## 🚘 Introduction:

The "Car value (classes)" project is a C++ application that allows you to calculate the current value of a car based on its model year, purchase price, and current year. It is implemented using the `Car` class, which provides methods to set and get the car's model year and purchase price, calculate the current value, and print the car's information.

## 🏎 Usage:

To use the "Car value (classes)" project, follow these steps:

1. Compile the project with a C++ compiler (e.g., g++).

   ```bash
   g++ main.cpp Car.cpp -o car_value
   ```

2. Run the executable:

   ```bash
   ./car_value
   ```

3. Input the car's model year, purchase price, and the current year when prompted.

4. The program will calculate the current value of the car and display the car's information.

## 🏁 Car Class:

The Car class provides the following member functions:

- `SetModelYear(int userYear)`: Sets the model year of the car.

- `GetModelYear() const`: Returns the model year of the car.

- `SetPurchasePrice(int price)`: Sets the purchase price of the car.

- `GetPurchasePrice() const`: Returns the purchase price of the car.

- `CalcCurrentValue(int currentYear)`: Calculates the current value of the car based on its model year, purchase price, and the current year.

- `PrintInfo() const`: Prints the car's information, including the model year, purchase price, and current value.

## 🚙 Example:

Here is an example of how to use the "Car value (classes)" project:

```cpp
#include <iostream>
#include "Car.h"
using namespace std;

int main() {
   int userYear;
   int userPrice;
   int userCurrentYear;
   Car myCar;

   cin >> userYear;
   cin >> userPrice;
   cin >> userCurrentYear;

   myCar.SetModelYear(userYear);
   myCar.SetPurchasePrice(userPrice);
   myCar.CalcCurrentValue(userCurrentYear);

   myCar.PrintInfo();

   return 0;
}
```

## 🚀 Authored by: [Peter Salter](https://github.com/PJSalter) ✨

## 🙌 Happy Coding 🥳
