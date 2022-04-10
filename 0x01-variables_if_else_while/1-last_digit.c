#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Descripition: print the lowercase alphabet
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%i Last digit of and is greater than 5 \n");
	}
	else if (n = 0)
	{
		printf("%i Last digit of n and is 0 \n");
	}
	else if (n < 6)
	{
		printf("%i Last digit of n and is less than 6 and not 0 \n");
	}

	return (0);
}
