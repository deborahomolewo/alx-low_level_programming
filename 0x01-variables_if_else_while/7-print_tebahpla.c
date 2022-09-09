#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - start program
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n);
	return (0);
}
