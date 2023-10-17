#include <iostream>
#include <string>
using namespace std;

int main()
{

    /* Type your code here. */
    string input;

    while (true)
    {
        cout << "Enter input string:" << endl;
        getline(cin, input);

        // Check if the user wants to quit
        if (input == "q")
            break;

        // Check if the input contains a comma
        if (input.find(',') == string::npos)
        {
            cout << "Error: No comma in string." << endl;
            cout << endl;
            continue;
        }

        // Extract and trim the two words from the input string
        size_t commaIndex = input.find(',');
        string firstWord = input.substr(0, commaIndex);
        string secondWord = input.substr(commaIndex + 1);
        size_t firstWordStart = firstWord.find_first_not_of(" ");
        size_t firstWordEnd = firstWord.find_last_not_of(" ");
        size_t secondWordStart = secondWord.find_first_not_of(" ");
        size_t secondWordEnd = secondWord.find_last_not_of(" ");
        firstWord = firstWord.substr(firstWordStart, firstWordEnd - firstWordStart + 1);
        secondWord = secondWord.substr(secondWordStart, secondWordEnd - secondWordStart + 1);

        // Output the extracted words
        cout << "First word: " << firstWord << endl;
        cout << "Second word: " << secondWord << endl;
        cout << endl;
    }

    return 0;
}
