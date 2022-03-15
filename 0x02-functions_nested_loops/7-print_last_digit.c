#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 *
 * @i: number whose last digit should be printed
 *
 * Description: prints last digit
 *
 * Return: void
 */
int print_last_digit(int i)
{
	int num = i % 10;
	num = abs(num);
	printf("%c", (num + '0'));
	return num;
}
