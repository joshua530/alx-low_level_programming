#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Description: reverses a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int front;
	int back;
	int len;
	char tmp;

	len = strlen(s);
	front = 0;
	if (len < 1)
		back = 0;
	else
		back = len - 1;

	for (; front != back && back > front; ++front, --back)
	{
		tmp = s[front];
		s[front] = s[back];
		s[back] = tmp;
	}
}
