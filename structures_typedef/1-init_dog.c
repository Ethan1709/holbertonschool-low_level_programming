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


struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d1 = {}; 
}
