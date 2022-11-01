#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - main
 * @str: ptr
 * Return: res
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
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *n;
	char *o;

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
		return (0);
	}
	p->name = n;
	p->age = age;
	p->owner = o;
	return (p);
}

