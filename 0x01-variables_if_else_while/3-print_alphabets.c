#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char r, R;

	for (r = 'a' ; r <= 'z' ; r++)
		putchar(r);
	for (R = 'A'; R <= 'Z'; R++)
		putchar(R);
	putchar('\n');
	return (0);
}
