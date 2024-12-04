#include"lists.h"
/**
 *dlistint_len - retourne le nombre d'elements dans la liste dlistint_len
 *@h: pointeur vers head de la liste
 *
 *Return: nombre d'elements dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;/*compteur pour nombre d'elements*/

	while (h != NULL)
	{
		count++;/*on incremente le compteur de chaque noeud*/
		h = h->next;/*passe au noeud suivant*/
	}
	return (count);/*retourne le nombre d'elements*/
}
