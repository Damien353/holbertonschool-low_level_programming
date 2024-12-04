#include"lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: A pointer to the head of the list
 * @index: The index of the node, starting from 0
 *
 * Return: The address of the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node = head;

	/*Parcourir la liste jusqu'a index specifie*/
	while (current_node != NULL)
	{
	if (i == index)/*Si on a atteint l'index voulu*/
	return current_node;/*Retourner le noeud a cet index*/
	current_node = current_node->next;/*Passer au noeud suivant*/
	i++;
	}

	/*Si on sort de la boucle sans avoir trouve l'index, retourner NULL*/
	return NULL;
}
