#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - a struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	const char *name;
	float age;
	const char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
