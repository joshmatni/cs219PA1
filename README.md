# cs219PA1
PA #1 for CS219 Computer Organization
# Machine Language Simulator
This project simulates the ADD operation of machine language.

## How to run
1. Ensure you have a C++ compiler (e.g., g++).
2. Compile the code using the command: `g++ filename.cpp -o outputname`
3. Run the program using: `./outputname`
4. Ensure you have an `input.txt` file in the same directory with the operations.

## Working Process
1. The program reads from the `input.txt` file.
2. It reads the operation, operand1, and operand2.
3. If the operation is ADD, it performs the addition.
4. The program then checks for overflow.
5. The result is displayed.

## Result
The program displays the result in the terminal. It also indicates if an overflow occurred.

## Overflow
The overflow scenario is detected by checking if adding the two numbers would exceed the limit of uint32_t.
