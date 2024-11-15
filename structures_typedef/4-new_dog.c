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
 *_strdup - return pointer to new allocated memory
 *@str: string
 *Return: 0 success
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0') /*calculer la longueur de len*/
	{
		len++;
	}
	dup_str = (char *)malloc((len + 1) * sizeof(char)); /*allouer memoire pour nouvelle chaine y compris null*/

	if (dup_str == NULL)
	{
		return (NULL);
	}
	/*recopier la memoire la chaine caractere par caractere*/
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';
	return (dup_str);
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
	d->name = _strdup(name);
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	d->age = age;
	return (d);
}
