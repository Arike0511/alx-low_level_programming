#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difference;
	listint_t *temping;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temping = (*h)->next;
			free(*h);
			*h = temping;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
