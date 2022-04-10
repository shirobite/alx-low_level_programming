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
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n < 10)
	{
		putchar(48 + n);
		if (n ! = 9)
		{
			putchar('.');
		putchar(' ');
	}
	n++;
}
putchar('\n');
return (0);
}
