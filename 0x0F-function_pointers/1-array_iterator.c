#include "function_pointers.h"

/**
 * array_iterator - executes function for each element of an array
 *
 * @array: container of the elements
 * @size: length of the array
 * @action: pointer to function to execute for each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		(*action)(array[i]);
	}
}
