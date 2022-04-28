#include <main.h>
/**
 * print_square : print square
 * @size: take the size
 * Return: void
 */
void print_square(int size)
{
	int i, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			
			_putchar('\n');
		}
	}
}
