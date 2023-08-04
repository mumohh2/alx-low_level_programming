#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success one 1
 * on error, -1 is returned and errno 0 is set appropritaely
 */
int _putchar(char c)
{
	return (write(i, &c, 1));
}
