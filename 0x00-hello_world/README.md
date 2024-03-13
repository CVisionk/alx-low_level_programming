0x00-hello_world
###0x00 - Hello, world

##summary

Betty compliant comments -
	 /* Comment */

	/*
	 * Comment
	*/

C source code exexution steps - Preprocessing, Compilation, assembly, linking.

C is a compiled language.
-----------------------------
##0-preprocessor -  script that runs a C file through the preprocessor and save the result into another file.

#!/bin/bash
gcc -E $CFILE -o c

-----------------------------
##1-compiler - script that compiles a C file but does not link

#!/bin/bash
gcc -c $CFILE
-----------------------------
##2-assembler - script that generates the assembley code of a C code and save it in an output file.

#!/bin/bash
gcc -S $CFILE
-----------------------------
##3-name - script that compiles a C file and creates an executable named cisfun

#!/bin/bash
gcc $CFILE -o cisfun
-----------------------------
##4-puts.c - program that prints --> "Programming is like building a multilingual puzzle,
use function puts
not allowed to use printf

#include<stdio.h>
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
-----------------------------
##5-printf.c - program that prints --> with proper grammar, but the outcome is a piece of art,, followed by a new line.
use function printf
return 0
compile without warning using -Wall gcc

#include<stdio.h>
int main(void)
{
        printf("with proper grammar, but the outcome is a piece of art,\n");
        return (0);
}
-----------------------------
##6-size.c - program that prints the size of various types on a computer it is compiled on.

#include<stdio.h>
int main(void)
{
        printf("Size of a char: %d byte(s)\n", sizeof(char));
        printf("Size of an int: %d byte(s)\n", sizeof(int));
        printf("Size of a long int: %d byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
        printf("Size of a float: %d byte(s)\n", sizeof(float));
        return (0);
}
-----------------------------
##100-intel - program that generates the assembly code(intel syntax) of a C code and save it in an output file
C file name $CFIle 


#!/bin/bash
gcc -S -masm=intel $CFILE
-----------------------------
##101-C program that prints exactly --> and that piece of art is useful" - Dora Korpar, 2015-10-19


#include <stdio.h>
#include <unistd.h>

int main(void)
{
        write(2,
        "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
        return (1);
}
----------------------------
