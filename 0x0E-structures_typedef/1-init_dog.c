#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to structure.
 * @name: pointer to char
 * @age: dog age
 * @owner: pointer to char
 *
 */

void init_dog(struct dog *d, char *name, int age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
