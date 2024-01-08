#include "header.h"
/**
 * function that locates a substring.
 *
 * 
 */
char *_strstr(char *stack, char *needle)
{
	int count = 0, a = 0, k, j = 0, l, i = 0;
	char *p;

	while (needle[count] != '\0')
	{
		count++;
	}
	while (stack[i] != '\0')
	{
		i++;
			}
	if (count == 0)
		return (stack);
	while (stack[j] != '\0')
	{
		if (stack[j] == needle[0])
		{
			p = &stack[j];
			l = j;
			a = 0;
			for (k = 0; k < count; k++)
			{
				if (stack[l] == needle[k])
					a++;
				l++;
			}
		}
		if (a == count)
			return (p);
		j++;
	}
	return ('\0');
}
