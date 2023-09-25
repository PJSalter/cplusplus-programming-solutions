#include <iostream>
using namespace std;

int main()
{
    // firstly I declare my variables r, g, and b.
    // int r;
    // int g;
    // int b;
    // neater declaring them with one integer datatype on one line.
    int r, g, b;

    // secondly I need to read the values that have been inputed.
    // I do this before any operation.
    cin >> r >> g >> b;

    // now to find the smallest value.
    int smallestValue = min(min(r, g), b);

    // print smallest Value.
    // cout << smallestValue << endl;

    // subtract the small value from all three values.
    // this will then remove the gray.

    r -= smallestValue;
    g -= smallestValue;
    b -= smallestValue;

    // printing to console to see results individually.
    // cout << r << endl;
    // cout << g << endl;
    // cout << b << endl;

    // show the results by directly outputing the removal of gray.
    cout << r << " " << g << " " << b << endl;
    cout << "Hello" << endl;

    return 0;
}
