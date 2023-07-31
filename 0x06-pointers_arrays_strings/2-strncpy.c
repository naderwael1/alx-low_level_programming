#include "main.h"

/**
 * _strncpy - A function that copies string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among teh first nytes of source
	 * the string places in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the lenght of sorce is less than n
	 * write additin=onal null bytes to dest ot
	 * ensure that a totla of n bytes is written
	 */
	while (i < n)
	{
		dest[i] - '\0';
		i++;
	}

	return (dest);
}
