#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last;	
//	if (n < 0)
//	{
//		n = -(n);
//		last = n % 10;
//		last = -(last);
//	}
//	else
//	{
//		last = n % 10;
//	}
	last = n % 10;

	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
		printf("and is greater than 5");
	else if (last == 0)
		printf("and is 0");
	else if (last < 6 && last != 0)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
