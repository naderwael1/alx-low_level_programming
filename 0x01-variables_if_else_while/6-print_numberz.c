#include <stdio.h>

/**
 * main - Entry pint
 *
 * Description: print 0-9 usint putchar
 * while usint int variable
 *
 * Return: always 0(Success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representaion*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
