#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single numner 1:9
 *
 * Return: Alwyes 0(success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
