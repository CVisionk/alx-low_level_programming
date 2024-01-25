#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...){
    va_list arg_ptr;
    int args = 0; 
    int sum = 0;
    int num;

    va_start(arg_ptr, n);
        for (int i = 0; i < n; i++)
        {  
            num = va_arg(arg_ptr, int);                                                                
            printf("%s%d", i > 0 && separator != NULL ? separator : "", num);                      
        }
}
