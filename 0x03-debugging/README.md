# 0x03. C - Debugging

## **Target: Comprehensive, `Seek every thread of truth!`**

# Resources

- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)

# Learning Objectives

- `TASK OBJECTIVE: `
    - What is debugging:
        - Debugging is the process of identifying, analyzing, and removing errors or bugs from software code. It involves running the program, finding where it goes wrong, and correcting the issues to ensure the program runs as expected.
    - What are some methods of debugging manually
        - Print statements
        - Code reviews
        - Rubberduck debugging: Explain your code and its logic to an inanimate object (like a rubber duck) to find flaws in your logic.
        - Walkthroughs: Manually trace through the code with a pen and paper, writing down the state of variables and the control flow to spot inconsistencies.
        - Divide and Conquer: Isolate parts of the code to find where the bug occurs by systematically disabling sections of code and testing.
        - Assertions: Use assertions to check if certain conditions hold true at specific points in the program.
    - How to read the error messages

## Header File

* [main.h](./main.h): Header file containing prototypes for all functions written in the project.

## Tasks

* **0. Multiple mains** 
  * [0-main.c](0-main.c) [positive_or_negative.c](./positive_or_negative.c): test that the function positive_or_negative() gives the correct output when given a case of 0
  - The task involves testing a function called positive_or_negative() using a provided main file (0-main.c) and header file (main.h).
  - The function positive_or_negative() is expected to determine whether a given number is positive, negative, or zero.
  - While testing, you're allowed to adapt the positive_or_negative() function from a previous task, with the restriction of changing only one line of code.
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ ./0-main
0 is zero
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ wc -l 0-main.c
14 0-main.c
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$
</code></pre>

**1. Like, comment, subscribe**
- [1-main.c](1-main.c): Comment out (don’t delete) the part of the code that is causing the output to go into an infinite loop.
    - Don’t add or remove any lines of code, as line count will be checked. Only comment out existing code.
    - Output should not cause an infinite loop.
    - `Compiled using:` gcc -std=gnu89 1-main.c -o 1-main
    - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ gcc -std=gnu89 1-main.c -o 1-main
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ wc -l 1-main.c
23 1-main.c
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$
</code></pre>

**2. 0 > 972?**
- [2-main.c](2-main.c) [2-largest_number.c](2-largest_number.c): Fix the code so that it correctly prints out the largest of three numbers, no matter the case.
    - Line count will not be checked for this task.
    - `Compiled using:` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
    - `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ ./2-main
972 is the largest number
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$
</code></pre>

**3. Leap year**
- [3-main_a.c](3-main_a.c) [3-convert_day.c](3-convert_day.c) [3-print_remaining_days.c](3-print_remaining_days.c): Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.
    - Line count will not be checked for this task.
    - `Compiled using:` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
    - Additional test case for leap year: `Compiled using: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ ./3-main_a
Date: 04/01/1997
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$ ./3-main_b
Date: 02/29/2000
Day of the year: 61
Remaining days: 305
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x03-debugging$
</code></pre>
