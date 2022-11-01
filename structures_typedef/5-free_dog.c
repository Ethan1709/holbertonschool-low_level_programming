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
	d = malloc(sizeof(char) * (dog_t + 1);
	if (d == 0)
		return;
	free(d);
}

