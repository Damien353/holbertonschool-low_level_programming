#include"lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: A pointer to the head of the list
 *
 * Return: The sum of all the data (n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;/*Initialiser la somme 0*/
	dlistint_t *current_node = head;/*Pointeur pour parcourir la liste*/

	/*Parcourir la liste*/
	while (current_node != NULL)
	{
	sum += current_node->n;/*Ajouter valeur du noeud courant a la somme*/
	current_node = current_node->next;/*Passer au noeud suivant*/
	}
	return (sum);/*Retourner la somme totale*/
}
