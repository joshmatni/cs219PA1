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

## Result And Overflow
- The program displays the result in the terminal. It also indicates if an overflow occurred.
- The overflow scenario is detected by checking if adding the two numbers would exceed the limit of uint32_t.