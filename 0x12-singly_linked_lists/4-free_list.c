#include <stdlib.h>
#include "lists.h"

/**
 * free_list - The program frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *tempting;

	while (head)
	{
		tempting = head->next;
		free(head->str);
		free(head);
		head = tempting;
	}
}
