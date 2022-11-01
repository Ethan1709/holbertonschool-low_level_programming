#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - dog caracteristics
 * @d: ptr
 * Return: success
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	if (d->name == 0)
		return;
	free(d->name);

	if (d->owner == 0)
		return;
	free(d->owner);
	free(d);
}

