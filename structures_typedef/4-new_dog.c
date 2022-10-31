#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - main
 * @str: ptr
 */

char	*_strdup(char *str)
{
	char	*res;
	int	x;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
		;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == 0)
		return (0);
	for (x = 0; str[x]; x++)
		res[x] = str[x];
	res[x] = '\0';
	return (res);
}



/**
 * new_dog - dog caracteristics
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *p, char *n, char *o;

	if (name == 0 || owner == 0)
		return (0);

	n = _strdup(name);
	if (n == 0)
		return (0);
	o = _strdup(owner);
	if (o == 0)
	{
		free(n);
		return (0);
	}
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(n);
		free(o);
		return;
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}

