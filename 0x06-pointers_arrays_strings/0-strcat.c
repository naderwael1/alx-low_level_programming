#include "main.h"

/**
 * _strcat - function that concatenat two string
 *
 * @dest: ponter to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of the dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the nullbyte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];
	return (dest);
}
