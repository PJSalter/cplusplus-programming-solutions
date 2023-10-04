#include <iostream>
#include <iomanip>
#include <cmath> // Include the cmath library for pow function

using namespace std;

int main()
{

    double f0, r;

    cin >> f0;

    r = pow(2.0, 1.0 / 12.0); // Calculate r using the pow function

    // Set output formatting
    cout << fixed << setprecision(2);

    // Output the initial key frequency and the next 4 higher key frequencies
    for (int n = 0; n < 5; ++n)
    {
        cout << f0;
        if (n < 4)
        {
            cout << " "; // Print a space if it's not the last iteration
        }
        f0 *= r; // Calculate fn = f0 * rn
    }

    cout << endl;

    return 0;
}
