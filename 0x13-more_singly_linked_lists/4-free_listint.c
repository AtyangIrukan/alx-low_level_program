#include "lists.h"
/*free_listint-takes a pointer to the head of a linked list as its argument and frees all the nodes in the list
 *  @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *last_node;

	while (head != NULL)
	{
		last_node = head->next;
		free(head);
		head = last_node;
	}
}
