#include"lists.h"
/**
 *print_dlistint - print tous les elements d'une liste dlistint_t
 *@h: pointeur vers head de la liste dlistint_t
 *
 *Return: nombre de nodes de la liste
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;/*variable pour compter les noeuds*/

	while (h != NULL)/*tant qu'on est pas a la fin de la liste*/
	{
		printf("%d\n", h->n);/*imprime valeur du noeud courant*/
		h = h->next;/*on passe au noeud suivant*/
		count++;/*on incremente le compteur de noeud*/
	}
	return (count);
}
