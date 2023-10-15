# Photo Lineup Permutations

This program generates all possible orderings of a list of names for a photo lineup. It uses a recursive method to create and output all permutations of the input names.

## How It Works

The program takes a list of one-word names as input and generates all possible permutations of the names. Each permutation is separated by a comma, and one ordering is printed per line.

## Getting Started

To run this program, follow these steps:

1. **Compile the Code:**

   - Make sure you have a C++ compiler installed on your system.
   - Compile the code using the following command:

     ```
     g++ photo_lineup_permutations.cpp -o all_permutations_of_names
     ```

2. **Execute the Program:**

   - Run the compiled program with the following command:

     ```
     ./all_permutations_of_names
     ```

3. **Enter Names:**

   - Enter a list of one-word names, one name per line.
   - To finish the input, enter `-1`.

4. **View Output:**
   - The program will generate and display all possible permutations of the entered names.

## Example

For input:

```
Julia
Lucas
Mia
-1
```

The program will generate the following output:

```
Julia, Lucas, Mia
Julia, Mia, Lucas
Lucas, Julia, Mia
Lucas, Mia, Julia
Mia, Julia, Lucas
Mia, Lucas, Julia
```
