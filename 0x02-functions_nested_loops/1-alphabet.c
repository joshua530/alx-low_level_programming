#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints out all lowercase letters
 *
 * Return: exit code of the function
 */
void print_alphabet()
{
  for (int i = 97; i < 123; ++i)
    putchar(i);
  putchar('\n');
  return (0);
}
