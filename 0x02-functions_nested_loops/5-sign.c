#include "main.h"

/**
 * print_sign: checks num sign
 *
 * @i: number to check
 *
 * Description: checks num sign
 *
 * Return: 0, - or +
 */
char print_sign(int i)
{
  if (i < 0)
    return ('-');
  else if (i > 0)
    return ('+');
  else
    return ('0');
}
