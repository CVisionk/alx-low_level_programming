# 0x04. C - More functions, more nested loops

## **Target: Comprehensive, `Delve deep into every source!!`**

# Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://tutorialspoint.com/cprogramming/c_header_files.htm)
- [Functions in C programming](https://www.youtube.com/watch?v=u40rF7zCYaQ)

# Learning Objectives

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

## Requirements

* C
    * Allowed editors: vi, vim, emacs
    * All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    * All your files should end with a new line
    * A README.md file at the root of the repo, containing a description of the repository
    * A README.md file, at the root of the folder of this project, containing a description of the project
    * There should be no errors and no warnings during compilation
    * You are not allowed to use system
    * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Shell Scripts
    * Allowed editors: vi, vim, emacs
    * All your scripts will be tested on Ubuntu 20.04 LTS
    * All your scripts should be exactly two lines long ($ wc -l file should print 2)
    * All your files should end with a new line
    * The first line of all your files should be exactly #!/bin/bash

## Tasks

**0. isupper**
- [0-main.c](0-main.c) [0-isupper.c](0-isupper.c): Write a function that checks for uppercase character.
    - Prototype: `int _isupper(int c);`
    - Returns `1` if `c` is uppercase, `0` otherwise.
    - FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.
- `Test file: `[0-main.c](./tests/0-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-isupper.c -o 0-isuper
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-isupper.c -o 0-isuper
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./0-isuper
A: 1
a: 0
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**1. isdigit**
- [1-isdigit.c](1-isdigit.c): Write a function that checks for a digit (0 through 9).
    - Prototype: `int _isdigit(int c);`
    - Returns `1` if `c` is a digit, `0` otherwise.
- `Test file: `[1-main.c](./tests/1-main.c)
- `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-isdigit.c -o 1-isdigit
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-isdigit.c -o 1-isdigit
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./1-isdigit
0: 1
a: 0
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**2. Collaboration is multiplication**
- [2-mul.c](2-mul.c): Write a function that multiplies two integers.
    - Prototype: `int mul(int a, int b);`
- `Test file: `[2-main.c](./tests/2-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-mul.c -o 2-mul
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-mul.c -o 2-mul
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./2-mul
100352
-1646592
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**3. The numbers speak for themselves**
- [3-print_numbers.c](3-print_numbers.c): Write a function that prints the numbers, from 0 to 9, followed by a new line.
    - Prototype: `void print_numbers(void);`
    - Restrictions: Use `_putchar` twice.
- `Test file: `[3-main.c](./tests/3-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/3-main.c 3-print_numbers.c -o 3-print_numbers
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/3-main.c 3-print_numbers.c -o 3-print_numbers
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./3-print_numbers
0123456789
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**4. I believe in numbers and signs**
- [4-print_most_numbers.c](4-print_most_numbers.c): Write a function that prints the numbers, from 0 to 9, followed by a new line, excluding 2 and 4.
    - Prototype: `void print_most_numbers(void);`
    - Restrictions: Use `_putchar` twice.
- `Test file: `[4-main.c](./tests/4-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./4-print_most_numbers
01356789
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**5. Numbers constitute the only universal language**
- [5-more_numbers.c](5-more_numbers.c): Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
    - Prototype: `void more_numbers(void);`
    - Restrictions: Use `_putchar` three times.
- `Test file: `[5-main.c](./tests/5-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu88 _putchar.c tests/5-main.c 5-more_numbers.c -o 5-more_numbers
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
tests/5-main.c 5-more_numbers.c -o 5-more_numbers
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./5-more_numbers
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**6. The shortest distance between two points is a straight line**
- [6-main.c](6-main.c) [6-print_line.c](6-print_line.c): Write a function that draws a straight line in the terminal.
    - Prototype: `void print_line(int n);`
    - Restrictions: Use `_putchar` function.
- `Test file: `[6-main.c](./tests/6-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-print_line.c -o 6-lines
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-print_line.c -o 6-lines
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./6-lines

__
__________

collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**7. I feel like I am diagonally parked in a parallel universe**
- [7-print_diagonal.c](7-print_diagonal.c): Write a function that draws a diagonal line on the terminal.
    - Prototype: `void print_diagonal(int n);`
    - Restrictions: Use `_putchar` function.
- `Test file: `[7-main.c](./tests/7-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-print_diagonal.c -o 7-diagonals
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-print_diagonal.c -o 7-diagonals
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./7-diagonals

\
 \
\
 \
  \
   \
    \
     \
      \
       \
        \
         \

collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**8. You are so much sunshine in every square inch**
- [8-print_square.c](8-print_square.c): Write a function that prints a square, followed by a new line.
    - Prototype: `void print_square(int size);`
    - Restrictions: Use `_putchar` function.
- `Test file: `[8-main.c](./tests/8-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/8-main.c 8-print_square.c -o 8-squares
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/8-main.c 8-print_square.c -o 8-squares
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./8-squares
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**9. Fizz-Buzz**
- [9-fizz_buzz.c](9-fizz_buzz.c): Write a program that prints the numbers from 1 to 100, followed by a new line. For multiples of three print Fizz, for multiples of five print Buzz, and for numbers which are multiples of both three and five print FizzBuzz.
    - Restrictions: Use the standard library.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
    - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./9-fizz_buzz
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>


**10. Triangles**
- [10-print_triangle.c](10-print_triangle.c): Write a function that prints a triangle, followed by a new line.
    - Prototype: `void print_triangle(int size);`
    - Restrictions: Use `_putchar` function.
- `Test file: `[10-main.c](./tests/10-main.c)
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/10-main.c 10-print_triangle.c -o 10-triangles
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/10-main.c 10-print_triangle.c -o 10-triangles
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./10-triangles
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic**
- [100-prime_factor.c](100-prime_factor.c): Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
- `Compilated using: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./100-prime_factor
83717
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>

**12. Numbers have life; they're not just symbols on paper**
- [101-main.c](101-main.c) [101-print_number.c](101-print_number.c): Write a function that prints an integer.
    - Prototype: `void print_number(int n);`
    - Restrictions: Use `_putchar` function. No long, arrays, pointers, or hard-coded special values
-  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/101-main.c 101-print_number.c -o 101-print_numbers
- `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/101-main.c 101-print_number.c -o 101-print_numbers
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$ ./101-print_numbers
98
402
1024
0
-98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x04-more_functions_nested_loops$
</code></pre>