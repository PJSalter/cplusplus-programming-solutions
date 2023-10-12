#include <iostream>

using namespace std;

// Function to print the number pattern recursively.
void PrintNumPattern(int num1, int num2)
{
    // If num1 is -1 or less than 0.
    if (num1 == -1 || num1 < 0)
    {
        // Print num1 followed by a space.
        cout << num1 << " ";
        // Return from the function.
        return;
    }
    // Print num1 followed by a space.
    cout << num1 << " ";
    // Recursively call the printNumPattern function.
    // with parameters num1 - num2 and num2.
    PrintNumPattern(num1 - num2, num2);
    // Print num1 followed by a space.
    cout << num1 << " ";
}

int main()
{
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;
    PrintNumPattern(num1, num2);

    return 0;
}
