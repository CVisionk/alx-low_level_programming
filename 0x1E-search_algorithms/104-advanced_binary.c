#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * advanced_binary_helper - function that searches for a value in a sorted
 *				 array of integers using the recursive Binary search
 * @array: pointer to the first element of the array to search in
 * @left: lower bound
 * @right: upper bound
 * @value: value to search for
 * Return: return the index where value is located, 0 otherwise
 */

int advanced_binary_helper(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_helper(array, left, i, value));
	return (advanced_binary_helper(array, i + 1, right, value));
}

/**
 * advanced_binary - function that searches for a value in a sorted
 *				 array of integers using the recursive Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located, 0 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_helper(array, 0, size - 1, value));
}
