#include "lists.h"
/**
 *free_list - Libere une liste list_t
 *@head: Pointeur vers head de la liste list_t
 *
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		
		if (current_node->str != NULL)
		{
			free(current_node->str);
		}
		free(current_node->str);/*libere la chaine str*/
		free(current_node);/*libere le noeud lui-meme*/
	}
}
