#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...) {
    va_list arg_ptr;
    const char *ptr = format;
    char *str;

    va_start(arg_ptr, format);

    while (ptr && *ptr) {
        if (*ptr == 'c') {
            printf("%c", va_arg(arg_ptr, int));
        } else if (*ptr == 'i') {
            printf("%d", va_arg(arg_ptr, int));
        } else if (*ptr == 'f') {
            printf("%f", va_arg(arg_ptr, double));
        } else if (*ptr == 's') {
            str = va_arg(arg_ptr, char*);
            if (str == NULL) {
                printf("(nil)");
            } else {
                printf("%s", str);
            }
        }

        ptr++;
        if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')) {
            printf(", ");
        }
    }

    printf("\n");

    va_end(arg_ptr);
}
