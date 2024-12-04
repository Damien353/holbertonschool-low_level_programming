#include"lists.h"
/**
 *add_dnodeint - ajoute un nouveau noeud au debut de la liste dlistint_t
 *@head: pointeur vers la head de la liste
 *@n: valeur d'un entier a ranger dans nouveau noeud
 *Return: adresse du nouvel element ou NULL si echoue
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;/*pointeur pour nouveau noeud*/
	/*allouer de la memoire pour nouveau noeud*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*initialiser le nouveau noeud*/
	new_node->n = n;/*stocke valeur n dans le noeud*/
	new_node->prev = NULL;/*le noeud sera premier donc prev est NULL*/
	new_node->next = *head;/*prochain noeud est l'ancienne head*/
	/*si liste pas vide, mettre a jour pointeur prev de l'ancienne head*/
	if (*head != NULL)
		(*head)->prev = new_node;
	/*mettre a jour head pour pointer vers nouveau noeud*/
	*head = new_node;
	return (new_node);
}
