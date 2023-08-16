#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

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
