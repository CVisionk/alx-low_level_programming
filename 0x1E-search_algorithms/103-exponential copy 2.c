#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search_e - function that searches for a value in a sorted
 *				 array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: range to search for value
 * @high: range to search for value
 * @value: value to search for
 * Return: return the index where value is located, 0 otherwise
 */

int binary_search_e(int *array, int value, size_t low, size_t high)
{
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

/**
 * exponential_search - function that searches for a value in a sorted
 *					  array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located, -1 otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			pos *= 2;
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", pos / 2, pos);
			return (binary_search_e(array, value, (pos / 2), pos));
		}
		if (pos >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", pos / 2, size - 1);
			return (binary_search_e(array, value, (pos / 2), size - 1));
		}
	}
	return (-1);
}
