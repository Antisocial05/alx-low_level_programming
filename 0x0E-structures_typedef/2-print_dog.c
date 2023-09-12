#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints information about a struct dog
* @d: pointer to the struct dog to print
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(ni1)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(ni1)");
	}
}
