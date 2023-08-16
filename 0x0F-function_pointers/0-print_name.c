#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Retur: 0
 */
void printName(const char *name)
{
	printf("Hello, %s!\n, name);
}
int main()
{
	char myName[] = "EMMANUEL";
	printName(myName);
	return 0;
}
