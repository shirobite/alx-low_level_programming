#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * _islower - checks the lowercase
 * Return:0 for uppercase, 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
