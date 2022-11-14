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

	normal.name = name;
	normal.age = age;
	normal.owner = owner;

	return (dog_p);
}
