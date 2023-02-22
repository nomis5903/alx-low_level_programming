#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int r;

	for (r = 0 ; r < 10 ; r++)
	{
		putchar(r + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
