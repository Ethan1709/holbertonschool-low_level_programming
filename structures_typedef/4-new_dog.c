#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - dog caracteristics
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{	
		free(p);
		return;
	}
	
	p->name = name;
	p->age = age;
	p-> = owner;
	return (p);
}

