#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 *
 * @x: the number to be raised to a given power
 * @y: the power to raise the number to
 *
 * Description: finds the power of a number
 * Return: power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
