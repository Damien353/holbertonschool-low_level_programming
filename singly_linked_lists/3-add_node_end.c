#include "lists.h"
/**
 *add_node_end - Ajoute un nouveau noeud a la fin d'une liste_t
 *@head: Un pointeur vers le premier noeud de la liste
 *@str: La chai�ne de caratere a ajouter au nouveau oeud
 *
 *Return: Adresse du nouvel element ou null en cas echec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	/*Ve�rifier si strest null*/
	if (str == NULL)
	return (NULL);

	/*Allouer de la me�moire pour le nouveu noeud*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	/*Dupliquer la chai�ne e assigne a new_node->str*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node); /*Libe�rer lame�moire allue�e pour le nouvau noeud*/
	return (NULL);
	}

	/*Calculer la longueur de la chaine*/
	new_node->len = 0;
	while (str[new_node->len] != '\0')
	new_node->len++;

	/*S'assurer que le pointeur next du nouveau noeud est null*/
	new_node->next = NULL;

	/*Si la liste vide, nouveau noeud devient tete de liste*/
	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	/*Sinon, parcourir liste jusqu'au dernier noeud et lier nouveau noeud*/
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
		last_node->next = new_node;
	}
	return (new_node);/*Retourner l'adresse du nouveau noeud*/
}
