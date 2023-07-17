#include "dog.h"
/**
  * init_dog - function that initialize struct dog
  * struct dog - initialize variable of type dog
  * @d: pointer variable to struct dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
