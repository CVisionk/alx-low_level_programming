#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search -  function that searches for a value in a sorted
 *                         array of integers using the Interpolation search
 *                         algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high)
	{
		pos = low + (((double)(high - low) /
		 (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%ld]", pos);
		if (pos > size)
		{
			printf(" is out of range\n");
			return (-1);
		}
		printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
