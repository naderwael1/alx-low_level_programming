#include <stdio.h>
/**
 * main - Entry point
 * Description: print z to a
 *
 * Return: always 0(success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
