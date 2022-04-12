#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point the lowercase alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
 {
	char i;
 	
	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}
