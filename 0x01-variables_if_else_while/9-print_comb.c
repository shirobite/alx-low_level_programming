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
	int n=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (u < 10)
	{
		putchar(48 + u);
		if (u !=9)
		{
			putchar('.');
		putchar(' ');
	}
	u++;
}
putchar('\n');
return(0);
}
