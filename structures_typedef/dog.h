#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with a name, age, and owner
 * @name: Pointer to the dog's name (string)
 * @age: The dog's age (float)
 * @owner: Pointer to the owner's name (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
