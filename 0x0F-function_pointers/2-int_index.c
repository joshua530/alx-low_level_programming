#include "function_pointers.h"

/**
 * int_index - finds index for integer that returns 0 for cmp
 *
 * @array: container of integers
 * @size: size of the array
 * @cmp: comparison function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size < 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		result = (*cmp)(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
