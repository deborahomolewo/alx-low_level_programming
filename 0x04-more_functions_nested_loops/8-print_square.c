i#include "main.h"
/**
 * print_square - prints square
 * @size: integer (length & width) to set square size
 * Return: always void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (i < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	} else
	{
		_putchar('\n');
	}
}
