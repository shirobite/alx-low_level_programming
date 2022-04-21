#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 10-print_comb3 
 *
 * Description: print a combination of digits 
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	for(a = 0; a <= 9; a++)
	{
		for(b = 0; b <= 9; b++)
		{
			if (!(a == b) && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (!(a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

