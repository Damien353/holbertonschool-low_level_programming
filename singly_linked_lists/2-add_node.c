#include"lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be duplicated and added in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/*verifie si chain str est null*/
	if (str == NULL)
		return (NULL);
	/*il faut allouer de la memoire pour new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/*on doit duppliquer la chaine str avec strdup*/
	/*qui alloue de la memoire et copie de la chaine str*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /*pour liberer la memoire allouee au noeud*/
		return (NULL);
	}
	/*calcule la longueur de la chaine et assigne a len(obligatoire)*/
	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;
	/*prochain noeud de ce noeud est ancienne tete de la liste*/
	new_node->next = *head;
	/*tete pointe maintenant vers nouveau noeud*/
	*head = new_node;
	return (new_node);/*retourne adresse du nouveau noeud*/
}
