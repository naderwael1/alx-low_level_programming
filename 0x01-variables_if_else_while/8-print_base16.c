#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 48; /*48;decimal rap of 0*/

	while (digit <= 102) /*102: decimal rap of f*/
	{
		putchar(digit);

		/*after 9 we jump till 96*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
