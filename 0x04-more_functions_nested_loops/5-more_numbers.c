#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Description: prints ten times the numbers from 0 to
 * 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int counter;
	int current;
	int i;

	current = 48;
	counter = 0;
	for (i = 1; i <= 10; ++i)
	{
		for (; counter <= 14; ++current, ++counter)
		{
			if (counter == 10)
				current = 48;
			if (counter > 9)
				_putchar(49);
			_putchar(current);
		}
		_putchar('\n');
	}
}
