#include <stdlib.h>
#include "dog.h"
/**
 * int_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, floate age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->name = age;
	d->owner = owner;
}
