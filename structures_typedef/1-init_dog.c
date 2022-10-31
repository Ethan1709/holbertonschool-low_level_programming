#ifndef protection
#define protection
#include "dog.h"

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
	d -> name;
	d -> age;
	d -> owner;
}
