#include "main.h"

/**
 * _strncat - a function concatenates two string
 *
 * @dest: pointer to destintaino input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of sest array*/
	while (dest[c])
		c++;
	/**
	 * src does not need to be numm terminated
	 * if it containt n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null termintae dest*/
	dest[c + i] = '\0';

	return (dest);
}
