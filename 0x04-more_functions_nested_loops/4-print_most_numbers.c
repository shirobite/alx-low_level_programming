#include "main.h"
/**
*print_most_numbers - function that print most numbers from
*0 to 9
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
int number = 48;
for (number = 48; number < 58; number++)
{
	if ((number == 50) && (number == 52))
		continue;
_putchar(number);
}
_putchar(10);
}
