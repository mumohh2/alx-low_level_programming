#include "main.h"
/**
 * puts_half - a function that prints hlf of a story
 * if odd len, n = (length_act_the_story - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longi;

	longo - 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
