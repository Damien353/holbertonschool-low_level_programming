#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: pointer to the list
 *
 *Return: numbers of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/*parcours de la liste*/
	while (h != NULL)
	{
		/*on incremente le compteur de noeud*/
		count++;
		/*on passe au noeud suivant*/
		h = h->next;
	}
	return (count);
}
