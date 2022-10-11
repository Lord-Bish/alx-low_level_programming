#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: name
 * @d: pointer to structure
 * @age: age
 * @owner: owner
 * Return: nothing
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
