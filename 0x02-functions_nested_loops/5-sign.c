#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_sign - print a sign of a number
 * @n: sign number
 * Return:1 id n is great 0 if n is zero -1if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{ 
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
		else
		{ 
			putchar('-');
			return (-1);
		}
	}

