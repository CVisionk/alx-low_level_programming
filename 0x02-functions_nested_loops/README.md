# C - Functions, nested loops

## **Target: Comprehensive, `Pursue every path, reveal all facts!`**

# Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://tutorialspoint.com/cprogramming/c_header_files.htm)
- [C Programming Loops & Functions](https://www.youtube.com/watch?v=3i1IPkzFVcM)
- [Functions in C programming](https://www.youtube.com/watch?v=u40rF7zCYaQ)

# Learning Objectives

- What are nested loops:
    - Nested loops are loops placed inside one another, where an inner loop runs entirely for each iteration of the outer loop.
- What is a function:
    -  A function is a block of code designed to perform a specific task, executed when called within a program. Functions help in organizing code, reusability, and improving readability.
- What is the difference between a declaration and a definition of a function:
    - Declaration: Specifies the function's name, return type, and parameters without providing the body. It informs the compiler about the function's existence.
<pre><code>
int add(int, int); // Declaration
</code></pre>
    - Definition: Provides the actual implementation of the function.
<pre><code>
int add(int a, int b) { // Definition
    return a + b;
}
</code></pre>
- What is a prototype:
    - A function prototype is a declaration of a function that specifies the function's interface to the compiler, including the return type and parameters, typically found at the beginning of a program or in a header file.
- Scope of variables:
    - Local Scope: Variables declared inside a function, accessible only within that function.
    - Global Scope: Variables declared outside of all functions, accessible throughout the program.
    - Block Scope: Variables declared inside a block (e.g., within {}), accessible only within that block.
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
    - `-Wall`: Enables all standard warnings about potential issues in the code.
    - `-Werror`: Treats all warnings as errors, stopping compilation.
    - `-pedantic`: Enforces strict ISO C and ISO C++ standards compliance.
    - `-Wextra`: Enables extra warnings not included with -Wall.
    - `-std=gnu89`: Specifies the standard of the code as GNU C89, which is the 1989 ANSI C standard with GNU extensions.
- What are header files and how to to use them with #include:
    -  Header files are files containing declarations and macros to be shared between multiple source files. They typically have a .h extension. The #include directive is used to include the contents of a header file in a source file.
<pre><code>
#include <stdio.h>  // Standard header file
#include "myheader.h"  // User-defined header file
</code></pre>
- `TASK OBJECTIVES`:
    - how to use nested loops
    - how do you use functions

## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

## Tasks

* **0. _putchar**
  * [0-putchar.c](./0-putchar.c): C program that prints `_putchar`, followed by a new line. Returns 0.
  * `Compiled using:`  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
* `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./0-putchar
_putchar
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
    * [1-alphabet.c](./1-alphabet.c): Write a function that prints the alphabet, in lowercase, followed by a new line.
        * Prototype: `void print_alphabet(void)`;
        * You can only use _putchar twice in your code
  * `Test file: `[1-main.c](./tests/1-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/1-main.c 1-alphabet.c -o 1-alphabet
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/1-main.c 1-alphabet.c -o 1-alphabet
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **2. 10 x alphabet**
    * [2-print_alphabet_x10.c](./2-print_alphabet_x10.c): Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
        * Prototype: `void print_alphabet_x10(void)`;
        * You can only use _putchar twice in your code
    * `Test file: `[2-main.c](./tests/2-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c ./tests/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c ./tests/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./2-alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **3. islower**
    * [3-islower.c](./3-islower.c): Write a function that checks for lowercase character.
        * Prototype: `int _islower(int c)`;
        * Returns 1 if c is lowercase, returns 0 otherwise
        * FYI: The standard library provides a similar function: islower. Run man islower to learn more.
    * `Test file: `[3-main.c](./tests/3-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/3-main.c 3-islower.c -o 3-islower
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests
/3-main.c 3-islower.c -o 3-islower
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./3-islower
011
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **4. isalpha**
    * [4-isalpha.c](./4-isalpha.c):Write a function that checks for alphabetic character.
        * Prototype: int _isalpha(int c);
        * Returns 1 if c is a letter, lowercase or uppercase, returns 0 otherwise
        * FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.
    * `Test file: `[4-main.c](./tests/4-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-isalpha.c -o 4-isalpha
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-isalpha.c -o 4-isalpha
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./4-isalpha
1110
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **5. Sign**
    * [5-sign.c](./5-sign.c): C function that prints the sign of a number. Returns:
        * Prototype: `int print_sign(int n)`;
        * `1` and prints `+` if the number is greater than zero.
        * `0` and prints `0` if the number is zero.
        * `-1` and prints `-` if the number is less than zero.
    * `Test file: `[5-main.c](./tests/5-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/5-main.c 5-sign.c -o 5-sign
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/5-main.c 5-sign.c -o 5-sign
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./5-sign
+, 1
0, 0
+, 1
-, /
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
    * [6-abs.c](./6-abs.c): Function that computes the absolute value of an integer.
        * Prototype: `int _abs(int)`;
        * FYI: The standard library provides a similar function: abs. Run man abs to learn more.
    * `Test file: `[6-main.c](./tests/6-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-abs.c -o 6-abs
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-abs.c -o 6-abs
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./6-abs
1
0
1
98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
    * [7-print_last_digit.c](./7-print_last_digit.c): function that prints the last digit of a number
        * Prototype: int `print_last_digit(int)`, returns the value of the last digit
    * `Test file: `[7-main.c](./tests/7-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-print_last_digit.c -o 7-last_digit
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-print_last_digit.c -o 7-last_digit
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./7-last_digit
8044
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
    * [8-24_hours.c](./8-24_hours.c): C function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
        * Prototype: void `jack_bauer(void)`;
    * `Test file: `[8-main.c](./tests/8-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/8-main.c 8-24_hours.c -o 8-24
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/8-main.c 8-24_hours.c -o 8-24
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **9. Learn your times table**
    * [9-times_table.c](./9-times_table.c): Write a function that prints the 9 times table, starting with 0.
        * Prototype: `void times_table(void)`;
    * `Test file: `[9-main.c](./tests/9-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/9-main.c 9-times_table.c -o 9-times_table
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/9-main.c 9-times_table.c -o 9-times_table
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./9-times_table
0,  0,  0,  0,  0,  0,  0,  0,  0,  0
0,  1,  2,  3,  4,  5,  6,  7,  8,  9
0,  2,  4,  6,  8, 10, 12, 14, 16, 18
0,  3,  6,  9, 12, 15, 18, 21, 24, 27
0,  4,  8, 12, 16, 20, 24, 28, 32, 36
0,  5, 10, 15, 20, 25, 30, 35, 40, 45
0,  6, 12, 18, 24, 30, 36, 42, 48, 54
0,  7, 14, 21, 28, 35, 42, 49, 56, 63
0,  8, 16, 24, 32, 40, 48, 56, 64, 72
0,  9, 18, 27, 36, 45, 54, 63, 72, 81
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **10. a + b**
    * [10-add.c](./10-add.c):Write a function that adds two integers and returns the result.
        * Prototype: `int add(int, int)`;
    * `Test file: `[10-main.c](./tests/10-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/10-main.c 10-add.c -o 10-add
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/10-main.c 10-add.c -o 10-add
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./10-add
98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **11. 98 Battery Street, the OG
    * [11-print_to_98.c](./11-print_to_98.c): C function that prints all natural numbers from an input to `98` followed by a new line, as follows:
        * Prototype: `void print_to_98(int n)`;
        * Numbers are separated by a comma followed by a space.
        * Numbers are printed in order.
        * Input represents the number to begin counting from.
        * `98` is the last number printed.
    * `Test file: `[11-main.c](./tests/11-main.c)
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/11-main.c 11-print_to_98.c -o 11-98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./11-98
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
    * [100-times_table.c](./100-times_table.c): C function that prints the times table of an input value, starting with 0:
        * Prototype: `void print_times_table(int n)`;
        * If input is greater than `15` or less than `0`, function prints nothing.
  * `Test file: `[100-main.c](./tests/100-main.c)
  * `Compiled using: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/100-main.c 100-times_table.c -o 100-times_table
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/100-main.c 100-times_table.c -o 100-times_table
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./100-times_table
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **13. Nature made the natural numbers; All else is the work of women**
  * [101-natural.c](./101-natural.c): C program that computes and prints the sum of all multiples of `3` or `5` below `1024` (excluded).
  * `Compiled using: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./101-natural
244293
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**
  * [102-fibonacci.c](./102-fibonacci.c): C program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line. Numbers are separated by a comma followed by a space.
  * `Compiled using: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./102-fibonacci
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049, 12586269025, 20365011074
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **15. Even Liber Abbaci**
    * [103-fibonacci.c](./103-fibonacci.c): C program that prints the sum of even-valued Fibonacci numbers not exceeding 4,000,000, followed by a new line.
    * `Compiled using: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c
-o 103-fibonacci
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./103-fibonacci
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049, 12586269025, 20365011074
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

* **16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**
  * [104-fibonacci.c](./104-fibonacci.c): C program that prints the first 98 Fibonacci, numbers, starting with `1` and `2`, followed by a new line, without using `long long`, `malloc`, pointers, arrays, structures, or any library besides the standard. Numbers are separated by a comma followed by a space.
  * `Compiled using: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$ ./104-fibonacci
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049, 12586269025, 20365011074, 32951280099, 53316291173, 86267571272, 139583862445, 225851433717, 365435296162, 591286729879, 956722026041, 1548008755920, 2504730781961, 4052739537881, 6557470319842, 10610209857723, 17167680177565, 27777890035288, 44945570212853, 72723460248141, 117669030460994, 190392490709135, 308061521170129, 498454011879264, 806515533049393, 1304969544928657, 2111485077978050, 3416454622906707, 5527939700884757, 8944394323791464, 14472334024676221, 23416728348467685, 37889062373143906, 61305790721611591, 99194853094755497, 160500643816367088, 259695496911122585, 420196140727489673, 679891637638612258, 1100087778366101931, 1779979416004714189, 2880067194370816120, 4660046610375530309, 7540113804746346429, 12200160415121876738, 19740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x02-functions_nested_loops$
</code></pre>

