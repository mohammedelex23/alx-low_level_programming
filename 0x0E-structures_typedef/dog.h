#ifndef MAIN_H
#define MAIN_H

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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
