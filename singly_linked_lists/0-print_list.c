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
	size_t count = 0;

	/*parcours de la liste*/
	while (h != NULL)
	{
		/*verifier si la chaine str est NULL*/
		if (h->str == NULL)
		{
			printf("[0] ((nil)\n");
		}
		else
		{
		/*affiche la longueur de la chaine et la chaine elle-meme*/
		/*%u pour unsigned int*/
			printf("[%u] %s\n", h->len, h->str);
		}
		/*incremente count pour compter les noeuds*/
		h = h->next;
		count++;
	}
	return (count);
}
