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
	for (u = 'a'; u <= 'f'; ++u)
		putchar(u);
	putchar('\n');
	return (0);
}
