#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 *               of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_size = sqrt(size);
	size_t index, i;

	if (array == NULL)
		return (-1);

	index = 0;
	while (array[index] < value && index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index += jump_size;
	}

	index -= jump_size;
	printf("Value found between indexes [%ld] and [%ld]\n",
	 index, index + jump_size);
	if (index + jump_size > size)
		return (-1);

	for (i = 0; i < jump_size + 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		 index + i, array[index + i]);
		if (array[index + i] == value)
			return (index + i);
	}

	return (-1);
}
