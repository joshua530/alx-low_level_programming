#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
 * _islower - checks whether character is alphabet
 *
 * @c: character to check
 *
 * Description: checks whether character is alphabet
 *
 * Return: true or false
 */
bool _islower(char c)
{
  return (isalpha(c));
}
