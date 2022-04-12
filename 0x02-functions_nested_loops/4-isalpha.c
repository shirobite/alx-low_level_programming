#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * _isalpha - check alphabetic character
 * @c: takes in a character
 * Return:1 for is letter 0 otherwise
 **/
int _isalpha(int c)
{
	if  ((c >= 'A' && C <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
		else
		{
			return (0);
		}
	}

