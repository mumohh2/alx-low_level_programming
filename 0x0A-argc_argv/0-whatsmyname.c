#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the programe
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
