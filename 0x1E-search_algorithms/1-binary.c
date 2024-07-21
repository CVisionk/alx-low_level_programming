#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 *                 array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
