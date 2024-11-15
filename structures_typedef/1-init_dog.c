#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initialize a variable
 *@d:variable
 *@name:dog name
 *@age:dog age
 *@owner:dog propri
 *Return: Always 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
