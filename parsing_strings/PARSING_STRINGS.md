# Parsing Strings Program

This program is designed to parse user-provided strings that contain two words separated by a comma. The program guides the user through the input process, validates the input, and extracts the two words, removing any leading or trailing spaces.

## Table of Contents

- [Requirements](#requirements)
- [Usage](#usage)
- [Example](#example)
- [Program Explanation](#program-explanation)
- [Author](#author)

## Requirements

- C++ compiler
- Standard C++ library
- Command-line environment

## Usage

1. Compile the `parsing_strings.cpp` program using a C++ compiler.
2. Run the compiled executable.
3. Follow the prompts to enter input strings.
4. To exit the program, enter 'q' as the input string.

## Example

Here is an example of how the program works:

```
Enter input string:
Jill, Allen
First word: Jill
Second word: Allen

Enter input string:
Golden , Monkey
First word: Golden
Second word: Monkey

Enter input string:
Washington,DC
First word: Washington
Second word: DC

Enter input string:
q
```

## Program Explanation

1. The program prompts the user to enter an input string that contains two words separated by a comma. If a comma is not found, it displays an error message and continues to prompt the user until valid input is provided.

2. After validating the input, the program extracts the two words from the input string, removes any leading or trailing spaces, and stores them in separate variables.

3. The extracted words are then displayed to the user.

4. The program continues to handle multiple lines of input until the user enters 'q' to quit.

## Author

This program was created by ✨[Peter James Salter](https://github.com/PJSalter)⭐️.
