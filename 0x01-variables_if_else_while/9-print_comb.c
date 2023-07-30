#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single numner 1:9
 *
 * Retun: Alwyes 0(success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		digit += 48;
		putchar(digit);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	digit++;

	return (0);
}

