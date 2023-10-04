# Musical Note Frequencies

The "Musical Note Frequencies" program is a C++ application that calculates and prints a series of musical note frequencies based on a given initial key frequency. It utilizes the mathematical relationship between the frequencies of consecutive keys on a piano keyboard, where each higher key has a frequency that is a multiple of the initial frequency.

## Usage

To use this program, follow these steps:

1. Input the initial key frequency when prompted.

2. The program will calculate and display the initial key frequency and the next four higher key frequencies, each with two digits after the decimal point.

## Example

Suppose you input the initial key frequency as 440.0, which corresponds to the A key near the middle of a piano keyboard. The program will output:

```
440.00 466.16 493.88 523.25 554.37
```

## Note on Output Formatting

The program ensures that the output is formatted with two digits after the decimal point, providing accurate musical frequencies.

## Implementation Details

The program is implemented in C++ and utilizes the cmath library for the pow function to calculate the multiplier r, which is a constant factor for calculating the frequencies of higher keys. The formula used for frequency calculation is:

```
fn = f0 * rn

```

Where:

fn is the frequency of the nth key.
f0 is the initial key frequency provided by the user.
r is calculated as 2^(1/12) using the pow function.

## Building and Running

To build and run the program, follow these steps:

1. Compile the program using a C++ compiler. For example, you can use g++:

```
g++ musical_note_frequencies.cpp -o musical_note_frequencies

```

2. Run the compiled program:

```
./musical_note_frequencies

```

3. Follow the program's prompts to input the initial key frequency.

4. Observe the calculated musical note frequencies in the output.

## Dependencies

This program depends on the standard C++ libraries and the cmath library for mathematical calculations.
