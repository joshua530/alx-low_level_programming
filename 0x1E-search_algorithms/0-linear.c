#include "search_algos.h"

/**
 * linear_search - performs linear search
 *
 * @array: array to search
 * @size: length of array
 * @value: item to look for
 *
 * Return: -1 if array is null or value is not present, else
 * the index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
