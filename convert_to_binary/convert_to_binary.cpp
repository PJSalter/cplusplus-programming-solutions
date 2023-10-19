#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int x;
    cin >> x;

    string result = "";

    while (x > 0)
    {
        int r = x % 2;
        x = x / 2;
        result += to_string(r);
    }
    // Reverse the result string
    // reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}
