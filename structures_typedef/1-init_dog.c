#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Pointer to the dog's name (string)
 * @age: The dog's age (float)
 * @owner: Pointer to the owner's name (string)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)  /* Check if d is not NULL to avoid segmentation fault */
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
