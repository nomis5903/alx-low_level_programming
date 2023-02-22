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
	int v;

	for (r = 0 ; r < 10 ; r++)
	{
		for (t = 1 ; t < 10 ; t++)
		{
			for (v = 2 ; v < 10 ; v++)
			{
				if (r < t && t < v)
				{
					putchar(r + '0');
					putchar(t + '0');
					putchar(v + '0');
					if (r + t + v != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

