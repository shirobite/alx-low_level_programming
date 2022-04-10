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
	for (n = 'a'; n <= 'z'; ++n)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
