#include "main.h"
#include <string.h>

/**
 * _memset - implementation of memset function
 *
 * @s: memory to fill
 * @b: character to fill
 * @n: number of bits to fill
 *
 * Description: fills memory address pointed to by s with b n times
 *
 * Return: pointer to memory address that has been filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
