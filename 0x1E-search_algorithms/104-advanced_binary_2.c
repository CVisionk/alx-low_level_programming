#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * advanced_binary_helper - function that searches for a value in a sorted
 *				 array of integers using the recursive Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located, 0 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i, mid;
	int temp = -1;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);

	if (high == low)
		return (-1);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		temp = mid;
		if (array[mid] == array[mid - 1])
		{
			temp = advanced_binary(array, mid + 1, value);
		}
		return (temp);
	}
	else if (array[mid] > value)
	{
		temp = advanced_binary(array, mid - 1, value);
		return (temp == -1 ? temp : temp + ((int)mid - 1));
	}
	else
	{
		temp = advanced_binary(&array[mid + 1], size - (mid + 1), value);
		return (temp == -1 ? temp : temp + ((int)mid + 1));
	}
	return (-1);
}
