#include "main.h"

/**
 * print_square - prints square
 *
 * @n: number of rows and columns
 *
 * Description: prints a square
 *
 * Return: void
 */
void print_square(int n)
{
  int row;
  int col;

  if (n > 0)
  {
    for (row = 1; row <= n; ++row)
    {
      for (col = 1; col <= n; ++col)
      {
        _putchar('#');
      }
      _putchar('\n');
    }
  }
  else
    _putchar('\n');
}
