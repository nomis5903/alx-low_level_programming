#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int r;
	char t;

	for (r = 0 ; r < 10 ; r++)
		putchar(r + '0');
	for (t = 'a' ; t <= 'f' ; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
