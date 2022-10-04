#include "main.h"
/**
 * print_number - print number n with putcher
 * @n: number to print
 * Return: always void
 */
void print_number(int n)
{
	int nn = 1;
	unsigned int i, j;

	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}
	else
	{
		j = n;
	}
	i = j / 10;
	while (i != 0)
	{
		i /= 10;
		nn *= 10;
	}
	while (nn != 1)
	{
		_putchar((j / nn) + '0');
		j %= nn;
		nn /= 10;
	}
	_putchar(j + '0');
}
