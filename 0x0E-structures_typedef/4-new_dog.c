#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - measure the length of string
 * @s: pointer to char
 *
 * Return: length
 */

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}

/**
 * _strcpy - copy string
 *@dest: pointing to dest
 *@src: pointing to src
 */
void _strcpy(char *dest, char *src)
{
int i, len = _strlen(src);

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
}

/**
 * new_dog - create new dog
 * @name: pointer to char
 * @age: dog age
 * @owner: pointer to char
 *
 * Return: the address of new_allocated struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
if (name != NULL)
{
d->name = malloc(_strlen(name) + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
_strcpy(d->name, name);
}
else
{
d->name = NULL;
}
d->age = age;
if (owner != NULL)
{
d->owner = malloc(_strlen(owner) + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
_strcpy(d->owner, owner);
}
else
{
d->owner = NULL;
}
return (d);
}
