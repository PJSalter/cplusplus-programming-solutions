#include <iostream>
using namespace std;

int main()
{
    int highwayNumber;

    cin >> highwayNumber;

    // check is the highway is within the range of primary highways (1-99).
    if (highwayNumber >= 1 && highwayNumber <= 99)
    {
        cout << "I-" << highwayNumber << " is primary, going ";

        // Check if the highway number is even (east/west) or odd (north/south)
        if (highwayNumber % 2 == 0)
        {
            cout << "east/west." << endl;
        }
        else
        {
            cout << "north/south." << endl;
        }
    }
    else if (highwayNumber >= 100 && highwayNumber <= 999 && highwayNumber % 100 != 0)
    {
        int originHighway = highwayNumber % 100;
        cout << "I-" << highwayNumber << " is auxiliary, serving I-" << originHighway << ", going ";

        if (highwayNumber % 2 == 0)
        {
            cout << "east/west." << endl;
        }
        else
        {
            cout << "north/south." << endl;
        }
    }
    else
    {
        cout << highwayNumber << " is not a valid interstate highway number." << endl;
    }

    return 0;
}
