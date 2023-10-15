#include <vector>
#include <string>
#include <iostream>

using namespace std;

// Function to create and output all permutations of the list of names.
void PrintAllPermutations(vector<string> &permList, vector<string> &nameList)
{
    if (nameList.empty())
    {
        // Base case: If the nameList is empty, we have generated a complete permutation.
        for (size_t i = 0; i < permList.size(); ++i)
        {
            cout << permList[i];
            if (i != permList.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else
    {
        // Recursive case: Generate permutations by swapping names.
        for (size_t i = 0; i < nameList.size(); ++i)
        {
            permList.push_back(nameList[i]);                        // Choose
            nameList.erase(nameList.begin() + i);                   // Explore
            PrintAllPermutations(permList, nameList);               // Recurse
            nameList.insert(nameList.begin() + i, permList.back()); // Unchoose
            permList.pop_back();
        }
    }
}

int main()
{
    vector<string> nameList;
    vector<string> permList;
    string name;

    // Read in a list of names until -1 is read.
    while (true)
    {
        cin >> name;
        if (name == "-1")
        {
            break;
        }
        nameList.push_back(name);
    }

    // Call the recursive method to generate and print all permutations.
    PrintAllPermutations(permList, nameList);
    return 0;
}
