# C - Debugging

In this project, I continued to learn about debugging functions in C.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written in the project.

## Tasks

* **0. Multiple mains** 
  * [0-main.c](0-main.c) [positive_or_negative.c](./positive_or_negative.c): test that the function positive_or_negative() gives the correct output when given a case of 0
  - The task involves testing a function called positive_or_negative() using a provided main file (0-main.c) and header file (main.h).
  - The function positive_or_negative() is expected to determine whether a given number is positive, negative, or zero.
  - While testing, you're allowed to adapt the positive_or_negative() function from a previous task, with the restriction of changing only one line of code.
  * `Compiled using:` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c

**1. Like, comment, subscribe**
- [1-main.c](1-main.c): Comment out (don’t delete) the part of the code that is causing the output to go into an infinite loop.
    - Don’t add or remove any lines of code, as line count will be checked. Only comment out existing code.
    - Output should not cause an infinite loop.
    - `Compiled using:` gcc -std=gnu89 1-main.c -o 1-main

**2. 0 > 972?**
- [2-main.c](2-main.c) [2-largest_number.c](2-largest_number.c): Fix the code so that it correctly prints out the largest of three numbers, no matter the case.
    - Line count will not be checked for this task.
    - `Compiled using:` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main

**3. Leap year**
- [3-main_a.c](3-main_a.c) [3-convert_day.c](3-convert_day.c) [3-print_remaining_days.c](3-print_remaining_days.c): Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.
    - Line count will not be checked for this task.
    - `Compiled using:` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
    - Additional test case for leap year: `Compiled using: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b

