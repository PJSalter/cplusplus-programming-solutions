# Simple Floating-Point Expression

This C++ program calculates the result of a simple mathematical expression and prints the output. The equation is as follows:

```
y = (1/3)x + (x/4) + 2x

```

The program accepts an integer 'x' as input, performs the calculations using floating-point division, and then displays the result.

## Usage

1. Compile the program using a C++ compiler (e.g., g++).

```
g++ simple_expression.cpp -o simple_expression

```

2. Run the program.

```
./simple_expression

```

3. Enter an integer 'x' when prompted.

4. The program will calculate 'y' based on the provided 'x' value and display the result.

## Code Explanation

The program starts by declaring two variables: 'x' (an integer) and 'y' (a double) to store the input and result, respectively.

It then reads the input integer 'x' from the user using cin.

The program calculates 'y' according to the equation, ensuring floating-point division is used for accuracy.

Finally, it prints the value of 'y' and terminates.

## Example

Let's assume you input 'x' as -1:

```
Enter an integer 'x':
-1

```

The program calculates 'y' and displays the result:

```
y = -2.58333

```
