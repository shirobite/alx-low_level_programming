#include <stdio.h>
/**
 * main - entry point
 *
 *Return:(0 -success)
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i == 0; i <= 9; i++)
	{
		for (j == 0; j<= 9; j++)
		{
			for (k == 0; k<= 9; k++)
			{
				if (i < j || j < k)
				{
					putchar(i);
			        	putchar(j);
					putcahr(k);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
