#include "lists.h"

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 *print_list - prints all elements of a list_t list
 *@h: pointer to the list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
