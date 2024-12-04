#include"lists.h"
/**
 *add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *@head: A pointer to the pointer to the head of the dlistint_t list
 *@n: The integer value to be stored in the new node
 *Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	/*allouer de la memoire pour nouveau noeud*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*initialiser nouveau noeud*/
	new_node->n = n;
	new_node->next = NULL;/*prochain noeud sera null(dernier de la liste)*/
	new_node->prev = NULL;/*prev sera null si premier noeud*/

	/*si liste est vide, nouveau noeud devient head*/
	if (*head == NULL)
	{
		*head = new_node;/*mettre a jour head de la liste*/
		return (new_node);/*retourner adresse nouveau noeud*/
	}
	/*trouver dernier noeud de la liste*/
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/*ajouter nouveau noeud a la fin de la liste*/
	last_node->next = new_node;/*last noeud pointe vers new noeud*/
	new_node->prev = last_node;/*new noeud pointe vers ancien last noeud*/
	return (new_node);/*return adresse new noeud*/
}
