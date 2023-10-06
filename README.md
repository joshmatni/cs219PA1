# cs219PA1
PA #1 for CS219 Computer Organization
# Machine Language Simulator
This project simulates the ADD operation of machine language (in C++).

## How to run
1. Ensure you have a C++ compiler (g++).
2. Compile the code using the command: `g++ driver.cpp -o Adding`
3. Run the program: `./Adding`
4. Ensure you have `operations.txt` file in the same directory with `driver.cpp`.

## Working Process
1. The program reads from the `operations.txt` file.
2. It reads the operation, operand1, and operand2.
3. If the operation is ADD, it performs the addition.
4. The program then checks for overflow.
5. The result is displayed.

### Main Function:
1. Opens the file `operations.txt`.
2. If the file cannot be opened, it prints an error message and exits.
3. Reads in operations and operands from the file in the format: operation operand1 operand2.
4. If the operation is `ADD`, it performs an addition using the two hex operands.
5. Prints the result in uppercase hexadecimal format.
6. Also prints whether there was an overflow during the addition.
7. Closes the file after reading all operations.
### Add Function:
1. Converts the two string operands to uint32_t numbers, interpreting them as hexadecimal values.
2. Adds the two numbers.
3. Returns the result and a boolean indicating if an overflow occurred during the addition.

## Result And Overflow
- The program displays the result in the terminal. It also indicates if an overflow occurred.
- The overflow scenario is detected by checking if adding the two numbers would exceed the limit of uint32_t.