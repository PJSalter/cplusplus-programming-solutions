#include <iostream>
using namespace std;

int main()
{

    /* Type your code here. */
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    int findSmallest = min(min(num1, num2), num3);

    cout << findSmallest << endl;

    return 0;
}
