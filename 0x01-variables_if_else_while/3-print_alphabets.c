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
	for (n = 0; n < 26; ++n)
	putchar('a' + n);
	for (n = 0; n < 26; ++n)
	putchar('A' + n);
	putchar('\n');
	return (0);
	}
