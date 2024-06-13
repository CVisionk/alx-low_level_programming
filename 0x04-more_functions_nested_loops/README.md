# 0x04. C - More functions, more nested loops

## Tasks

**0. isupper**
- [0-main.c](0-main.c) [0-isupper.c](0-isupper.c): Write a function that checks for uppercase character.
    - Prototype: `int _isupper(int c);`
    - Returns `1` if `c` is uppercase, `0` otherwise.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-isupper.c -o 0-isuper
    - `Expected output:`
<pre><code>

</code></pre>

**1. isdigit**
- [1-main.c](1-main.c) [1-isdigit.c](1-isdigit.c): Write a function that checks for a digit (0 through 9).
    - Prototype: `int _isdigit(int c);`
    - Returns `1` if `c` is a digit, `0` otherwise.
    - `Compiled using:`   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-isdigit.c -o 1-isdigit
    - `Expected output:`
<pre><code>

</code></pre>

**2. Collaboration is multiplication**
- [2-main.c](2-main.c) [2-mul.c](2-mul.c): Write a function that multiplies two integers.
    - Prototype: `int mul(int a, int b);`
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-mul.c -o 2-mul
    - `Expected output:`
<pre><code>

</code></pre>

**3. The numbers speak for themselves**
- [3-main.c](3-main.c) [3-print_numbers.c](3-print_numbers.c): Write a function that prints the numbers, from 0 to 9, followed by a new line.
    - Prototype: `void print_numbers(void);`
    - Restrictions: Use `_putchar` twice.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/3-main.c 3-print_numbers.c -o 3-print_numbers
    - `Expected output:`
<pre><code>

</code></pre>

**4. I believe in numbers and signs**
- [4-main.c](4-main.c) [4-print_most_numbers.c](4-print_most_numbers.c): Write a function that prints the numbers, from 0 to 9, followed by a new line, excluding 2 and 4.
    - Prototype: `void print_most_numbers(void);`
    - Restrictions: Use `_putchar` twice.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
    - `Expected output:`
<pre><code>

</code></pre>

**5. Numbers constitute the only universal language**
- [5-main.c](5-main.c) [5-more_numbers.c](5-more_numbers.c): Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
    - Prototype: `void more_numbers(void);`
    - Restrictions: Use `_putchar` three times.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/5-main.c 5-more_numbers.c -o 5-more_numbers
    - `Expected output:`
<pre><code>

</code></pre>

**6. The shortest distance between two points is a straight line**
- [6-main.c](6-main.c) [6-print_line.c](6-print_line.c): Write a function that draws a straight line in the terminal.
    - Prototype: `void print_line(int n);`
    - Restrictions: Use `_putchar` function.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-print_line.c -o 6-lines
    - `Expected output:`
<pre><code>

</code></pre>

**7. I feel like I am diagonally parked in a parallel universe**
- [7-main.c](7-main.c) [7-print_diagonal.c](7-print_diagonal.c): Write a function that draws a diagonal line on the terminal.
    - Prototype: `void print_diagonal(int n);`
    - Restrictions: Use `_putchar` function.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-print_diagonal.c -o 7-diagonals
    - `Expected output:`
<pre><code>

</code></pre>

**8. You are so much sunshine in every square inch**
- [8-main.c](8-main.c) [8-print_square.c](8-print_square.c): Write a function that prints a square, followed by a new line.
    - Prototype: `void print_square(int size);`
    - Restrictions: Use `_putchar` function.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/8-main.c 8-print_square.c -o 8-squares
    - `Expected output:`
<pre><code>

</code></pre>

**9. Fizz-Buzz**
- [9-fizz_buzz.c](9-fizz_buzz.c): Write a program that prints the numbers from 1 to 100, followed by a new line. For multiples of three print Fizz, for multiples of five print Buzz, and for numbers which are multiples of both three and five print FizzBuzz.
    - Restrictions: Use the standard library.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
    - `Expected output:`
<pre><code>

</code></pre>


**10. Triangles**
- [10-main.c](10-main.c) [10-print_triangle.c](10-print_triangle.c): Write a function that prints a triangle, followed by a new line.
    - Prototype: `void print_triangle(int size);`
    - Restrictions: Use `_putchar` function.
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/10-main.c 10-print_triangle.c -o 10-triangles
    - `Expected output:`
<pre><code>

</code></pre>

**11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic**
- [100-prime_factor.c](100-prime_factor.c): Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
    - `Compilation command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
    - `Expected output:`
<pre><code>

</code></pre>

**12. Numbers have life; they're not just symbols on paper**
- [101-main.c](101-main.c) [101-print_number.c](101-print_number.c): Write a function that prints an integer.
    - Prototype: `void print_number(int n);`
    - Restrictions: Use `_putchar` function. No long, arrays, pointers, or hard-coded special values
    -  `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/101-main.c 101-print_number.c -o 101-print_numbers
    - `Expected output:`
<pre><code>

</code></pre>




