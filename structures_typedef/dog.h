#ifndef protection
#define protection
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog caracteristics
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog' owner
 */


typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
