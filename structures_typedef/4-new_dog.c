#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *_strlen - entry point
 *@s: fezihfa
 *Return: 0 success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{
	length++;
	s++;
}
	return (length);
}
/**
 *_strncpy - entry point
 *@dest: string
 *@src: string
 *@n: caractere
 *Return: 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/**
 *new_dog - creates a new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog proprio
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strncpy(d->name, name);
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strncpy(d->owner, owner);
	d->age = age;
	return (d);
}
