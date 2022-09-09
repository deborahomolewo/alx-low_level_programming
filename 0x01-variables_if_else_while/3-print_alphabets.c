#include <studio.h>
#include <stdlib.h>
/**
 * main - start program
 * Description: alphabets in lower and upper
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
