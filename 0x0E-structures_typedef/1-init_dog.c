#include "dog.h"
#include <stdlib.h>
/**
* init_dog - write a function that initializes a variable of type struct dog
* @d: pointer to struct
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: nothing
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
