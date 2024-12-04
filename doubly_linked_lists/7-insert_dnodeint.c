#include"lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: The index to insert the new node
 * @n: The value of the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *current_node = *h;

	/*Si l'index est 0, on insere au debut*/
	if (idx == 0)
	return (add_dnodeint(h, n));

	/*Parcours de la liste jusqu'a index specifie*/
	while (current_node != NULL && i < idx - 1)
	{
	current_node = current_node->next;
	i++;
	}

	/*Si on atteint fin liste sans avoir trouve index, impossible inserer*/
	if (current_node == NULL)
	return (NULL);

	/*Creation du nouveau noeud*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;

	/*Si le noeud suivant est pas NULL, on doit ajuster son pointeur prev*/
	if (current_node->next != NULL)
	current_node->next->prev = new_node;

	/*Ajuster pointeur next du noeud prev pour pointer vers new noeud*/
	current_node->next = new_node;

	return (new_node);
}
