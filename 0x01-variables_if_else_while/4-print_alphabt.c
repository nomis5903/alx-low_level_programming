#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char r;

	for (r = 'a' ; r <= 'z' ; r++)
		if (r != 'q' && r != 'e')
			putchar(r);
	putchar('\n');
	return (0);
}

