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
			if (!(i == j) && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (!(i == 8 && j == 9))
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

