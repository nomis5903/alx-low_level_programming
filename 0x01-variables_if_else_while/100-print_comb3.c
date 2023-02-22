#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int r;
	int t;

	for (r = 0 ; r < 10 ; r++)
	{
		for (t = 1 ; t < 10; t++)
		{
			if (r < t && r != t)
			{
				putchar(r + '0');
				putchar(t + '0');
				if (r + t != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

