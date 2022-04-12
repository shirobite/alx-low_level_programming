#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_alphabet - prints alphabet in lower followed by a new line lowercase alphabet
 *
 **/
void print_alphabet(void)
{
char i;
 	
for (i = 'a'; i <= 'z'; i++)
	putchar(i);
putchar('\n');
}
