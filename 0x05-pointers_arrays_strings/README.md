# 0x05. C - Pointers, arrays and strings

## Tasks

* **0. 98 Battery st.**
  * [0-reset_to_98.c](./0-reset_to_98.c): C function that takes a pointer to an `int` as a parameter and updates the value it points to to `98`.
  * `Test file: `[0-main.c](./tests/0-main.c)
  * `Compiled using:`  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-reset_to_98.c -o 0-98
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-reset_to_98.c -o 0-98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./0-98
n=402
n=98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./0-98 | cat -e
n=402$
n=98$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **1. Don't swap horses in crossing a stream**
  * [1-swap.c](./1-swap.c): C function that swaps the value of two integers.
  * `Test file: `[1-main.c](./tests/1-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-swap.c -o 1-swap
   * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-swap.c -o 1-swap
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./1-swap
a=98, b=42
a=42, b=98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./1-swap | cat -e
a=98, b=42$
a=42, b=98$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>


* **2. This report, by its very length, defends itself against the risk of being read**
  * [2-strlen.c](./2-strlen.c): C function that returns the length of a string.
  * `Test file: `[2-main.c](./tests/2-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-strlen.c -o 2-strlen
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-strlen.c -o 2-strlen
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./2-strlen
16
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./2-strlen | cat -e
16$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>


* **3. I do not fear computers. I fear the lack of them**
  * [3-puts.c](./3-puts.c): C function that prints a string, followed by a new line to `stdout`.
  * `Test file: `[3-main.c](./tests/3-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/3-main.c 3-puts.c -o 3-puts
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/3-main.c 3-puts.c -o 3-puts
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./3-puts
I do not fear computers. I fear the lack of them - Isaac Asimov
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./3-puts | cat -e
I do not fear computers. I fear the lack of them - Isaac Asimov$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>


* **4. I can only go one way. I've not got a reverse gear**
  * [4-print_rev.c](./4-print_rev.c): C function that prints a string, in reverse, followed by a new line.
  * `Test file: `[4-main.c](./tests/4-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-print_rev.c -o 4-print_rev
   * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/4-main.c 4-print_rev.c -o 4-print_rev
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./4-print_rev
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./4-print_rev | cat -e
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * [5-rev_string.c](./5-rev_string.c): C function that reverses a string.
  * `Test file: `[5-main.c](./tests/5-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/5-main.c 5-rev_string.c -o 5-rev_string
   * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/5-main.c 5-rev_string.c -o 5-rev_string
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./5-rev_string
My School
loohcS yM
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./5-rev_string | cat -e
My School$
loohcS yM$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **6. Half the lies they tell about me aren't true**
  * [6-puts2.c](./6-puts2.c): C function that prints every other character of a string followed by a new line.
  * `Test file: `[6-main.c](./tests/6-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-puts2.c -o 6-puts2
   * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-puts2.c -o 6-puts2
cc1: fatal error: tests/6-main.c: No such file or directory
compilation terminated.
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/6-main.c 6-puts2.c -o 6-puts2
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./6-puts2
02468
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./6-puts2 | cat -e
02468$
</code></pre>

* **7. Winning is only half of it. Having fun is the other half**
  * [7-puts_half.c](./7-puts_half.c): C function that prints the second half of a string followed by a new line.
  * `Test file: `[7-main.c](./tests/7-main.c)
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-puts_half.c -o 7-puts_half
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/7-main.c 7-puts_half.c -o 7-puts_half
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./7-puts_half
56789
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./7-puts_half | cat -e
56789$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **8. Arrays are not pointers**
  * [8-print_array.c](./8-print_array.c): C function that prints an input `n` elements
  * `Test file: `[8-main.c](./tests/8-main.c)
  of an array of integers, followed by a new line.
  * Numbers are separated by a comma followed by a space.
  * Numbers are displayed in the same order as they are stored in the array.
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/8-main.c 8-print_array.c -o 8-print_array
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/8-main.c 8-print_array.c -o 8-print_array
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./8-print_array
98, 402, -198, 298, -1024
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./8-print_array | cat -e
98, 402, -198, 298, -1024$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **9. strcpy**
  * [9-strcpy.c](./9-strcpy.c): C function that copies the string pointed to by
  * `Test file: `[9-main.c](./tests/9-main.c)
  `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
  * Returns the pointer to `dest`.
  * `Compiled using:`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/9-main.c 9-strcpy.c -o 9-strcpy
  * `Expected output:` 
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/9-main.c 9-strcpy.c -o 9-strcpy
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./9-strcpy
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./9-strcpy | cat -e
First, solve the problem. Then, write the code$
First, solve the problem. Then, write the code$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
  * [100-atoi.c](./100-atoi.c): C function that converts a string to an integer
  * `Test file: `[100-main.c](./tests/100-main.c)
  without using `long`, new variable arrays, or hard-coded special values, as follows:
    * The number in the string can be preceded by an infinite number of characters.
    * Takes into account all `+` and `-` signs before the number.
    * If there are no numbers in the string, the function returns `0`.
    * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow tests/100-main.c 100-atoi.c -o 100-atoi
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow tests/100-main.c 100-atoi.c -o 100-atoi
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./100-atoi
98
-402
-98
214748364
0
402
98
402
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$ ./100-atoi | cat -e
98$
-402$
-98$
214748364$
0$
402$
98$
402$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x05-pointers_arrays_strings$
</code></pre>

* **11. Don't hate the hacker, hate the code**
  * [101-keygen.c](./101-keygen.c): C program that generates random valid passwords
  * `Test file: `[101-main.c](./tests/101-main.c)
  for the program [101-crackme](https://github.com/holbertonschool/0x04.c).
  * `Compiled using:`  gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
  * `Expected output:`
   <pre><code>
   </code></pre>
