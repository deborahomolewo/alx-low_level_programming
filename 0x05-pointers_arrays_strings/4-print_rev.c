#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	char *d;

	d = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s != d)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}

