#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the contant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer &
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}

	return (s);

}
