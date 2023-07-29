#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabe letters in upper and lower case
 *
 * Return: always 0(success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*print the lower case a - z*/
	while (ch <= 'z')

	{
		putchar(ch);
		ch++;
	}

	/*print the upper case A - Z*/
	while (CH <= 'Z')

	{
		putchar(CH);
		CH++;
	}
		putchar('\n');

		return (0);
}
