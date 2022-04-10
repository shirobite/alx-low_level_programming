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
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putcahr(0);
	return (0);
}
