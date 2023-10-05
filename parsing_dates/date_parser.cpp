#include <iostream>
#include <string>

using namespace std;

int DateParser(string month)
{
    int monthInt = 0;

    if (month == "January")
        monthInt = 1;
    else if (month == "February")
        monthInt = 2;
    else if (month == "March")
        monthInt = 3;
    else if (month == "April")
        monthInt = 4;
    else if (month == "May")
        monthInt = 5;
    else if (month == "June")
        monthInt = 6;
    else if (month == "July")
        monthInt = 7;
    else if (month == "August")
        monthInt = 8;
    else if (month == "September")
        monthInt = 9;
    else if (month == "October")
        monthInt = 10;
    else if (month == "November")
        monthInt = 11;
    else if (month == "December")
        monthInt = 12;
    return monthInt;
}

int main()
{

    // Read dates from input, parse the dates to find the one
    //       in the correct format, and output in m/d/yyyy format

    string input;
    while (true)
    {
        getline(cin, input);
        if (input == "-1")
            break;

        // Check if the date is in the correct format
        if (input.length() >= 12 && input.find(",") != string::npos)
        {
            // Extract the month, day, and year from the input string
            string month = input.substr(0, input.find(" "));
            input = input.substr(input.find(" ") + 1);
            string day = input.substr(0, input.find(","));
            input = input.substr(input.find(",") + 2); // Adding 2 to skip the space after comma
            string year = input;

            // Try to convert the extracted parts to integers
            int dayInt = stoi(day);
            int yearInt = stoi(year);

            // Check if the month and day are valid
            int monthInt = DateParser(month);
            if (monthInt >= 1 && monthInt <= 12 && dayInt >= 1 && dayInt <= 31)
            {
                // Output the date in m/d/yyyy format
                cout << monthInt << "/" << dayInt << "/" << yearInt << endl;
            }
        }
    }
}
