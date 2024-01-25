#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum;
 *
 */
int sum_them_all(const unsigned int n, ...)
{   va_list arg_ptr;
    int args = 0;
    int sum = 0;
    int num;

    va_start(arg_ptr, n);

  for (int i = 0; i < n; i++)
	{                                                                          
      num = va_arg(arg_ptr, int);
      sum += num;                                     
      }                                                                         
   va_end(arg_ptr);   
   return sum;

}
