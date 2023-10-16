# Overload operator<< for ostream

This C++ challenge involves overloading the `<<` operator for the `ostream` class to extend the functionality of `cout`. The goal is to implement a friend function in `Number.cpp` that overloads the insertion operator. The overloaded `<<` operator will return an output stream containing a string representation of a `Number` object. The string should be in the format "The value is yourNum," where `yourNum` is the value of the integer instance field of the `Number` class.

## Challenge Description

The provided code consists of three files: `main.cpp`, `Number.cpp`, and `Number.h`. The challenge can be summarized as follows:

1. In `Number.cpp`, you should implement the `ostream& operator<<` friend function, which will allow you to use the `<<` operator with a `Number` object.

2. The `operator<<` function should format the output string as "The value is yourNum," where `yourNum` is the value of the `num` field in the `Number` object.

## Usage

To run the program and test the `<<` operator overloading, follow these steps:

1. Compile the code:

```
g++ main.cpp Number.cpp -o ostream_operator_overloading
```

2. Execute the program:

```
./ostream_operator_overloading
```

3. Enter an integer when prompted by the program.

4. The program will create a `Number` object with the entered integer and use the `<<` operator to print "The value is yourNum" to the console.

## Example

For example, if you enter the integer `723`:

```
The value is 723
```

## Files

- `main.cpp`: Contains the `main` function to interact with the user and create a `Number` object.
- `Number.cpp`: Contains the implementation of the `Number` class and the `operator<<` function.
- `Number.h`: Provides the class definition for the `Number` class and declares the `operator<<` function as a friend.

## Author

- [Peter James Salter](https://github.com/PJSalter)

### 🥳✨Enjoy the challenge and happy coding!🚀🤩
