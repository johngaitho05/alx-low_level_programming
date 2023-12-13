#include "search_algos.h"

/**
 * custom_interpolation_search - Searches for a value in an array using
 * the Interpolation search algorithm with different variable names
 *
 * @arr: Input array
 * @arr_size: Size of the array
 * @target: Value to search for
 * Return: Index of the number, or -1 if not found
 */
int interpolation_search(int *arr, size_t arr_size, int target)
{
	size_t position, start, end;
	double factor;

	if (arr == NULL)
		return (-1);

	start = 0;
	end = arr_size - 1;

	while (arr_size)
	{
		factor = (double)(end - start) / (arr[end] -
				arr[start]) * (target - arr[start]);
		position = (size_t)(start + factor);

		printf("Checked array[%d]", (int)position);

		if (position >= arr_size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", arr[position]);
		}

		if (arr[position] == target)
			return ((int)position);

		if (arr[position] < target)
			start = position + 1;
		else
			end = position - 1;

		if (start == end)
			break;
	}

	return (-1);
}
