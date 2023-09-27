#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely even if it contains a loop.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t elements_freed = 0;
	int address_difference;
	listint_t *temp_node;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		address_difference = *head - (*head)->next;

		if (address_difference > 0)
		{
			temp_node = (*head)->next;
			free(*head);
			*head = temp_node;
			elements_freed++;
		}
		else
		{
			free(*head);
			*head = NULL;
			elements_freed++;
			break;
		}
	}

	*head = NULL;

	return (elements_freed);
}

