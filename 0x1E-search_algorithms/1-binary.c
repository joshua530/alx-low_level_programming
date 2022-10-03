#include "search_algos.h"

/**
 * binary_search - looks for item using binary search algorithm
 *
 * @array: array to search
 * @size: size of the array
 * @value: item to search for
 *
 * Return: -1 if item not present in array or array is null, else index of item
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, l = 0, r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

/**
 * print_arr - prints array
 * @array: array
 * @l: left index of original array
 * @r: right index of original array
 */
void print_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
