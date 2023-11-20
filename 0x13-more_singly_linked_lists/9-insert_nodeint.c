#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int integer;
	listint_t *newt;
	listint_t *temping = *head;

	newt = malloc(sizeof(listint_t));

	if (!newt || !head)
	{
		return (NULL);
	}

	newt->n = n;
	newt->next = NULL;

	if (idx == 0)
	{
		newt->next = *head;
		*head = newt;
		return (newt);
	}

	for (integer = 0; temping && integer < idx; integer++)
	{
		if (integer == idx - 1)
		{
			newt->next = temping->next;
			temping->next = newt;
			return (newt);
		}
		else
		{
			temping = temping->next;
		}
	}

	return (NULL);
}
