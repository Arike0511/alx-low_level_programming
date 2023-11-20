#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temping = *head;
	listint_t *now = NULL;
	unsigned int integer = 0;

	if (*head == NULL)
	{
		return (-1);
	}


	if (index == 0)
	{
		*head = (*head)->next;
		free(temping);
		return (1);
	}

	while (integer < index - 1)
	{
		if (!temping || !(temping->next))
		{
			return (-1);
		}
	}
	temping = temping->next;
	integer++;

	now = temping->next;
	temping->next = now->next;
	free(now);

	return (1);
}
