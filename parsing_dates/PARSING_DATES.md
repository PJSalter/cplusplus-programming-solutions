# Date Parsing C++ Solution

This C++ program reads dates from input, validates their format, and converts them to a different date format. It takes input in the format "Month Day, Year" (e.g., "March 1, 1990") and converts it to "Month/Day/Year" (e.g., "3/1/1990").

## Prerequisites

- C++ Compiler (e.g., g++)
- Standard C++ Library

## Usage

1. Compile the C++ program using your C++ compiler:

```
g++ date_parser.cpp -o date_parser

```

2. Run the program:

```
./date_parser

```

3. Enter dates in the format "Month Day, Year" one per line. To exit the program, enter "-1" on a line alone.

## How it Works

The program follows these steps to parse and format dates:

1. Reads input from the user in a continuous loop until the user enters "-1."

2. Checks each input line for the correct date format by looking for a comma (,) and ensuring that the line has a minimum length of 12 characters.

3. If the correct format is detected, the program proceeds to parse the date:

- Extracts the month, day, and year from the input string using the substr() function.
- Converts the day and year to integers using stoi() for validation.
- Calls the DateParser() function to convert the month string to an integer (1 to 12).
- Validates the month and day values to ensure they are within valid ranges.

4. If the date is in the correct format and all components (month, day, and year) are valid, the program outputs the date in the "Month/Day/Year" format.

## Example

Suppose you enter the following input:

```
March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1

```

The program will produce the following output:

```
3/1/1990
12/13/2003

```
