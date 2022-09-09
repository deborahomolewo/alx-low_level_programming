#include <stdio.h>
#include <stdlib.h>
/**
 * main - start program
 * Description: Use `putchar` function to print alphabets.
 * Return 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
