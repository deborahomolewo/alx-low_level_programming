#include <stdio.h>
#include <stdlib.h>
/**
 * main - start program
 * Description: Use putchar to "print all lowercase without q and e"
 * Return: 0 (start program)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}


