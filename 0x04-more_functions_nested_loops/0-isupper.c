#include <stdio.h>
#include <main.h>
/**
 * _isupper - check for upper case letter
 *
 * @c: take value
 * Return: 1 sucess or 0 failure
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
