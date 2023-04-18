#ifndef DOG_H
#define DOG_H

/**
 * struct dog - properties related to dog
 * @name: dog name
 * @age: dog age
 * @owner: the owner of dog
 * Description: contains all the infos about dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
