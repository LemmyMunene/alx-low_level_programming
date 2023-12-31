#include "dog.h"

/**
 * init_dog - initializes var dog.
 * @d: struct dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: NULL.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
