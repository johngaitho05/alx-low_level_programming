#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL)
	{
		return (-1);
	}

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		i = prev + step;
		if (i >= size)
		{
			i = size - 1;
		}

		while (i > prev && array[i] > value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i -= 1;
		}

		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}

		prev += step;
	}

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	return (-1); /* Value not found */
}
