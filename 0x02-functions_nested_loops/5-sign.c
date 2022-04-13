#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_sign - print a sign of a number
 *
 * @n: sign number
 * Return: Always 0
 */
int print_sign(int n)
{
if (n > 0)
{ 
_putchar('+');
return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		else
		{ 
			_putchar('-');
			return (-1);
		}
	}

