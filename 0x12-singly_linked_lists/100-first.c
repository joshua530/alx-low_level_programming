#include <stdio.h>

/**
 * premain - executes before main function
 */
void __attribute__((constructor)) premain()
{
	printf(
		"You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
