#include "function_pointers.h"

/**
 * print_name - prints a name using a passed in function
 *
 * @name: name to print
 * @f: function to print the name using
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
