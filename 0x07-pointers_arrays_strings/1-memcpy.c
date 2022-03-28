#include "main.h"
#include <string.h>

/**
 * _memcpy - implementation of memcpy function
 *
 * @dest: memory to be copied to
 * @src: memory address to be copied from
 * @n: number of bits to fill
 *
 * Description: copies n instances of src to memory address pointed to by dest
 *
 * Return: pointer to memory address that is to be copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
