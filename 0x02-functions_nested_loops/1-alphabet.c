#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
 int main(void)
 {
 	int i;
 	char print_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0;i < 28; i++)
	{
	putchar(print_alphabet[i]);
	}
	putchar('\n');
	return (0);
	}
