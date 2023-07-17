#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *
  *
  *
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	if (d->age == 0.0)
	{
		printf("Age: (nil)\n");
	} else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
