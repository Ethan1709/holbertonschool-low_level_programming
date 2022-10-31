#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - dog caracteristics
 * @d: the pointer
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: nil");
	if (d->owner == NULL)
		printf("Owner: nil");
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner);
}
