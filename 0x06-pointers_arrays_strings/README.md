# C - More pointers, arrays and strings

## Tasks

* **0. strcat**
  * [0-strcat.c](./0-strcat.c): C function that concatenates two strings.
  * Adds a terminating null byte at end.
  * `Test file: `[0-main.c](./tests/0-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-strcat.c -o 0-strcat
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-strcat.c -o 0-strcat
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./0-strcat
Hello
World!
Hello World!
World!
Hello World!
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./0-strcat | cat -e
Hello $
World!$
Hello World!$
World!$
Hello World!$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>


* **1. strncat**
  * [1-strncat.c](./1-strncat.c): C function that concatenates two strings using at most an inputted number of bytes.
  * `Test file: `[1-main.c](./tests/1-main.c)
  * Adds a terminating null byte at end, unless source string is longer than maximum byte
    number.
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-strncat.c -o 1-strncat
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-strncat.c -o 1-strncat
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./1-strncat
Hello
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./1-strncat | cat -e
Hello $
World!$
Hello W$
World!$
Hello W$
Hello WWorld!$
World!$
Hello WWorld!$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **2. strncpy**
  * [2-strncpy.c](./2-strncpy.c): C function that copies a string, including the terminating null byte, using at most an inputted number of bytes.
  * `Test file: `[2-main.c](./tests/2-main.c)
  * If the length of the source string is less than the maximum byte number,
    the remainder of the destination string is filled with null bytes.
  * Works identically to the standard library function `strncpy`.
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-strncpy.c -o 2-strncpy
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 2-strncpy.c -o 2-strncpy
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./2-strncpy
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./2-strncpy | cat -e
*************************************************************************************************$
First********************************************************************************************$
First********************************************************************************************$
First, solve the problem. Then, write the code$
First, solve the problem. Then, write the code$
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c$
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f$
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e$
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68$
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00$
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00$
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00$
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00$
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00$
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **3. strcmp**
  * [3-strcmp.c](./3-strcmp.c): C function that compares two strings.
  * `Test file: `[3-main.c](./tests/3-main.c)
  * Returns the difference in bytes at point of difference.
  * Works identically to the standard library function `strcmp`.
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/3-main.c 3-strcmp.c -o 3-strcmp
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/3-main.c 3-strcmp.c -o 3-strcmp
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./3-strcmp
-15
15
0
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./3-strcmp | cat -e
-15$
15$
0$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  * [4-rev_array.c](./4-rev_array.c): C function that reverses the content of an array of integers.
  * `Test file: `[4-main.c](./tests/4-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/4-main.c 4-rev_array.c -o 4-rev_array
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/4-main.c 4-rev_array.c -o 4-rev_array
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./4-rev_array
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./4-rev_array | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337$
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **5. Always look up**
  * [5-string_toupper.c](./5-string_toupper.c): C function that changes all lowercase letters of a string to uppercase.
  * `Test file: `[5-main.c](./tests/5-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/5-main.c 5-string_toupper.c -o 5-string_toupper
  * `Expected output:` 
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/5-main.c 5-string_toupper.c -o 5-string_toupper
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./5-string_toupper
LOOK UP!
LOOK UP!
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./5-string_toupper | cat -e
LOOK UP!$
LOOK UP!$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  * [6-cap_string.c](./6-cap_string.c): C function that capitalizes all words of a string.
  * `Test file: `[6-main.c](./tests/6-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/6-main.c 6-cap_string.c -o 6-cap
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/6-main.c 6-cap_string.c -o 6-cap
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./6-cap
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World     Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World     Hello World.Hello World
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./6-cap | cat -e
Expect The Best. Prepare For The Worst. Capitalize On What Comes.$
Hello World! Hello-world 0123456hello World     Hello World.Hello World$
Expect The Best. Prepare For The Worst. Capitalize On What Comes.$
Hello World! Hello-world 0123456hello World     Hello World.Hello World$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **7. Mozart composed his music not for the elite, but for everybody**
  * [7-leet.c](./7-leet.c): C function that encodes a string into 1337, without `switch` or ternary operations and using only one `if` and two loops.
    * Letters `a` and `A` are replaced by `4`.
    * Leters `e` and `E` are replaced by `3`.
    * Letters `o` and `O` are replaced by `0`.
    * Letters `t` and `T` are replaced by `7`.
    * Letters `l` and `L` are replaced by `1`.
  * `Test file: `[7-main.c](./tests/7-main.c)
  * `Compiled using: `  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/7-main.c 7-leet.c -o 7-1337
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/7-main.c 7-leet.c -o 7-1337
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./7-1337
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./7-1337 | cat -e
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.$
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **8. rot13**
  * [8-rot13.c](./8-rot13.c): C function that encodes a string to rot13, without
  `switch` or ternary operations and using only one `if` and two loops.
  * `Test file: `[8-main.c](./tests/8-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/100-main.c 100-rot13.c -o 100-rot13
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/100-main.c 100-rot13.c -o 100-rot13
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./100-rot13
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./100-rot13 | cat -e
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.$
------------------------------------$
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.$
------------------------------------$
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.$
------------------------------------$
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.$
------------------------------------$
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.$
------------------------------------$
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **9. Numbers have life; they're not just symbols on paper**
  * [100-print_number.c](./100-print_number.c): C function that prints an integer without using `long`, arrays pointers, or hard-coded special values.
  * `Test file: `[100-main.c](./tests/100-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/101-main.c 101-print_number.c -o 101-print_numbers
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c tests/101-main.c 101-print_number.c -o 101-print_numbers
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./101-print_numbers
98
402
1024
0
-98
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./101-print_numbers | cat -e
98$
402$
1024$
0$
-98$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  * [101-magic.c](./101-magic.c): C program that prints `a[2] = 98` using pointer magic.
<pre><code>
</code></pre>

* **11. It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * [102-infinite_add.c](./102-infinite_add.c): C function that adds two numbers stored in strings to a buffer.
    * Assumes that strings are never empty and that numbers will always be positive, or 0.
    * Assumes there are only digits stored in the number strings.
    * If result can be stored in the buffer, returns a pointer to the result.
    * If result cannot be stored in the buffer, returns `0`.
  * `Test file: `[102-main.c](./tests/102-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/103-main.c 103-infinite_add.c -o 103-add
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/103-main.c 103-infinite_add.c -o 103-add
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./103-add
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./103-add | cat -e
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804$
Error$
Error$
999999999 + 1 = 1000000000$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>

* **12. Noise is a buffer, more effective than cubicles or booth walls**
  * [104-print_buffer.c](./104-print_buffer.c): C function that prints the content of an
  inputted number of bytes from a buffer.
    * Prints 10 bytes per line.
    * Starts with the position of the first byte in hexadecimal (8 chars), starting with `0`.
    * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
    * Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints `.`.
    * Each line ends with a new line `\n`.
    * If the inputted byte size is 0 or less, the function only prints a new line.
  * `Test file: `[104-main.c](./tests/104-main.c)
  * `Compiled using: ` gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/104-main.c 104-print_buffer.c -o 104-buffer
  * `Expected output:`
<pre><code style="color: green">
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/104-main.c 104-print_buffer.c -o 104-buffer
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./104-buffer
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$ ./104-buffer | cat -e
This is a string!$
---------------------------------$
00000000: 5468 6973 2069 7320 6120 This is a $
0000000a: 7374 7269 6e67 2100 416e string!.An$
00000014: 6420 7468 6973 2069 7320 d this is $
0000001e: 7468 6520 7265 7374 206f the rest o$
00000028: 6620 7468 6520 2362 7566 f the #buf$
00000032: 6665 7220 3a29 0102 0304 fer :)....$
0000003c: 0506 0723 6369 7366 756e ...#cisfun$
00000046: 0a00 0000 0000 0000 0000 ..........$
00000050: 0000 0000 0000 0000 0000 ..........$
0000005a: 2021 3456 2370 6f69 6e74  !4V#point$
00000064: 6572 7361 7265 6675 6e20 ersarefun $
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi$
00000078: 7366 756e 0a00           sfun..$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x06-pointers_arrays_strings$
</code></pre>
