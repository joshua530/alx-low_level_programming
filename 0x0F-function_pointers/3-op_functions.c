#include "function_pointers.h"

/**
 * op_add - adds two numbers together
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers together
 *
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: result of dividing a by b
 */
int op_div(int a, int b)
{
	char *error;
	int i;

	error = "Error";
	i = 0;
	if (b == 0)
	{
		while (error[i])
		{
			_putchar(error[i]);
			++i;
		}
		_putchar('\n');
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - finds the modulus of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	char *error;
	int i;

	error = "Error";
	i = 0;
	if (b == 0)
	{
		while (error[i])
		{
			_putchar(error[i]);
			++i;
		}
		_putchar('\n');
		exit(100);
	}

	return (a % b);
}
