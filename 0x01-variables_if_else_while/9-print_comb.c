#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the lowercase alphabet
 * Return: 0
 */
	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	if (n == 57)
	{
		break;
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
