#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: a new created dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t normal;
	dog_t *dog_p = &normal;

	if (name == NULL)
		normal.name = "(nil)";
	else
		normal.name = name;
	normal.age = age;
	if (owner == NULL)
		normal.owner = "(nil)";
	else
		normal.owner = owner;
	return (dog_p);
}
