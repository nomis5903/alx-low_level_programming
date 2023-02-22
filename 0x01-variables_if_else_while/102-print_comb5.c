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

	for (r = 0 ; r <= 98 ; r++)
	{
		for (t = r + 1 ; t <= 99 ; t++)
		{
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');
			if (r == 98 && t == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
