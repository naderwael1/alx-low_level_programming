#include<unistd.h>
#include"main.h"

/**
 * _putchar - Writes the character c to stdount
 * @c: the character to print
 *
 * Return: on success 1
 * On error , -1 is returned, and errno is set appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
