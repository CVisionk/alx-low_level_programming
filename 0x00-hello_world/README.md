# C - Hello, World

# Resources

- [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240613%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240613T083344Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ca7b5f19bf348cd50c2b6dfb0333e806931c003003a6db1d5d83a26dced0afc4)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
- [Hash-bang under the hood ](https://x.com/unix_byte/status/1024147947393495040?s=21)
- [Linus Torvalds on C vs. C++](https://harmful.cat-v.org/software/c++/linus)

# Learning Objectives

Why C programming is awesome:
`Because it just is :)`
`C programming is awesome because it provides a strong foundation in computer science, allowing developers to understand how software interacts with hardware. C is a powerful, efficient, and flexible language that has influenced many modern programming languages. It is widely used for system programming, developing operating systems, embedded systems, and high-performance applications.`
Who invented C:
`by Dennis Ritchie in the early 1970s at Bell Labs. It was developed as a system programming language for the Unix operating system.`
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds:
  - **Dennis Ritchie**: `Co-inventor of the C programming language and key developer of the Unix operating system.`
  - **Brian Kernighan**: `Co-author of "The C Programming Language" book (often referred to as K&R) with Dennis Ritchie, and a major contributor to the development of C.`
  - **Linus Torvalds**: `Creator of the Linux kernel, which is written in C.`
What happens when you type gcc main.c:
`When you type 'gcc main.c', the GNU Compiler Collection (GCC) compiles the C source file `main.c` into an executable file. The process includes preprocessing, compiling, assembling, and linking. By default, the output executable is named 'a.out'.`
What is an entry point:
`An entry point is the location in a program where execution starts. In C programs, the entry point is the 'main' function.`
What is main:
`The 'main' function is the starting point of execution for any C program. Its typical declaration is:`
<pre><code>
int main(void) {
    // code
    return 0;
}
</code></pre>
How to print text using printf, puts and putchar:
`TASK OBJECTIVES`
How to get the size of a specific type using the unary operator sizeof:
`TASK OBJECTIVE`
How to compile using gcc:
`TASK OBJECTIVE`
What is the default program name when compiling with gcc:
`a.out if no output file name is specified.`
What is the official C coding style and how to check your code with betty-style
`TASK OBJECTIVE`
How to find the right header to include in your source code when using a standard library function:
`TASK OBJECTIVE`
How does the main function influence the return value of the program:
`The 'main' function's return value is used as the program's exit status. Returning 0 typically indicates successful execution, while returning a non-zero value indicates an error.`

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

* **0. Preprocessor**
    * [0-preprocessor](./0-preprocessor): Script that runs a C file through the preprocessor and save the result into another file.
        * The C file name will be saved in the variable $CFILE
        * The output should be saved in the file c
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ export CFILE=main.c
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./0-preprocessor
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ tail c





# 8 "main.c"
int main(void)
{
 return (0);
}
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>

* **1. Compiler**
    * [1-compiler](./1-compiler): Script that compiles a C file but does not link.
        * The C file name will be saved in the variable $CFILE
        * The output file should be named the same as the C file, but with the extension .o instead of .c.
            * Example: if the C file is `main.c`, the output file should be `main.o`
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./1-compiler
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$  cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-H^A^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^L^@^K^@M-s^O^^M-zUHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0^@^@^@^@^@^@^D^@^@^@^P^@^@^@^E^@^@^@GNU^@^B^@^@M-@^D^@^@^@^C^@^@^@^@^@^@^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^O^@^@^@^@E^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^O^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.note.gnu.property^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^O^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@O^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@O^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@O^@^@^@^@^@^@^@,^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@{^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^G^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@ ^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@]^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@X^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@H^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^G^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@`^@^@^@^@^@^@^@
^@^@^@^C^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@8^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@`^A^@^@^@^@^@^@g^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>

* **2. Assembler**
    * [2-assembler](./2-assembler): Script that generates the assembly code of a C code and save it in an output file.
        * The C file name will be saved in the variable $CFILE
        * The output file should be named the same as the C file, but with the extension .s instead of .c.
            * Example: if the C file is `main.c`, the output file should be `main.s`
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./2-assembler
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ cat main.s
        .file   "main.c"
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        endbr64
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    $0, %eax
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
        .section        .note.GNU-stack,"",@progbits
        .section        .note.gnu.property,"a"
        .align 8
        .long   1f - 0f
        .long   4f - 1f
        .long   5
0:
        .string "GNU"
1:
        .align 8
        .long   0xc0000002
        .long   3f - 2f
2:
        .long   0x3
3:
        .align 8
4:
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$   
</code></pre>

* **3. Name**
    * [3-name](./3-name): script that compiles a C file and creates an executable named cisfun.
        * The C file name will be saved in the variable $CFILE
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./3-name
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ls
cisfun
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>

* **4. Hello, puts**
    * [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building a multilingual puzzle, followed by a new line.`
        * Use the function puts
        * You are not allowed to use printf
        * Your program should end with the value 0
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out | cat -e
"Programming is like building a multilingual puzzle$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>

* **5. Hello, printf**
    * [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
        * Use the function printf
        * You are not allowed to use the function puts
        * Your program should return 0
        * Your program should compile without warning when using the -Wall gcc option
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c && ./a.out
with proper grammar, but the outcome is a piece of art,
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./a.out | cat -e
with proper grammar, but the outcome is a piece of art,$
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>

* **6. Size is not grandeur, and territory does not make a nation**
    * [6-size.c](./6-size.c): C program that prints the size of various types on the computer it is compiled and run on.
        * You should produce the exact same output as in the example
        * Warnings are allowed
        * Your program should return 0
        * You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
  * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ gcc 6-size.c -m64 -o size64 2> /tmp/64
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>

* **7. Intel**
    * [100-intel](./100-intel): Script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
        * The C file name will be saved in the variable $CFILE.
        * The output file should be named the same as the C file, but with the extension .s instead of .c.
            * Example: if the C file is `main.c`, the output file should be `main.s`
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ export CFILE=main.c
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./100-intel
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ cat main.s
        .file   "main.c"
        .intel_syntax noprefix
        .text
        .globl  main
        .type   main, @function
main:
.LFB0:
        .cfi_startproc
        endbr64
        push    rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        mov     rbp, rsp
        .cfi_def_cfa_register 6
        mov     eax, 0
        pop     rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE0:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
        .section        .note.GNU-stack,"",@progbits
        .section        .note.gnu.property,"a"
        .align 8
        .long   1f - 0f
        .long   4f - 1f
        .long   5
0:
        .string "GNU"
1:
        .align 8
        .long   0xc0000002
        .long   3f - 2f
2:
        .long   0x3
3:
        .align 8
4:
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$   
</code></pre>

* **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
    * [101-quote.c](./101-quote.c): C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
        * You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
        * Your program should return 1
        * Your program should compile without any warnings when using the -Wall gcc option
    * `Expected output:`
<pre><code>
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
collenk@LAPTOP-QU24OQM9:~/alx-low_level_programming/0x00-hello_world$
</code></pre>
